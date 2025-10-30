void __fastcall sub_1D3774(const char *a1, const char *a2, int a3)
{
  int v5; // r5
  char *v6; // r1
  void *ptr; // [sp+0h] [bp-18h] BYREF
  char v8; // [sp+8h] [bp-10h] BYREF

  if ( a1 )
  {
    v5 = a3;
    if ( !strcmp(a1, "full") )
    {
      if ( !a2 )
      {
        v6 = "record full";
        a3 = v5;
        goto LABEL_5;
      }
LABEL_17:
      sub_946E0("Invalid format.");
    }
    if ( strcmp(a1, "btrace") )
      sub_946E0("Invalid method.");
    if ( a2 )
    {
      if ( !strcmp(a2, "bts") )
      {
        v6 = "record btrace bts";
        a3 = v5;
      }
      else
      {
        if ( strcmp(a2, "pt") )
          goto LABEL_17;
        v6 = "record btrace pt";
        a3 = v5;
      }
    }
    else
    {
      v6 = "record btrace";
      a3 = v5;
    }
  }
  else
  {
    if ( a2 )
      goto LABEL_17;
    v6 = "record";
  }
LABEL_5:
  sub_243A54(&ptr, v6, a3);
  if ( ptr != &v8 )
    sub_339E64(ptr);
}
