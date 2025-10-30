int sub_2B1DB8()
{
  char *v0; // r2
  int v1; // r3
  char *v2; // r2
  int v3; // r3
  int result; // r0

  dword_48FD0C = 1;
  nullsub_126();
  v0 = (char *)&unk_48FC4C;
  v1 = 10;
  *(_QWORD *)&dword_48FC3C = 0x706050403020100LL;
  word_48FC44 = 2312;
  do
    *++v0 = v1++;
  while ( v1 != 36 );
  v2 = (char *)&unk_48FC6C;
  v3 = 40;
  result = 38;
  word_48FC30 = 9508;
  byte_48FC3A = 38;
  byte_48FC6B = 39;
  do
    *++v2 = v3++;
  while ( v3 != 66 );
  return result;
}
