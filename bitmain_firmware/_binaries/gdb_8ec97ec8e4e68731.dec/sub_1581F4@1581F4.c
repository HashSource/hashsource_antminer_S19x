void __fastcall sub_1581F4(__sighandler_t *a1)
{
  off_46D45C = (char (*)[28])*a1;
  if ( dword_46DC04 != 2 )
    goto LABEL_2;
  if ( a1[1] )
    signal(2, a1[2]);
  if ( sub_1580C0() )
  {
    sub_158084();
    free(a1);
  }
  else
  {
LABEL_2:
    free(a1);
  }
}
