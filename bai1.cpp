#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
	// ma bk
	int parcelid;
	// ten nguoi gui
	char sender_name[40];
	// ten nguoi nhan
	char recipient_name[40];
	// trong luong
	float weight;
	// don gia
	int unitprice;
}Parcel;


// nhap buu kien
void intput_parcel(Parcel parcel[], int& n) {
	printf("Nhap so luong buu kien: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Nhap buu kien thu %d:\n\n", i + 1);

		printf("Print parcelid: ");
		scanf("%d", &parcel[i].parcelid);

		printf("Print sender name: ");
		scanf("%s", &parcel[i].sender_name);

		printf("Print recipient name: ");
		scanf("%s", &parcel[i].recipient_name);

		printf("Print weight: ");
		scanf("%f", &parcel[i].weight);

		printf("Print unitprice: ");
		scanf("%d", &parcel[i].unitprice);
	}
}

// in buu kien
void output_parcel(Parcel parcel[], int n) {
	printf("\nList parcel\n");

	for (int i = 0; i < n; i++) {
		printf("ParcelID: %d - Sender name: %s - Recipient name: %s - Weight: %.2f - Unitprice: %d\n",
			parcel[i].parcelid, parcel[i].sender_name, parcel[i].recipient_name, parcel[i].weight, parcel[i].unitprice);
	}
}

// xep tang dan theo ma BK
void Interchange_Sort_Parcel(Parcel parcel[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (parcel[i].parcelid > parcel[j].parcelid) {
				Parcel tmp = parcel[i];
				parcel[i] = parcel[j];
				parcel[j] = tmp;
			}
		}
	}
}

void Selection_Sort_Parcel(Parcel parcel[], int n) {
	int min_pos;
	for (int i = 0; i < n; i++) {
		min_pos = i;
		for (int j = i + 1; j < n; j++) {
			if (parcel[j].parcelid < parcel[min_pos].parcelid) {
				min_pos = j;
			}
		}
		Parcel tmp = parcel[i];
		parcel[i] = parcel[min_pos];
		parcel[min_pos] = tmp;
	}

}

void Insertion_Sort_Parcel(Parcel parcel[], int n) {
	int pos;
	Parcel value;
	for (int i = 1; i < n; i++) {
		pos = i - 1;
		value = parcel[i];
		while (pos >= 0 && parcel[pos].parcelid > value.parcelid) {
			parcel[pos + 1] = parcel[pos];
			--pos;
		}
		parcel[pos + 1] = value;
	}
}

void Bubble_Sort_Parcel(Parcel parcel[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; --j) {
			if (parcel[j].parcelid < parcel[j - 1].parcelid) {
				Parcel tmp = parcel[j];
				parcel[j] = parcel[j - 1];
				parcel[j - 1] = tmp;
			}
		}
	}
}

// xep giam theo trong luong
void Interchange_Sort_Weight(Parcel parcel[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (parcel[i].weight < parcel[j].weight) {
				Parcel tmp = parcel[i];
				parcel[i] = parcel[j];
				parcel[j] = tmp;
			}
		}
	}
}

void Selection_Sort_Weight(Parcel parcel[], int n) {
	int min_pos;
	for (int i = 0; i < n; i++) {
		min_pos = i;
		for (int j = i + 1; j < n; j++) {
			if (parcel[j].weight > parcel[min_pos].weight) {
				min_pos = j;
			}
		}
		Parcel tmp = parcel[i];
		parcel[i] = parcel[min_pos];
		parcel[min_pos] = tmp;
	}

}

void Insertion_Sort_Weight(Parcel parcel[], int n) {
	int pos;
	Parcel value;
	for (int i = 1; i < n; i++) {
		pos = i - 1;
		value = parcel[i];
		while (pos >= 0 && parcel[pos].weight < value.weight) {
			parcel[pos + 1] = parcel[pos];
			--pos;
		}
		parcel[pos + 1] = value;
	}
}

void Bubble_Sort_Weight(Parcel parcel[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; --j) {
			if (parcel[j].weight > parcel[j - 1].weight) {
				Parcel tmp = parcel[j];
				parcel[j] = parcel[j - 1];
				parcel[j - 1] = tmp;
			}
		}
	}
}

