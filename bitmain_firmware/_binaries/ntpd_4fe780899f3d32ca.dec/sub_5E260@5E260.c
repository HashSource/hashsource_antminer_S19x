void __fastcall sub_5E260(int a1, int a2)
{
  _DWORD **v2; // r0
  _DWORD *v3; // r4
  int v4; // r0

  v2 = *(_DWORD ***)(a2 + 84);
  v3 = *v2;
  if ( *v2 )
  {
    sub_18E64((int)(v2 + 2));
    v4 = v3[233];
    if ( v4 > 0 )
      close(v4);
    free(v3);
  }
}
