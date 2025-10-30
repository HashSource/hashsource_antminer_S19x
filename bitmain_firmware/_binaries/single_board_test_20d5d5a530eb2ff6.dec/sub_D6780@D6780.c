int __fastcall sub_D6780(int a1, int a2, int a3, int a4)
{
  unsigned int i; // r4
  unsigned int v8; // r6
  char v9; // r3
  int v10; // r9
  int v11; // r10
  int v12; // r11
  int v13; // r8
  int v14; // r0
  char v15; // r1
  int v16; // r0
  int v18; // [sp+18h] [bp-1Ch]
  char v20[4]; // [sp+28h] [bp-Ch] BYREF
  _BYTE v21[8]; // [sp+2Ch] [bp-8h] BYREF

  v18 = a4;
  if ( !sub_D8E10(a1, 0x2000) )
    v18 = 8 * a4;
  if ( v18 )
  {
    for ( i = 0; i != v18; ++i )
    {
      v8 = i >> 3;
      if ( (((int)*(unsigned __int8 *)(a3 + (i >> 3)) >> (~(_BYTE)i & 7)) & 1) != 0 )
        v9 = 0x80;
      else
        v9 = 0;
      v20[0] = v9;
      v10 = sub_D8934(a1);
      v11 = sub_D8934(a1);
      v12 = sub_D8934(a1);
      v13 = sub_D8AC0(a1);
      v14 = sub_D8924(a1);
      sub_13BC30(v20, v21, 1, 1, v10, v11 + 128, v12 + 256, v13, v14);
      v15 = i & 7;
      v16 = 128 >> (i & 7);
      *(_BYTE *)(a2 + v8) = ((v21[0] & 0x80) >> v15) | *(_BYTE *)(a2 + v8) & ~(_BYTE)v16;
    }
  }
  return 1;
}
