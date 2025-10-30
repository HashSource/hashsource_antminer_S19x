int __fastcall sub_41D64(unsigned __int8 *a1, int a2)
{
  int v3; // r8
  unsigned int v4; // r7
  size_t v5; // r10
  void *v6; // r0
  void *v7; // r0
  size_t v8; // r9
  unsigned __int8 *v9; // r4
  void *v10; // r0
  void *v11; // r0
  size_t v12; // r10
  void *v13; // r0
  int result; // r0
  _DWORD v15[112]; // [sp+0h] [bp-9C0h] BYREF
  char s[2048]; // [sp+1C0h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(s, 0x800u, "got nonce sz %d", a2);
    sub_20F58(5, s, 0);
  }
  v3 = *a1;
  v4 = *(_DWORD *)(a1 + 1);
  memcpy(v15, a1 + 5, sizeof(v15));
  v5 = a1[453];
  v6 = calloc(1u, v5);
  v7 = memcpy(v6, a1 + 454, v5);
  v8 = a1[v5 + 454];
  v9 = &a1[v5 + 455];
  v15[72] = v7;
  v10 = calloc(1u, v8);
  v11 = memcpy(v10, v9, v8);
  v12 = v9[v8];
  v15[77] = v11;
  v13 = calloc(1u, v12);
  v15[80] = memcpy(v13, &v9[v8 + 1], v12);
  v15[82] = calloc(1u, 1u);
  v15[65] = *(_DWORD *)(dword_744C8 + 4 * v3);
  v15[63] = *(_DWORD *)dword_744A4;
  v15[64] = **(_DWORD **)dword_744A4;
  if ( sub_2DC68(*(_DWORD *)dword_744A4, v4) && sub_2DBFC((int)v15, v4) )
  {
    sub_3E82C(*(_DWORD *)dword_744A4, (int)v15);
    if ( dword_766C0 && byte_7449D )
      sub_2CCF0((int)v15, v4);
    if ( byte_74500 || (result = (unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "%s nonce submited", "cb_bitmain_submit_nonce");
      sub_20F58(5, s, 0);
      return 0;
    }
  }
  else
  {
    sub_331A4(*(_DWORD *)dword_744A4);
    return -1;
  }
  return result;
}
