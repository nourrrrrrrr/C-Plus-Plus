void pigeonhole_sort(int, int, int *);
int main() {
int i, min, max;
int a[]={7, 4, 2, 6, 3, 1, 5};
min = a[0];
max = a[0];
for (i = 1; i < MAX; i++) {
if (a[i] < min) {
min = a[i];}
if (a[i] > max) {
max = a[i];}}
pigeonhole_sort(min, max, a);
for (i = 0; i < MAX; i++) {
cout<< a[i]<< "\t";}
void pigeonhole_sort(int mi, int ma, int * a) {
int k, count = 0, i;
int *current;
current = a;
k = ma - mi + 1;
int holes[k];
for (i = 0; i < k; i++) {
holes[i] = 0;}
for (i = 0; i < k; i++, current++) {
holes[*current-mi] += 1;}
for (count = 0, current = &a[0]; count < k; count++) {
while (holes[count]--> 0) {
*current++ = count + mi;}}}

