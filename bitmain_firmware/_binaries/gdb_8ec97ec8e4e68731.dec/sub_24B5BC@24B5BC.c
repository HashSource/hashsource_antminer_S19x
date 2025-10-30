void __fastcall sub_24B5BC(int a1)
{
  int v2; // r6
  int v3; // r5
  void *v4; // r0

  if ( dword_48A8BC != a1 )
  {
    v2 = off_489BC0(&dword_4899A0, 0);
    if ( v2 != a1 )
      sub_946B0("could not change traceframe");
    sub_247A20(v2);
    sub_1DDCF4();
    v3 = dword_48A918;
    dword_48A918 = 0;
    if ( v3 )
    {
      v4 = *(void **)(v3 + 12);
      if ( v4 )
        sub_339E64(v4);
      if ( *(_DWORD *)v3 )
        sub_339E64(*(void **)v3);
      sub_349268((void *)v3);
    }
  }
}
