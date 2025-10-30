char *__fastcall sub_47F90(char *a1, int a2, time_t a3)
{
  char *v4; // r0
  char *result; // r0
  time_t v6; // [sp+4h] [bp-4h] BYREF

  v6 = a3;
  v4 = ctime(&v6);
  result = strncpy(a1, v4, 0x20u);
  a1[31] = 0;
  return result;
}
