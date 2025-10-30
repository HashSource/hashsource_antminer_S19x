void __fastcall SHA512_Transform(__int64 *a1, void *a2)
{
  void *v2; // r3

  v2 = (void *)((_DWORD)a2 << 29);
  if ( !((_DWORD)a2 << 29) )
    v2 = a2;
  if ( (_DWORD)a2 << 29 )
    v2 = memcpy(a1 + 10, a2, 0x80u);
  sub_100A48(a1, (int)v2, 1);
}
