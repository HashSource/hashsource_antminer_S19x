int __fastcall sub_7F228(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r5
  unsigned int v5; // r4
  unsigned int v6; // r1
  int v7; // r6
  int v8; // r1
  int v10; // r4
  int v11; // r1
  unsigned int v12; // r5

  v4 = a1[285];
  if ( a1[7] )
  {
    if ( a1[363] == 2 )
    {
      v12 = *(_DWORD *)(v4 + 480);
      v5 = a1[981];
      if ( v5 >= v12 )
        v5 = v12;
    }
    else
    {
      v5 = a1[981];
    }
    if ( !v5 )
    {
      if ( a4 )
        v11 = 80;
      else
        v11 = 10;
      sub_95494(a1, v11, 532, 164, "ssl/record/ssl3_record.c", 134);
      return 0;
    }
  }
  else
  {
    v5 = *(_DWORD *)(v4 + 480);
    if ( !v5 )
    {
      v10 = a1[286];
      if ( !v10 || !*(_DWORD *)(v10 + 480) )
      {
        sub_95494(a1, 80, 532, 68, "ssl/record/ssl3_record.c", 118);
        return 0;
      }
      v5 = *(_DWORD *)(v10 + 480);
    }
  }
  v6 = a2 + a1[982];
  if ( v5 + a3 < v6 )
  {
    if ( a4 )
      v8 = 80;
    else
      v8 = 10;
    v7 = 0;
    sub_95494(a1, v8, 532, 164, "ssl/record/ssl3_record.c", 143);
  }
  else
  {
    a1[982] = v6;
    return 1;
  }
  return v7;
}
