int __fastcall sub_55860(int a1, size_t *a2)
{
  _BYTE *v4; // [sp+4h] [bp-8h]

  v4 = (_BYTE *)(a1 + *a2);
  if ( *v4 == 32 || *v4 == 61 || !*v4 )
    return 0;
  else
    return sub_55814((int)(v4 + 1), a2);
}
