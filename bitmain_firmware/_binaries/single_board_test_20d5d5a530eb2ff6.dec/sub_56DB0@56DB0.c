int __fastcall sub_56DB0(int a1, char *dest, signed int a3)
{
  char **v3; // r6
  _DWORD *v4; // r5
  int v5; // r3
  bool v6; // cc
  int v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r8
  int v12; // r2
  char *v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r3
  int result; // r0

  v3 = (char **)(a1 + 262148);
  v4 = (_DWORD *)(a1 + 0x40000);
  v5 = *(_DWORD *)(a1 + 262148);
  v6 = a3 <= 0x10000;
  v8 = *(_DWORD *)(a1 + 0x40000);
  if ( a3 > 0x10000 )
    a3 = 0x10000;
  v9 = v8 - v5;
  if ( v6 && a3 <= 3 )
    a3 = 0;
  if ( a3 >= v9 )
    a3 = v9;
  v10 = a3;
  v11 = -a3;
  if ( a3 > 0 )
  {
    memmove(dest, (const void *)(v8 - a3), a3);
    v9 = *v4 - (_DWORD)*v3;
  }
  v12 = v4[3];
  v13 = &dest[v10 + v11];
  *v4 = &dest[v10];
  *v3 = v13;
  v14 = v4[5];
  v15 = v9 - v10 + v12;
  v4[2] = v13;
  result = v10;
  v4[3] = v15;
  v4[4] = v15;
  if ( v15 > v14 )
    v4[5] = v15;
  return result;
}
