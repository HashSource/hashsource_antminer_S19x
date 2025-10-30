void __fastcall sub_25BD6C(char *a1, void *a2)
{
  int *v4; // r0
  char *v5; // r6
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int v9; // [sp+0h] [bp-8h]
  char v10; // [sp+4h] [bp-4h]

  if ( off_48A57C )
  {
    off_48A57C(a1, a2);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( sub_22F0C4() )
    {
      v10 = 1;
      v9 = dword_46DC04;
      sub_22F048();
    }
    if ( dword_48A9BC )
      sub_259B58("");
    v4 = (int *)sub_242F8C();
    sub_25680C(*v4);
    v5 = off_46DE30;
    if ( off_46DE30 )
    {
      v6 = (int *)sub_242FB4();
      sub_256850((int)v5, *v6);
    }
    v7 = (int *)sub_242FB4();
    sub_259344(*v7, a1, a2);
    v8 = (int *)sub_242FB4();
    sub_2594B0(*v8, (char *)&word_356638);
    if ( v10 )
    {
      if ( v9 == 1 )
      {
        sub_22F048();
      }
      else if ( v9 )
      {
        if ( v9 == 2 )
          sub_22EFF4();
      }
      else
      {
        sub_22EF7C();
      }
    }
  }
}
