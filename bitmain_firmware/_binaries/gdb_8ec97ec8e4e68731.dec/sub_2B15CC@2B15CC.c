int __fastcall sub_2B15CC(int a1, int a2, unsigned int a3, unsigned __int8 *a4)
{
  unsigned __int8 *v4; // r5
  unsigned __int8 v7; // r2
  int v8; // r8
  int v9; // r9
  int v10; // r12
  unsigned __int8 *v12; // r2
  char v13; // r0
  int v14; // t1
  unsigned __int8 v15; // r12
  char v16; // r3
  int v17; // r5
  int result; // r0
  _BYTE v19[12]; // [sp+0h] [bp-Ch] BYREF

  v4 = &a4[-a3];
  v7 = (_BYTE)a4 - a3 + 5;
  v8 = (unsigned __int8)a0123456789abcd_4[v7 & 0xF];
  v9 = (unsigned __int8)a0123456789abcd_4[v7 >> 4];
  LOWORD(v10) = (unsigned __int16)&unk_48FC0C;
  v19[3] = a2;
  v19[2] = v8;
  v19[1] = v9;
  v19[0] = 37;
  if ( (unsigned int)a4 <= a3 )
  {
    v13 = 0;
    HIWORD(v10) = (unsigned int)&unk_48FC0C >> 16;
  }
  else
  {
    v12 = (unsigned __int8 *)a3;
    HIWORD(v10) = (unsigned int)&unk_48FC0C >> 16;
    v13 = 0;
    do
    {
      v14 = *v12++;
      v13 += *(_BYTE *)(v10 + v14);
    }
    while ( a4 != v12 );
  }
  v15 = *(_BYTE *)(v10 + a2) + *(_BYTE *)(v10 + v8) + *(_BYTE *)(v10 + v9) + v13;
  v16 = a0123456789abcd_4[v15 >> 4];
  v19[5] = a0123456789abcd_4[v15 & 0xF];
  v19[4] = v16;
  if ( sub_2A8884((int)v19, 6, a1) != 6 )
    sub_2A6BF0((int)"tekhex.c", 792, (int)"out");
  v17 = (int)(v4 + 1);
  *a4 = 10;
  result = sub_2A8884(a3, v17, a1);
  if ( result != v17 )
    sub_2A6BF0((int)"tekhex.c", 796, (int)"out");
  return result;
}
