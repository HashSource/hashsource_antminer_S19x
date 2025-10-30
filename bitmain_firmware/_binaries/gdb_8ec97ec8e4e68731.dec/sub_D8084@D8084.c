void __fastcall sub_D8084(int a1, int a2, int a3)
{
  int i; // r4

  for ( i = dword_478348; i; i = *(_DWORD *)(i + 8) )
  {
    while ( (unsigned int)(*(_DWORD *)(i + 12) - 7) > 2 )
    {
      i = *(_DWORD *)(i + 8);
      if ( !i )
        goto LABEL_6;
    }
    sub_C96DC(i, 0);
  }
LABEL_6:
  sub_D72EC(2, a2, a3);
}
