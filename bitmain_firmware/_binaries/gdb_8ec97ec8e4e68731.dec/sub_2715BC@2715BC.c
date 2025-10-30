int __fastcall sub_2715BC(int a1, int *a2)
{
  int v3; // lr
  int v4; // r12

  v3 = a2[26];
  v4 = *(unsigned __int8 *)(v3 + 33);
  if ( *(_BYTE *)(v3 + 33) )
  {
    if ( !*(_DWORD *)(a2[38] + 8) )
    {
      (*(void (**)(void))(*(_DWORD *)(v3 + 36) + 24))();
      return a1;
    }
    sub_2706B0((_DWORD *)a1, a2[20], a2[27]);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v4;
    *(_BYTE *)(a1 + 8) = v4;
    *(_DWORD *)a1 = a1 + 8;
  }
  return a1;
}