// xep tang theo don gia
void Interchange_Sort_Unitprice(Parcel parcel[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (parcel[i].unitprice > parcel[j].unitprice) {
				Parcel tmp = parcel[i];
				parcel[i] = parcel[j];
				parcel[j] = tmp;
			}
		}
	}
}

void Selection_Sort_Unitprice(Parcel parcel[], int n) {
	int min_pos;
	for (int i = 0; i < n; i++) {
		min_pos = i;
		for (int j = i + 1; j < n; j++) {
			if (parcel[j].unitprice < parcel[min_pos].unitprice) {
				min_pos = j;
			}
		}
		Parcel tmp = parcel[i];
		parcel[i] = parcel[min_pos];
		parcel[min_pos] = tmp;
	}

}

void Insertion_Sort_Unitprice(Parcel parcel[], int n) {
	int pos;
	Parcel value;
	for (int i = 1; i < n; i++) {
		pos = i - 1;
		value = parcel[i];
		while (pos >= 0 && parcel[pos].unitprice > value.unitprice) {
			parcel[pos + 1] = parcel[pos];
			--pos;
		}
		parcel[pos + 1] = value;
	}
}

void Bubble_Sort_Unitprice(Parcel parcel[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; --j) {
			if (parcel[j].unitprice < parcel[j - 1].unitprice) {
				Parcel tmp = parcel[j];
				parcel[j] = parcel[j - 1];
				parcel[j - 1] = tmp;
			}
		}
	}
}

void Print_Menu(int& check) {
	printf("\n-------Jop List-------\n");
	printf("1: Import List\n");
	printf("2: Print List\n");
	printf("3: Sap xep tang dan theo ma BK\n");
	printf("4: Sap xep giam theo trong luong\n");
	printf("5: Sap xep tang theo don gia\n");
	printf("0: Exit\n");
	printf("-------Hay chon cong viec khac-------\n\n");
	printf("\n");
	printf("Chon cong viec can thuc hien: ");
	scanf("%d", &check);
}
int main() {
	Parcel a[MAX];
	int n;
	int check;
	do {
		Print_Menu(check);
		switch (check) {
		case 1:
			printf("\n");
			printf("Import List\n");
			intput_parcel(a, n);
			printf("\n");
			break;
		case 2:
			printf("Print List\n");
			output_parcel(a, n);
			break;
		case 3:
			printf("-----Sap xep tang dan theo ma BK-----\n");
			printf("1: Interchange sort\n");
			printf("2: Selection sort\n");
			printf("3: Insertion sort\n");
			printf("4: Bubble sort\n");
			printf("Chon cong viec can thuc hien: ");
			int check2;
			scanf("%d", &check2);
			switch (check2) {
			case 1:
				Interchange_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 2:
				Selection_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 3:
				Insertion_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 4:
				Bubble_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			default:
				check2 = 0;
				break;
			}
			break;
		case 4:
			printf("-----Sap xep giam theo trong luong-----\n");
			printf("1: Interchange sort\n");
			printf("2: Selection sort\n");
			printf("3: Insertion sort\n");
			printf("4: Bubble sort\n");
			printf("Chon cong viec can thuc hien: ");
			int check3;
			scanf("%d", &check3);
			switch (check3) {
			case 1:
				Interchange_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 2:
				Selection_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 3:
				Insertion_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 4:
				Bubble_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			default:
				check3 = 0;
				break;
			}
			break;
		case 5:
			printf("-----Sap xep tang theo don gia-----\n");
			printf("1: Interchange sort\n");
			printf("2: Selection sort\n");
			printf("3: Insertion sort\n");
			printf("4: Bubble sort\n");
			printf("Chon cong viec can thuc hien: ");
			int check4;
			scanf("%d", &check4);
			switch (check4) {
			case 1:
				Interchange_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 2:
				Selection_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 3:
				Insertion_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			case 4:
				Bubble_Sort_Parcel(a, n);
				output_parcel(a, n);
				break;
			default:
				check4 = 0;
				break;
			}
			break;
		}
	} while (check != 0);

	return 0;

}


