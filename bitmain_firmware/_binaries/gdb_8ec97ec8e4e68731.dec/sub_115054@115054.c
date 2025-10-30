void sub_115054()
{
  _DWORD *v0; // r0
  char *v2; // r5
  _DWORD *v3; // r6
  char *v4; // r0
  char *v5; // r4
  unsigned int v6; // r5
  int v7; // r0

  v0 = (_DWORD *)((int (*)(void))loc_26C048)();
  if ( (*v0)-- == 1 )
  {
    v2 = (char *)v0[2];
    v3 = v0;
    v4 = (char *)v0[3];
    if ( v2 != v4 )
    {
      v5 = v2 + 40;
      v6 = (unsigned int)&v2[((v4 - (v2 + 40)) & 0xFFFFFFF8) + 80];
      do
      {
        while ( *((_DWORD *)v5 - 10) != 2 )
        {
          v5 += 40;
          if ( v5 == (char *)v6 )
            goto LABEL_8;
        }
        v7 = *((_DWORD *)v5 - 8);
        v5 += 40;
        ((void (__fastcall *)(int))loc_26C200)(v7);
      }
      while ( v5 != (char *)v6 );
LABEL_8:
      v4 = (char *)v3[2];
    }
    if ( v4 )
      sub_339E64(v4);
    sub_349268(v3);
  }
}
