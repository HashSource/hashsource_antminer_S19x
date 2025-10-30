int __fastcall sub_9BE74(_DWORD *a1, int a2)
{
  int v3; // r2
  int v4; // r3

  v3 = *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
  {
    if ( v3 )
    {
      sub_95494(a1, 50, 363, 103, (int)"ssl/statem/statem_lib.c", 724);
      return 0;
    }
    goto LABEL_4;
  }
  if ( *a1 != 256 )
  {
    if ( !v3 )
      goto LABEL_4;
LABEL_11:
    sub_95494(a1, 50, 363, 103, (int)"ssl/statem/statem_lib.c", 717);
    return 0;
  }
  if ( v3 != 2 )
    goto LABEL_11;
LABEL_4:
  v4 = a1[31];
  if ( *(_DWORD *)(v4 + 528) )
  {
    *(_DWORD *)(v4 + 220) = 1;
    if ( sub_83F7C(a1) )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 && (sub_7D31C(a1, 1), *a1 == 256) )
      {
        ++*(_WORD *)(a1[32] + 268);
        return 3;
      }
      else
      {
        return 3;
      }
    }
    else
    {
      sub_95494(a1, 80, 363, 68, (int)"ssl/statem/statem_lib.c", 739);
      return 0;
    }
  }
  else
  {
    sub_95494(a1, 10, 363, 133, (int)"ssl/statem/statem_lib.c", 732);
    return 0;
  }
}
