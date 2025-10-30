void __fastcall sub_267B6C(int a1, unsigned __int8 *a2, int a3, int a4, char a5)
{
  bool v9; // zf
  char v10; // r7
  unsigned __int8 *v11; // r1
  unsigned __int8 *v12; // r3
  unsigned __int8 *v13; // r8
  int v14; // r2
  unsigned __int8 *v15; // r6
  unsigned __int8 *v16; // r3
  unsigned __int8 *v17; // r10
  unsigned __int8 *v18; // r4
  int v19; // r2
  unsigned __int8 *v20; // r3
  char *v21; // r1
  int v22; // r0
  unsigned __int8 *v23; // r6
  unsigned __int8 *v24; // r4
  int v25; // r2
  unsigned __int8 *v26; // r3
  char *v27; // r1
  int v28; // r0

  sub_25A6BC(&word_41A83C, a1);
  v9 = a4 == 0;
  v10 = a5 ^ 1;
  if ( v9 )
  {
    if ( a5 || (v11 = &a2[a3 - 1], a2 >= v11) || *a2 )
    {
      v13 = a2;
    }
    else
    {
      v12 = a2 + 1;
      do
      {
        v9 = v11 == v12;
        v13 = v12++;
      }
      while ( !v9 && !*v13 );
    }
    v23 = &a2[a3];
    if ( v13 < v23 )
    {
      v24 = v13;
      do
      {
        if ( v13 == v24 )
          v25 = v10 & 1;
        else
          v25 = 0;
        v26 = v24;
        v27 = "%x";
        v28 = a1;
        if ( !v25 )
        {
          v27 = "%02x";
          v28 = a1;
        }
        ++v24;
        sub_25A418(v28, v27, *v26);
      }
      while ( v24 != v23 );
    }
  }
  else
  {
    v14 = a3 - 1;
    v15 = &a2[a3 - 1];
    if ( !a5 && v15 >= a2 + 1 && !a2[v14] )
    {
      v16 = v15 - 1;
      do
      {
        v9 = v16 == a2;
        v15 = v16--;
      }
      while ( !v9 && !*v15 );
    }
    if ( v15 >= a2 )
    {
      v17 = a2 - 1;
      v18 = v15;
      do
      {
        if ( v18 == v15 )
          v19 = v10 & 1;
        else
          v19 = 0;
        v20 = v18;
        v21 = "%x";
        v22 = a1;
        if ( !v19 )
        {
          v21 = "%02x";
          v22 = a1;
        }
        --v18;
        sub_25A418(v22, v21, *v20);
      }
      while ( v18 != v17 );
    }
  }
}
