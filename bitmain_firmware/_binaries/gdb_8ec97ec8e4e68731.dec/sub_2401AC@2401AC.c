int __fastcall sub_2401AC(unsigned __int8 *a1, int a2)
{
  int v4; // r0
  unsigned __int8 *v5; // r0
  unsigned int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int *v10; // r4
  char *v11; // r4
  const char *v12; // r0
  char *v13; // r0
  int v14; // r2
  int v16; // r0
  int v17; // [sp+0h] [bp-58h] BYREF
  int v18; // [sp+4h] [bp-54h] BYREF
  _BYTE v19[36]; // [sp+8h] [bp-50h] BYREF
  _BYTE v20[44]; // [sp+2Ch] [bp-2Ch] BYREF

  if ( !a1 || !*a1 )
    sub_946E0("Please specify a thread ID list");
  v4 = sub_183688();
  sub_24248C(v20, a1, *(_DWORD *)(v4 + 8));
  do
  {
    if ( ((int (__fastcall *)(_BYTE *))loc_2424A8)(v20) )
      goto LABEL_6;
  }
  while ( ((int (__fastcall *)(_BYTE *, int *, int *, _BYTE *))loc_2427EC)(v20, &v17, &v18, v19) );
  v5 = (unsigned __int8 *)sub_24250C(v20);
  v6 = (unsigned int)v5;
  if ( !v5 )
LABEL_6:
    sub_946E0("Please specify a command following the thread ID list");
  if ( a1 == v5 || !isalpha(*v5) )
    sub_242324(v6);
  ((void (__fastcall *)(_BYTE *))loc_23FF20)(v19);
  v7 = sub_183688();
  sub_24248C(v20, a1, *(_DWORD *)(v7 + 8));
  while ( !((int (__fastcall *)(_BYTE *))loc_2424A8)(v20) && v6 > sub_24250C(v20) )
  {
    ((void (__fastcall *)(_BYTE *, int *, int *))loc_242844)(v20, &v17, &v18);
    v8 = sub_1839F8(v17);
    v9 = v8;
    if ( v8 )
    {
      v10 = (int *)dword_48A4D4;
      if ( dword_48A4D4 )
      {
        do
        {
          if ( v8 == v10[7] && v18 == v10[6] )
            break;
          v10 = (int *)v10[1];
        }
        while ( v10 );
        if ( sub_24288C(v20) )
        {
          if ( *(_DWORD *)(v9 + 20) <= v18 )
            ((void (__fastcall *)(_BYTE *))loc_242538)(v20);
          if ( v10 )
          {
            if ( v10[11] != 2 )
              goto LABEL_22;
LABEL_31:
            v13 = sub_240128((int)v10);
            sub_946B0("Thread %s has terminated.", v13);
          }
        }
        else
        {
          if ( !v10 )
            goto LABEL_33;
          if ( v10[11] == 2 )
            goto LABEL_31;
LABEL_22:
          if ( !sub_23D9BC(v10) )
            goto LABEL_31;
          sub_23F9F0();
          v11 = sub_240128((int)v10);
          v12 = (const char *)sub_23095C(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0));
          sub_259F10("\nThread %s (%s):\n", v11, v12);
          sub_2435B0(v6, a2);
        }
      }
      else
      {
        if ( !sub_24288C(v20) )
          goto LABEL_33;
        if ( *(_DWORD *)(v9 + 20) <= v18 )
LABEL_26:
          ((void (__fastcall *)(_BYTE *))loc_242538)(v20);
      }
    }
    else
    {
      if ( sub_24288C(v20) )
      {
        sub_946B0("Unknown inferior %d", v17);
        goto LABEL_26;
      }
LABEL_33:
      if ( *(_DWORD *)(dword_487918 + 4) || *(_DWORD *)(dword_487918 + 8) != 1 )
      {
        v14 = v18;
        goto LABEL_36;
      }
      v16 = sub_2425D8(v20);
      v14 = v18;
      if ( v16 )
LABEL_36:
        sub_946B0("Unknown thread %d.%d", v17, v14);
      else
        sub_946B0("Unknown thread %d", v18);
    }
  }
  return ((int (__fastcall *)(_BYTE *))loc_23FC8C)(v19);
}
