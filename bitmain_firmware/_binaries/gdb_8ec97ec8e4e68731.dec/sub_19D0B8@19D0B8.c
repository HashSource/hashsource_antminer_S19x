int __fastcall sub_19D0B8(int a1, int *a2)
{
  int v3; // r2
  int v4; // r3
  int *v5; // r1
  int v6; // r0
  int v7; // r1
  int v9; // [sp+0h] [bp-20h] BYREF
  int v10; // [sp+4h] [bp-1Ch]
  int v11; // [sp+8h] [bp-18h]
  int v12; // [sp+Ch] [bp-14h]
  int v13; // [sp+10h] [bp-10h]
  int v14; // [sp+14h] [bp-Ch]
  int v15; // [sp+18h] [bp-8h]
  int v16; // [sp+1Ch] [bp-4h]

  v16 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 2;
  v15 = 3;
  if ( a2 )
  {
    v3 = a2[2];
    if ( *a2 )
      v10 = *a2;
    v4 = a2[1];
    v12 = v3;
    if ( v4 )
      v11 = v4;
    if ( a2[3] )
      v13 = a2[3];
    if ( a2[5] != 3 )
    {
      v5 = a2 + 4;
      v6 = *v5;
      v7 = v5[1];
      v14 = v6;
      v15 = v7;
    }
  }
  ((void (__fastcall *)(int, int *))loc_19CF64)(a1, &v9);
  return a1;
}
