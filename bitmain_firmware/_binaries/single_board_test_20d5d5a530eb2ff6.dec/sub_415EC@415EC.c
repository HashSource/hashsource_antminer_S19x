int __fastcall sub_415EC(float *a1, int a2, unsigned __int8 a3)
{
  float v3; // s0
  int v5; // r9
  int v6; // r5
  char v7; // r10
  int v8; // r5
  float *v9; // r6
  int v10; // r4
  float v11; // s15
  int v12; // r3
  int v13; // r1
  int v15; // [sp+0h] [bp-6Ch]
  int v16; // [sp+Ch] [bp-60h]
  float *v18; // [sp+14h] [bp-58h]
  int v19; // [sp+18h] [bp-54h]
  int v20; // [sp+1Ch] [bp-50h]
  char v21[4]; // [sp+24h] [bp-48h] BYREF
  int v22; // [sp+28h] [bp-44h] BYREF
  int v23; // [sp+2Ch] [bp-40h]
  int v24; // [sp+30h] [bp-3Ch]
  int v25; // [sp+34h] [bp-38h]
  char v26[52]; // [sp+38h] [bp-34h] BYREF

  v5 = *(_DWORD *)(dword_705300 + 8);
  v6 = *(_DWORD *)(dword_705300 + 12);
  v20 = v6;
  sub_1E938(v26, 0x30u);
  printf("%s ", v26);
  printf("%s : set freq to %.2f from matrix.\n", "inc_freq_with_target", v3);
  snprintf(byte_63C9D0, 0x100u, "set freq to %.2f from matrix.", v3);
  sub_3CC5C((int)byte_63C9D0, v26);
  if ( v6 > 0 )
  {
    v18 = a1;
    v7 = 2 * v6;
    v16 = 4 * v6;
    v19 = 0;
    do
    {
      if ( v5 > 0 )
      {
        v8 = 0;
        v9 = v18;
        v10 = (unsigned __int8)(2 * v19);
        do
        {
          while ( 1 )
          {
            v11 = *v9;
            ++v8;
            v22 = 0;
            v23 = 0;
            v9 = (float *)((char *)v9 + v16);
            if ( v3 > v11 )
              break;
            v10 = (unsigned __int8)(v10 + v7);
            if ( v5 == v8 )
              goto LABEL_8;
          }
          sub_3DD88(*(_DWORD *)dword_705300, v10, 0);
          sub_77A24(&v22, v21, 0);
          BYTE2(v23) = v21[0];
          v12 = *(_DWORD *)dword_705300;
          v24 = v22;
          v25 = v23;
          v13 = v10;
          v10 = (unsigned __int8)(v10 + v7);
          LOWORD(v15) = v23;
          sub_77C04((unsigned __int8)v12, v13, a3, v22, v15);
        }
        while ( v5 != v8 );
      }
LABEL_8:
      ++v18;
      ++v19;
    }
    while ( v20 != v19 );
  }
  sub_1E938(v26, 0x30u);
  printf("%s ", v26);
  printf("%s : set freq over.\n", "inc_freq_with_target");
  strcpy(byte_63CAD0, "set freq over.");
  return sub_3CC5C((int)byte_63CAD0, v26);
}
