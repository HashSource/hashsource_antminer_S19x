int __fastcall sub_32DC0(int a1)
{
  double v1; // d0
  int result; // r0
  unsigned __int64 v4; // [sp+18h] [bp-1Ch]
  double v5; // [sp+20h] [bp-14h]
  int v6; // [sp+2Ch] [bp-8h]

  v6 = *(_DWORD *)(a1 + 260) + 416;
  if ( v1 == 0.0 )
  {
    sub_32D58();
    *(double *)(a1 + 376) = v1;
  }
  else
  {
    *(double *)(a1 + 376) = v1;
  }
  v5 = *(double *)(a1 + 376);
  *(double *)(v6 + 64) = v5;
  round();
  v4 = sub_682D0(LODWORD(v5), HIDWORD(v5));
  result = sub_31028(v4, (char *)(*(_DWORD *)(a1 + 260) + 48), 8u, 0);
  if ( v5 == *(double *)(v6 + 48) )
  {
    ++*(_DWORD *)(v6 + 72);
  }
  else if ( v5 < *(double *)(v6 + 48) || *(double *)(v6 + 48) == 0.0 )
  {
    *(double *)(v6 + 48) = v5;
    *(_DWORD *)(v6 + 72) = 1;
  }
  if ( v5 == *(double *)(v6 + 56) )
  {
    ++*(_DWORD *)(v6 + 76);
  }
  else if ( v5 > *(double *)(v6 + 56) )
  {
    *(double *)(v6 + 56) = v5;
    *(_DWORD *)(v6 + 76) = 1;
  }
  return result;
}
