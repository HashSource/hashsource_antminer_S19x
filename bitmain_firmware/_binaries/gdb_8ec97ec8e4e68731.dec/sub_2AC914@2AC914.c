int __fastcall sub_2AC914(void **a1)
{
  int v2; // r5
  int v3; // r0
  __mode_t v5; // r0
  char v6; // r6
  int v7; // [sp+0h] [bp-68h] BYREF
  int v8; // [sp+10h] [bp-58h]

  v2 = (*((int (**)(void))a1[1] + 37))();
  if ( v2 )
  {
    v3 = (*((int (__fastcall **)(void **))a1[3] + 4))(a1);
    v2 = v3 == 0;
    if ( !v3
      && ((_BYTE)a1[10] & 0x18) == 0x10
      && (((unsigned int)a1[10] >> 5) & 0x42) != 0
      && !_xstat64(3, *a1, &v7)
      && (v8 & 0xF000) == 0x8000 )
    {
      v5 = umask(0);
      v6 = v5;
      umask(v5);
      chmod((const char *)*a1, ~v6 & 0x49 | v8 & 0x1FF);
    }
    sub_2ABE7C(a1);
  }
  return v2;
}
