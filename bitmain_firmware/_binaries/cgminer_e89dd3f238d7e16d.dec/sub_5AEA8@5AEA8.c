int __fastcall sub_5AEA8(void *a1, int a2)
{
  char v6[8]; // [sp+Ch] [bp-9C8h] BYREF
  unsigned int v7; // [sp+80Ch] [bp-1C8h] BYREF
  void *v8[112]; // [sp+810h] [bp-1C4h] BYREF

  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v6, 0x800u, "got nonce sz %d", a2);
    sub_1DB6C(7, v6, 0);
  }
  sub_5AC60(a1, a2, v8, &v7);
  if ( sub_44840(*(_DWORD *)dword_91F50, v7) && sub_4428C((int)v8) )
  {
    sub_4471C(*(_DWORD *)dword_91F50, (int)v8);
    if ( dword_90DE0 && byte_90E94 )
      sub_33038((int)v8, v7);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v6, 0x800u, "%s nonce submited", "cb_bitmain_submit_nonce");
      sub_1DB6C(7, v6, 0);
    }
    sub_30DA0(v8);
    return 0;
  }
  else
  {
    sub_43F18(*(_DWORD *)dword_91F50);
    sub_30DA0(v8);
    return -1;
  }
}
