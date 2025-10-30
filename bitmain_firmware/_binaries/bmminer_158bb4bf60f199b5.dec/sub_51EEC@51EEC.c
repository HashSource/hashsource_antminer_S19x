int __fastcall sub_51EEC(int a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3
  int v4; // t1

  if ( dword_242F4C <= 0 )
    return sub_51E60(a1);
  v1 = dword_244048;
  v2 = *(_DWORD *)dword_244048;
  if ( *(_DWORD *)(*(_DWORD *)dword_244048 + 4) != a1 )
  {
    v3 = 0;
    while ( ++v3 != dword_242F4C )
    {
      v4 = *(_DWORD *)(v1 + 4);
      v1 += 4;
      v2 = v4;
      if ( *(_DWORD *)(v4 + 4) == a1 )
        return v2;
    }
    return sub_51E60(a1);
  }
  return v2;
}
