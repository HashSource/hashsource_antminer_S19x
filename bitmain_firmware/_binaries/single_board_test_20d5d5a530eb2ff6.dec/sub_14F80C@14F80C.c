void *__fastcall sub_14F80C(_BYTE *a1, void *a2)
{
  int v4[10]; // [sp+0h] [bp-158h] BYREF
  _DWORD v5[9]; // [sp+28h] [bp-130h] BYREF
  int v6; // [sp+4Ch] [bp-10Ch]
  _DWORD v7[10]; // [sp+50h] [bp-108h] BYREF
  _BYTE v8[31]; // [sp+78h] [bp-E0h] BYREF
  char v9; // [sp+97h] [bp-C1h]
  int v10[10]; // [sp+B8h] [bp-A0h] BYREF
  int v11[10]; // [sp+E0h] [bp-78h] BYREF
  _BYTE v12[80]; // [sp+108h] [bp-50h] BYREF

  sub_106C14(a2, 0x20u, v8);
  v9 = v9 & 0x3F | 0x40;
  v8[0] &= 0xF8u;
  sub_148968(v10, (int)v8);
  sub_14622C(v4, v12);
  sub_141D74(v5, v10, v4);
  sub_141D74(v7, v11, v4);
  sub_141BC4(a1, v7);
  a1[31] ^= ((LOBYTE(v5[0])
            - (unsigned __int8)((v6
                               + ((v5[8]
                                 + ((v5[7]
                                   + ((v5[6]
                                     + ((v5[5]
                                       + ((v5[4]
                                         + ((v5[3]
                                           + ((v5[2] + ((v5[1] + ((v5[0] + ((19 * v6 + 0x1000000) >> 25)) >> 26)) >> 25)) >> 26)) >> 25)) >> 26)) >> 25)) >> 26)) >> 25)) >> 26)) >> 25))
           & 1) << 7;
  return sub_E07F8(v8, 0x40u);
}
