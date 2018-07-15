#include <stdio.h> // untuk memanggil library stdio.h
typedef struct node // untuk mendeklarasi pointer dan simpul
{
	char data; // deklarasi var data bertipe character
	node *left; // deklarasi node ke kiri
	node *right; // deklarasi node ke kanan
};
node *root=NULL; // membuat node root kosong atau simpul baru sebagai root

void Tambahnode(node**root,char isi) //membuat proses Tambahnode menggunakan node = root dan data = isi
{	
	if((*root)==NULL) // fungsi untuk cek jika root kosong
	{ // jika root kosong maka jalankan proses dibawah : 
		node *baru; // deklarasi var baru sebagai node
		baru = new node; // mengisi var baru dengan node baru
		baru->data = isi; // mengisi data dari node baru dengan variabel isi
		baru->left = NULL; // mengisi link kiri dari node baru dengan NULL atau kosong
		baru->right = NULL; // mengisi link kanan dari node baru dengan NULL atau kosong
		(*root) = baru; // mengisi var node root dengan isi var node baru 
	}
}

void preorder(node *root) // membuat proses preorder menggunakan node = root
{
	if (root != NULL) // fungsi untuk cek jika node root tidak 	NULL atau tidak kosong
	{ // Jika root tidak kosong maka jalankan program dibawah ini :
		printf("%c",root->data); // mencetak data dari root dengan type char
		preorder(root->left); // mencetak link kiri dari root 
		preorder(root->right); // mencetak link kanan dari root
		// Jadi urutan dari preorder ini sebagai berikut :
		// 1. Mencetak root 
		// 2. Mencetak anak dari root di arah kiri
		// 3. Mencetak anak dari root ke arah kanan
		// ilustrasi sesuai gambar terlampir (*gambar preorder)
	}
}

void inorder(node *root) // membuat proses inorder menggunakan node = root
{
	if (root != NULL) // fungsi untuk cek jika node root tidak kosong atau tidak = NULL
	{ // jika root tidak kosong maka lakukan proses berikut :
		inorder (root->left); // mencetak link kiri dari root
		printf ("%c",root->data); // mencetak data dari root
		inorder (root->right); // mencetak link kanan dari root
		// Jadi urutan dari inorder ini sebagai berikut :
		// 1. Mencetak anak dari root di arah kiri
		// 2. Mencetak root 
		// 3. Mencetak anak dari root ke arah kanan
		// ilustrasi sesuai gambar terlampir (*gambar inorder)
	}
}

void postorder(node *root) // membuat proses postorder menggunakan node = root
{
	if (root != NULL) // fungsi untuk cek jika node root tidak kosong atau tidak = NULL
	{ // jika root tidak kosong maka lakukan proses berikut :
		postorder (root->left); // mencetak link kiri dari root
		postorder (root->right); // mencetak link kanan dari root
		printf("%c",root->data);  // mencetak data dari root
		// Jadi urutan dari inorder ini sebagai berikut :
		// 1. Mencetak anak dari root di arah kiri
		// 2. Mencetak anak dari root ke arah kanan
		// 3. Mencetak root 
		// ilustrasi sesuai gambar terlampir (*gambar postorder)
	}	
}

main() // Main program
{
	char kata; // deklarasi var kata sebagai character / char
	printf("Program By : Iman Firmansyah[GANTI NIM IMAN]\n\n"); // Mencetak text 
	printf("Program By : Dessy Ratnasari[GANTI NIM IMAN]\n\n"); // Mencetak text 
	printf("Program By : Jerry Erlangga[41517110131]\n\n"); // Mencetak text 
	Tambahnode(&root,kata='R'); // mengisi root dengan char 'R'
	Tambahnode(&root->left,kata='A'); // mengisi link kiri dari root dengan char 'A'
	Tambahnode(&root->left->left,kata='S'); // mengisi link kiri lalu kiri dari root dengan char 'S'
	Tambahnode(&root->left->left->left,kata='T'); // mengisi link kiri lalu kiri lalu kiri dari root dengan char 'T'
	Tambahnode(&root->right,kata='E'); // mengisi link kanan dari root dengan char 'E'
	//Ilustrasi sesuai gambar (*gambar RASTE )
	
	printf("Tampilan secara PreOrder : "); // Mencetak text 
	preorder(root); // Menjalankan proses preorder
	printf("\nTampilan secara InOrder : ");
	inorder(root); // Menjalankan proses inorder
	printf("\nTampilan secara PostOrder : ");
	postorder(root); // Menjalankan proses postorder
	
}
