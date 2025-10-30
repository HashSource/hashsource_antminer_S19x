int __fastcall sub_7D81C(int a1, const char **a2, const char *a3, int a4)
{
  const char *v6; // r10
  int *v9; // r8
  unsigned int v10; // r10
  char *v11; // r11
  const unsigned __int16 *v12; // r0
  char *v13; // r2
  unsigned __int8 *v14; // r1
  char *v16; // [sp+0h] [bp-Ch] BYREF

  if ( a1 == -1 )
    return -1;
  v6 = *a2;
  v9 = _errno_location();
  *v9 = 0;
  v10 = strtoul(v6, &v16, 10);
  v11 = v16;
  if ( *v9 )
    return -1;
  v12 = *_ctype_b_loc();
  v13 = v11;
  do
    v14 = (unsigned __int8 *)v13++;
  while ( (v12[*v14] & 0x2000) != 0 );
  if ( a3 == (const char *)v14 )
  {
    *a2 = a3;
    return sub_7D768(a1, v10, a4);
  }
  else
  {
    *v9 = 22;
    return -1;
  }
}
