int *__fastcall sub_21CA9C(int *a1, int a2, char *a3)
{
  char *v5; // r1
  char *v6; // r0
  int v7; // r5
  const char *v8; // r7
  int v9; // r4
  int v10; // r3
  int v11; // r1
  int v13[2]; // [sp+Ch] [bp-24h] BYREF
  void *v14[2]; // [sp+14h] [bp-1Ch] BYREF
  _BYTE v15[16]; // [sp+1Ch] [bp-14h] BYREF
  void *ptr; // [sp+2Ch] [bp-4h]

  v14[0] = v15;
  v5 = off_46D5A4[0][2];
  v14[1] = 0;
  v15[0] = 0;
  ptr = 0;
  v6 = sub_21C8B0(a3, (int)v5, (int *)v14);
  v7 = *(_DWORD *)(a2 + 180);
  v8 = v6;
  if ( !v7 )
    v7 = a2;
  v9 = v7;
  do
  {
    sub_21C2F0(v13, v9, 0, v8, 1);
    v10 = v13[0];
    if ( v13[0] || (sub_21C2F0(v13, v9, 1, v8, 1), (v10 = v13[0]) != 0) )
    {
      v13[0] = v10;
      v11 = v13[1];
      *a1 = v10;
      a1[1] = v11;
      goto LABEL_6;
    }
    v9 = ((int (__fastcall *)(int, int))loc_1B7308)(v7, v9);
  }
  while ( v9 );
  *a1 = 0;
  a1[1] = 0;
LABEL_6:
  if ( ptr )
    free(ptr);
  if ( v14[0] != v15 )
    sub_339E64(v14[0]);
  return a1;
}
