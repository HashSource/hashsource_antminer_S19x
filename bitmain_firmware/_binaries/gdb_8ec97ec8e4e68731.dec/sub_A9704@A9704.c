char *__fastcall sub_A9704(int a1)
{
  int v2; // r0
  char *v3; // r6
  void *v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r4
  char *v9; // r5
  int v10; // t1
  int v12; // r0
  int *v13; // r4
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  char *v18; // r0

  v2 = sub_26BC70(a1);
  v3 = (char *)sub_A18CC(v2);
  if ( v3 )
  {
    v4 = sub_92E28();
    v5 = sub_A93B4(a1, "tsd", 1);
    if ( !v5 )
    {
      v12 = sub_183688(0);
      v13 = (int *)sub_9D338(v12);
      v14 = *v13;
      if ( !*v13 )
      {
        v18 = sub_9D20C("ada__tags__type_specific_data");
        if ( !v18 )
        {
          *v13 = 0;
          goto LABEL_15;
        }
        v14 = *((_DWORD *)v18 + 6);
        *v13 = v14;
        if ( !v14 )
          goto LABEL_15;
      }
      v15 = sub_1700C0(v14);
      v16 = sub_1700C0(v15);
      if ( !sub_2647C8(v16, a1) )
        goto LABEL_15;
      v17 = ((int (*)(void))loc_25CA94)();
      v5 = sub_26210C(v17);
      if ( !v5 )
        goto LABEL_15;
    }
    v6 = sub_A93B4(v5, "expanded_name", 1);
    if ( v6 )
    {
      v7 = sub_26EBA8(v6);
      sub_FAA10(v7, &byte_477DE8, 1023);
      v8 = (unsigned __int8)byte_477DE8;
      v3 = &byte_477DE8;
      if ( byte_477DE8 )
      {
        v9 = &byte_477DE8;
        do
        {
          if ( isalpha(v8) )
            *v9 = tolower(v8);
          v10 = (unsigned __int8)*++v9;
          v8 = v10;
        }
        while ( v10 );
      }
      goto LABEL_10;
    }
LABEL_15:
    v3 = 0;
LABEL_10:
    sub_92E40((int)v4);
  }
  return v3;
}
