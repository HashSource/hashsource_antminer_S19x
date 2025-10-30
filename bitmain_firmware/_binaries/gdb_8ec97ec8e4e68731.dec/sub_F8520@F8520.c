void __fastcall sub_F8520(int a1)
{
  int v2; // r0
  void **v3; // r4
  void **v4; // r5
  void (__fastcall *v5)(void *); // r3

  v2 = sub_183688(a1);
  v3 = *(void ***)(v2 + 136);
  if ( v3 )
  {
    *(_DWORD *)(v2 + 136) = 0;
    do
    {
      v4 = (void **)*v3;
      ((void (__fastcall *)(void *, int))v3[1])(v3[3], a1);
      v5 = (void (__fastcall *)(void *))v3[2];
      if ( v5 )
        v5(v3[3]);
      free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
