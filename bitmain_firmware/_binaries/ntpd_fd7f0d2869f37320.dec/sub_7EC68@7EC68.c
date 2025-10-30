int __fastcall sub_7EC68(int a1, const char **a2, const char *a3, int a4)
{
  const char *v7; // r9
  int *v9; // r10
  unsigned int v10; // r0
  char *v11; // r11
  int v12; // r9
  const unsigned __int16 **v13; // r0
  char *v14; // r2
  const unsigned __int16 *v15; // r0
  char *v16; // r1
  int v17; // t1
  char *v19; // [sp+0h] [bp-Ch] BYREF

  v7 = *a2;
  if ( a1 == -1 )
    return -1;
  v9 = _errno_location();
  *v9 = 0;
  v10 = strtoul(v7, &v19, 10);
  v11 = v19;
  v12 = v10;
  if ( *v9 )
    return -1;
  v13 = _ctype_b_loc();
  v14 = v11;
  v15 = *v13;
  do
  {
    v16 = v14;
    v17 = (unsigned __int8)*v14++;
  }
  while ( (v15[v17] & 0x2000) != 0 );
  if ( a3 == v16 )
  {
    *a2 = a3;
    return sub_7EBB0(a1, v12, a4);
  }
  else
  {
    *v9 = 22;
    return -1;
  }
}
