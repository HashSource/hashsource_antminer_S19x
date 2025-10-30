int __fastcall sub_A1680(int a1, int a2, const char *a3)
{
  int v5; // r0
  int v6; // r4
  int v7; // r3
  int result; // r0
  int v9; // r0
  int v10; // r0

  v5 = sub_A0A60(a1);
  if ( a2 < 0 )
    goto LABEL_16;
  v6 = v5;
  if ( !v5 )
  {
    if ( !a2 )
      goto LABEL_13;
LABEL_16:
    sub_946E0("invalid dimension number to '%s", a3);
  }
  if ( a2 > sub_A15F8(v5) )
    goto LABEL_16;
  if ( sub_A0A04(v6) )
  {
    if ( a2 > 1 )
    {
      v7 = 1;
      do
      {
        ++v7;
        v6 = *(_DWORD *)(*(_DWORD *)(v6 + 24) + 20);
      }
      while ( a2 != v7 );
    }
    result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + 12) + 24) + 20);
    if ( result )
    {
      if ( !**(_BYTE **)(result + 24) )
        return 0;
    }
    return result;
  }
LABEL_13:
  v9 = sub_A0C08(v6);
  v10 = sub_A0A60(v9);
  if ( **(_BYTE **)(v10 + 24) != 3 || (result = sub_172888(v10, *(_DWORD *)&asc_373FF8[8 * a2 + 644], 1)) == 0 )
    sub_946E0("attempt to take bound of something that is not an array");
  return result;
}
