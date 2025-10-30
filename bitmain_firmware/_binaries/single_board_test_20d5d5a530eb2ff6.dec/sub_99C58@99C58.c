bool __fastcall sub_99C58(_DWORD *a1, int a2)
{
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_95494(a1, 50, 368, 159, (int)"ssl/statem/statem_clnt.c", 2864);
    return 0;
  }
  else if ( (*(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 16) & 0x20) != 0 && sub_A6D3C() <= 0 )
  {
    sub_95494(a1, 80, 368, 361, (int)"ssl/statem/statem_clnt.c", 2871);
    return 0;
  }
  else
  {
    return sub_99BC0((int)a1) != 0;
  }
}
