#include <stdio.h>

int main() {
	while (true) {
		try {
			int type;
			printf("入力 > ");
			scanf_s("%d", &type);

			if (type == 0) {
				return 0;
			}
			else if (type == 1) {
				throw 1;
			}
			else {
				throw "例外発生";
			};
		}
		catch (int fError) {
			printf("%d\n", fError);
		}
		catch (const char* pszError) {
			printf("%s\n", pszError);
		};
	};

	return 0;
};
