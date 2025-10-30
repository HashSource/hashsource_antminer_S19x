void __fastcall sub_5F7FC(int a1, char **a2, int a3)
{
  int v5; // r5
  char *v6; // r0
  int v7; // r9
  _DWORD *v8; // r6
  int v9; // r10
  int v10; // r1
  unsigned int v11; // r4
  int v12; // r7
  int v13; // r0
  int v14; // [sp+4h] [bp-1Ch] BYREF
  int v15; // [sp+8h] [bp-18h] BYREF
  void *ptr; // [sp+Ch] [bp-14h] BYREF
  int v17; // [sp+10h] [bp-10h]
  int v18; // [sp+14h] [bp-Ch]
  int v19; // [sp+18h] [bp-8h]
  int v20; // [sp+1Ch] [bp-4h]

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( (unsigned int)(a3 - 1) > 3 )
    sub_946E0("-var-list-children: Usage: [PRINT_VALUES] NAME [FROM TO]");
  if ( (a3 & 0xFFFFFFFD) == 1 )
    v6 = *a2;
  else
    v6 = a2[1];
  v7 = sub_26FBAC(v6);
  if ( a3 > 2 )
  {
    v14 = strtol((&a2[a3])[-2], 0, 10);
    v15 = strtol(*(&a2[a3] - 1), 0, 10);
  }
  else
  {
    v14 = -1;
    v15 = -1;
  }
  v8 = (_DWORD *)sub_272040(v7, &v14, &v15);
  sub_257504(v5, "numchild", v15 - v14);
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    v9 = 0;
  else
    v9 = sub_69BC0(*a2);
  sub_26FC88(&ptr, v7);
  if ( ptr )
    sub_2575E8(v5, "displayhint", ptr);
  v10 = v15;
  if ( v14 < v15 )
  {
    v18 = 0;
    v17 = 0;
    v19 = 0;
    v20 = 0;
    if ( sub_69098(v5) == 1 )
    {
      if ( (_BYTE)v18 )
      {
        LOBYTE(v18) = 0;
        sub_25734C(v17, 0);
      }
      v17 = v5;
      sub_2578AC(v5, 0);
      v11 = v14;
      LOBYTE(v18) = 1;
      if ( v14 >= v15 || v14 >= (unsigned int)((v8[1] - *v8) >> 2) )
      {
LABEL_22:
        if ( !(_BYTE)v20 )
        {
LABEL_23:
          if ( (_BYTE)v18 )
          {
            LOBYTE(v18) = 0;
            sub_25734C(v17, 0);
          }
          v10 = v15;
          goto LABEL_26;
        }
LABEL_34:
        LOBYTE(v20) = 0;
        sub_25734C(v19, 1);
        goto LABEL_23;
      }
    }
    else
    {
      if ( (_BYTE)v20 )
      {
        LOBYTE(v20) = 0;
        sub_25734C(v19, 1);
      }
      v19 = v5;
      sub_2578AC(v5, 1);
      v11 = v14;
      LOBYTE(v20) = 1;
      if ( v14 >= v15 || v14 >= (unsigned int)((v8[1] - *v8) >> 2) )
        goto LABEL_34;
    }
    v12 = 4 * v11;
    do
    {
      sub_2578AC(v5, 0);
      sub_5E730(*(_DWORD *)(*v8 + v12), v9, 1);
      sub_25734C(v5, 0);
      if ( v15 <= (int)++v11 )
        break;
      v12 += 4;
    }
    while ( v11 < (v8[1] - *v8) >> 2 );
    goto LABEL_22;
  }
LABEL_26:
  v13 = sub_26FC94(v7, v10);
  sub_257504(v5, "has_more", v13);
  if ( ptr )
    free(ptr);
}
