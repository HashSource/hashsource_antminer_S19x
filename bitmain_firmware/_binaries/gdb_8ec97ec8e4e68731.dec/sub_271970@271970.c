int __fastcall sub_271970(int result, int a2)
{
  int v2; // r3
  int (__fastcall *v3)(_DWORD, int); // r6
  int v5; // r4

  v2 = dword_48AA18;
  if ( dword_48AA18 )
  {
    v3 = (int (__fastcall *)(_DWORD, int))result;
    do
    {
      v5 = *(_DWORD *)(v2 + 44);
      result = v3(*(_DWORD *)(v2 + 40), a2);
      v2 = v5;
    }
    while ( v5 );
  }
  return result;
}
