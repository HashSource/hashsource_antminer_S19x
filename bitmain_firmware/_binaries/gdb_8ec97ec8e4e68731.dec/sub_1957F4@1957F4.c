int __fastcall sub_1957F4(int a1, const void *a2, size_t a3)
{
  _BYTE *v3; // r4

  if ( !a1 )
    return sub_327254(a2);
  v3 = sub_93330(a2, a3);
  *(_BYTE *)sub_5B008((unsigned int)v3, (unsigned int)&v3[a3]) = 0;
  return (int)v3;
}
