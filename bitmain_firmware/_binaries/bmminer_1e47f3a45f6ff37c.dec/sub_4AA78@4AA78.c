int __fastcall sub_4AA78(FILE **a1, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r6
  int v7; // r7
  _DWORD *v8; // r4
  _DWORD *v9; // lr
  char *v10; // r10
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  _DWORD ptr[4]; // [sp+8h] [bp-878h] BYREF
  char v21; // [sp+18h] [bp-868h] BYREF
  char v22[2088]; // [sp+58h] [bp-828h] BYREF

  if ( !a4 )
    return 0;
  v4 = 84 * a3 * a4;
  v5 = 4 * ((_DWORD)&unk_202A2A + a2);
  v7 = 0;
  while ( 1 )
  {
    v8 = (_DWORD *)(*(_DWORD *)(dword_535D90 + v5 + 4) + v4);
    if ( fread(ptr, 1u, 0x50u, *a1) != 80 )
      break;
    v9 = v8 + 5;
    v10 = &v21;
    v8[1] = ptr[0];
    do
    {
      v9 += 4;
      v11 = *(_DWORD *)v10;
      v12 = *((_DWORD *)v10 + 1);
      v13 = *((_DWORD *)v10 + 2);
      v14 = *((_DWORD *)v10 + 3);
      v10 += 16;
      *(v9 - 4) = v11;
      *(v9 - 3) = v12;
      *(v9 - 2) = v13;
      *(v9 - 1) = v14;
    }
    while ( v10 != v22 );
    v4 += 84;
    v15 = ptr[1];
    v16 = ptr[2];
    v17 = ptr[3];
    *v8 = v7++;
    v8[2] = v15;
    v8[3] = v16;
    v8[4] = v17;
    if ( v7 == a4 )
      return v7;
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return v7;
  strcpy(v22, "Load core pattern failed!\n");
  sub_3B6AC(3, v22, 0, *(unsigned __int16 *)"");
  return v7;
}
