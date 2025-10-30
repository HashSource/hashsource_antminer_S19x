int __fastcall sub_5BA08(void *a1, int a2)
{
  char v6[8]; // [sp+Ch] [bp-9C8h] BYREF
  unsigned int v7; // [sp+80Ch] [bp-1C8h] BYREF
  void *v8[112]; // [sp+810h] [bp-1C4h] BYREF

  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v6, 0x800u, "got nonce sz %d", a2);
    sub_1E4EC(7, v6, 0);
  }
  sub_5B7C0(a1, a2, v8, &v7);
  if ( sub_45588(*(_DWORD *)dword_930E8, v7) && sub_45004((int)v8, v7) )
  {
    sub_45464(*(_DWORD *)dword_930E8, (int)v8);
    if ( dword_91F78 && byte_9202C )
      sub_340D0((int)v8, v7);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v6, 0x800u, "%s nonce submited", "cb_bitmain_submit_nonce");
      sub_1E4EC(7, v6, 0);
    }
    sub_31ED8(v8);
    return 0;
  }
  else
  {
    sub_44CA8(*(_DWORD *)dword_930E8);
    sub_31ED8(v8);
    return -1;
  }
}
