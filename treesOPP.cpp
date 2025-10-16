#include <stdio.h>
#include <stdlib.h>
// Node structure
struct node {
    struct node *left;
    int data;
    struct node *right;
};
typedef struct node NODE;
NODE *root = NULL;
// Function declarations
void create(int);
void insert(NODE*, NODE*);
NODE *remove(NODE*, int);
int search(NODE*, int);
void traverse_inorder(NODE*);
void traverse_preorder(NODE*);
void traverse_postorder(NODE*);
NODE* find_max(NODE*);

// Function to create and insert a new node
void create(int value) {
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    if (newnode == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    newnode->data = value;
    newnode->left = newnode->right = NULL;

    if (root == NULL)
    root = newnode; // First node becomes root
    else
    insert(root, newnode); // Insert elsewhere
}

// Recursive insertion
void insert(NODE *root, NODE *newnode) {
    if (newnode->data < root->data) {
        if (root->left == NULL)
            root->left = newnode;
        else
            insert(root->left, newnode);
    } else {
        if (root->right == NULL)
            root->right = newnode;
        else
            insert(root->right, newnode);
    }
}

// Search for a value in the BST
int search(NODE* root, int key) {
    if (root == NULL)
        return 0;
    if (root->data == key)
        return 1;
    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

// Find the maximum value node (used in deletion)
NODE* find_max(NODE* root) {
    if (root == NULL)
        return NULL;
    while (root->right != NULL)
        root = root->right;
    return root;
}

// Delete a node from the BST
NODE* remove(NODE *root, int value) {
    NODE *temp;
    if (root == NULL)
        return NULL;

    if (value < root->data)
        root->left = remove(root->left, value);
    else if (value > root->data)
        root->right = remove(root->right, value);
    else {
        // Node to be deleted found

        // Case 1: No children
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: One child (right)
        else if (root->left == NULL) {
            temp = root;
            root = root->right;
            free(temp);
        }
        // Case 3: One child (left)
        else if (root->right == NULL) {
            temp = root;
            root = root->left;
            free(temp);
        }
        // Case 4: Two children
        else {
            temp = find_max(root->left);// Or use in-order successor
            root->data = temp->data;
            root->left = remove(root->left, temp->data);
        }
    }
    return root;
}

// In-order traversal of the BST
void traverse_inorder(NODE *root) {
    if (root != NULL) {
        traverse_inorder(root->left);
        printf("%d\t", root->data);
        traverse_inorder(root->right);
    }
}
//pre-order BST traversal
void traverse_preorder(NODE *root) {
    if (root != NULL) {
    	printf("%d\t", root->data);
        traverse_preorder(root->left);
        traverse_preorder(root->right);
    }
}

//postorder BST traversal
void traverse_postorder(NODE *root) {
    if (root != NULL) {
        traverse_postorder(root->left);
        traverse_postorder(root->right);
        printf("%d\t", root->data);
    }
}

// Main menu
int main() {
    int ch, value;
    do {
        printf("\n--- Binary Search Tree Menu ---\n");
printf("1. Insert\n2. Traverse (In-Order) \n3.Traverse(preorder) \n4. Traverse(postorder) \n5. Delete \n6. Search\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &value);
                create(value);
                break;
            case 2:
                if (root == NULL)
                    printf("Tree is empty\n");
                else {
                    printf("In-Order Traversal: ");
                    traverse_inorder(root);
                    printf("\n");
                }
                break;
            case 3:
                if (root == NULL)
                    printf("Tree is empty\n");
                else {
                    printf("Pre-Order Traversal: ");
                    traverse_preorder(root);
                    printf("\n");
                }
                break;
            case 4:
                if (root == NULL)
                    printf("Tree is empty\n");
                else {
                    printf("Post-Order Traversal: ");
                    traverse_postorder(root);
                    printf("\n");
                }
                break;    
            case 5:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                if (search(root, value)) {
                    root = remove(root, value);
                    printf("Value %d deleted from the tree.\n", value);
                } else {
                    printf("Value %d not found in the tree.\n", value);
                }
                break;
            case 6:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (search(root, value))
                    printf("Value %d found in the tree.\n", value);
                else
                    printf("Value %d not found in the tree.\n", value);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (1);
}
