void __fastcall sub_21A010(int a1, int a2)
{
  int v4; // r4

  v4 = sub_219FB0();
  if ( *(_DWORD *)v4 )
  {
    free(*(void **)v4);
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
  }
  if ( a1 )
  {
    *(_DWORD *)v4 = sub_327254(a1);
    *(_DWORD *)(v4 + 4) = a2;
  }
}
