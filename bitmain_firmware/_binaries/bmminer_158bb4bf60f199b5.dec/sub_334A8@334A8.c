int __fastcall sub_334A8(FILE **a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v5; // r7
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r5
  int v16; // r8
  _DWORD *v17; // r4
  int v19; // [sp+4h] [bp-840h]
  _DWORD ptr[12]; // [sp+10h] [bp-834h] BYREF
  char v23[2052]; // [sp+40h] [bp-804h] BYREF

  if ( a4 )
  {
    v4 = 52 * a3 * a4;
    v19 = 4 * ((_DWORD)&unk_EDF22 + a2);
    v5 = 0;
    while ( 1 )
    {
      v15 = v5++;
      v16 = *(_DWORD *)(dword_1AEA68 + v19 + 4);
      v17 = (_DWORD *)(v16 + v4);
      if ( fread(ptr, 1u, 0x30u, *a1) != 48 )
        break;
      v17[1] = ptr[0];
      v6 = ptr[5];
      v7 = ptr[6];
      v8 = ptr[7];
      v17[5] = ptr[4];
      *(_DWORD *)(v16 + v4 + 24) = v6;
      *(_DWORD *)(v16 + v4 + 28) = v7;
      *(_DWORD *)(v16 + v4 + 32) = v8;
      v9 = ptr[9];
      v10 = ptr[10];
      v11 = ptr[11];
      *(_DWORD *)(v16 + v4 + 36) = ptr[8];
      *(_DWORD *)(v16 + v4 + 40) = v9;
      *(_DWORD *)(v16 + v4 + 44) = v10;
      v12 = ptr[1];
      v13 = ptr[2];
      v14 = ptr[3];
      *(_DWORD *)(v16 + v4 + 48) = v11;
      v17[2] = v12;
      *(_DWORD *)(v16 + v4 + 12) = v13;
      *(_DWORD *)(v16 + v4 + 16) = v14;
      *(_DWORD *)(v16 + v4) = v15;
      v4 += 52;
      if ( v5 == a4 )
        return v5;
    }
    if ( (unsigned int)dword_9E31C <= 3 )
      return v15;
    strcpy(v23, "Load core pattern failed!\n");
    sub_47AB4(3, v23, 0);
    return v15;
  }
  else
  {
    return 0;
  }
}
