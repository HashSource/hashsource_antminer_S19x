void *__fastcall sub_10A44(void *a1)
{
  struct timeval tv; // [sp+Ch] [bp-18h] BYREF
  char s[7]; // [sp+14h] [bp-10h] BYREF
  _BYTE n[5]; // [sp+1Bh] [bp-9h]

  gettimeofday(&tv, 0);
  sprintf(s, "%ld", tv.tv_usec);
  memset(a1, 0, 0xAu);
  *(_DWORD *)&n[1] = strlen(s);
  n[0] = 6 - n[1];
  if ( 6 != n[1] )
    memset(a1, 48, n[0]);
  strcat((char *)a1, s);
  return a1;
}
