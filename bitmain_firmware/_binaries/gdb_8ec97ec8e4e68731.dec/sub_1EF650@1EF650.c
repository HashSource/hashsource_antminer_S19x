void __fastcall sub_1EF650(int a1)
{
  int v1; // r0
  const char **v2; // r4
  char *v3; // r7
  int v4; // r3
  char *v5; // r6
  int v6; // r4
  int v7; // r0
  int v8; // t1
  bool v9; // zf
  int v10; // r3
  char *v11; // r6
  int v12; // r8
  int v13; // r0
  int v14; // t1
  bool v15; // zf
  int v16; // r9
  int v17; // r3
  int v18; // r10
  unsigned __int8 *v19; // r6
  bool v20; // zf
  int v21; // r0
  int v22; // t1
  bool v23; // zf
  int v24; // r10
  int v25; // r3
  int v26; // r3
  const char *v27; // r6
  bool v28; // zf
  int v29; // r7
  _DWORD *v30; // r0
  void *v31; // r7
  _DWORD *v32; // r0
  int v33; // r0
  int v34; // t1
  bool v35; // zf
  unsigned __int8 *v36; // r6
  bool v37; // zf
  int v38; // r0
  int v39; // t1
  bool v40; // zf
  int v41; // r3
  int v42; // r2
  int v43; // r3
  int v44; // r2
  __int64 v45; // r0
  _DWORD *v46; // r1
  int dest; // [sp+8h] [bp-2Ch] BYREF
  int v48; // [sp+Ch] [bp-28h]

  v1 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  if ( *(_DWORD *)(dword_487D2C + 32) )
  {
    v2 = (const char **)dword_488C94;
    sub_1E7DEC("qOffsets");
    sub_1E4EB8((char **)v2, (size_t *)v2 + 1, 0, 0, 0);
    v3 = (char *)*v2;
    if ( **v2 )
    {
      if ( **v2 == 69 )
      {
        sub_946B0("Remote failure reply: %s", *v2);
        return;
      }
      if ( !strncmp(*v2, "Text=", 5u) )
      {
        v4 = (unsigned __int8)v3[5];
        v5 = v3 + 5;
        v6 = v4 == 59;
        if ( !v3[5] )
          v6 = 1;
        if ( v6 )
        {
          v6 = 0;
        }
        else
        {
          do
          {
            v7 = sub_990E4(v4);
            v8 = (unsigned __int8)*++v5;
            v4 = v8;
            v6 = v7 + 16 * v6;
            v9 = v8 == 0;
            if ( v8 )
              v9 = v4 == 59;
          }
          while ( !v9 );
        }
        if ( !strncmp(v5, ";Data=", 6u) )
        {
          v10 = (unsigned __int8)v5[6];
          v11 = v5 + 6;
          v12 = v10 == 59;
          if ( !v10 )
            v12 = 1;
          if ( v12 )
          {
            v12 = 0;
          }
          else
          {
            do
            {
              v13 = sub_990E4(v10);
              v14 = (unsigned __int8)*++v11;
              v10 = v14;
              v12 = v13 + 16 * v12;
              v15 = v14 == 0;
              if ( v14 )
                v15 = v10 == 59;
            }
            while ( !v15 );
          }
          v16 = strncmp(v11, ";Bss=", 5u);
          if ( !v16 )
          {
            v17 = (unsigned __int8)v11[5];
            v18 = 0;
            v19 = (unsigned __int8 *)(v11 + 5);
            v20 = v17 == 0;
            if ( v17 )
              v20 = v17 == 59;
            if ( !v20 )
            {
              do
              {
                v21 = sub_990E4(v17);
                v22 = *++v19;
                v17 = v22;
                v18 = v21 + 16 * v18;
                v23 = v22 == 0;
                if ( v22 )
                  v23 = v17 == 59;
              }
              while ( !v23 );
            }
            if ( v12 == v18 )
            {
              v25 = *v19;
              v24 = 1;
            }
            else
            {
              v24 = 1;
              sub_946B0("Target reported unsupported offsets: %s", v3);
              v25 = *v19;
            }
            goto LABEL_43;
          }
        }
      }
      else if ( !strncmp(v3, "TextSeg=", 8u) )
      {
        v26 = (unsigned __int8)v3[8];
        v27 = v3 + 8;
        v28 = v26 == 0;
        if ( v3[8] )
          v28 = v26 == 59;
        v6 = v28;
        if ( v28 )
        {
          v6 = 0;
        }
        else
        {
          do
          {
            v33 = sub_990E4(v26);
            v34 = *(unsigned __int8 *)++v27;
            v26 = v34;
            v6 = v33 + 16 * v6;
            v35 = v34 == 0;
            if ( v34 )
              v35 = v26 == 59;
          }
          while ( !v35 );
        }
        v24 = strncmp(v27, ";DataSeg=", 9u);
        if ( v24 )
        {
          v25 = *(unsigned __int8 *)v27;
          v24 = 0;
          v12 = 0;
          v16 = 1;
        }
        else
        {
          v25 = *((unsigned __int8 *)v27 + 9);
          v12 = 0;
          v36 = (unsigned __int8 *)(v27 + 9);
          v37 = v25 == 0;
          if ( v25 )
            v37 = v25 == 59;
          if ( !v37 )
          {
            do
            {
              v38 = sub_990E4(v25);
              v39 = *++v36;
              v25 = v39;
              v12 = v38 + 16 * v12;
              v40 = v39 == 0;
              if ( v39 )
                v40 = v25 == 59;
            }
            while ( !v40 );
          }
          v16 = 2;
        }
LABEL_43:
        if ( v25 )
          sub_946B0("Target reported unsupported offsets: %s", v3);
        v29 = dword_487D2C;
        memcpy(
          &dest,
          *(const void **)(*(_DWORD *)(dword_487D2C + 32) + 144),
          4 * *(_DWORD *)(*(_DWORD *)(dword_487D2C + 32) + 148));
        v30 = (_DWORD *)sub_214E30(*(_DWORD *)(*(_DWORD *)(v29 + 32) + 36));
        v31 = v30;
        if ( v16 )
        {
          dest = v6;
          v48 = v12;
          if ( !v30 )
          {
            v32 = *(_DWORD **)(dword_487D2C + 32);
LABEL_48:
            sub_1B78B0((int)v32, (int)&dest);
            return;
          }
          v41 = v16;
        }
        else
        {
          if ( !v30 )
          {
            v32 = *(_DWORD **)(dword_487D2C + 32);
LABEL_69:
            v42 = v32[38];
            if ( v42 != -1 )
            {
              v43 = v32[39];
              *(&dest + v42) = v6;
              if ( v43 != -1 )
              {
                v44 = v32[40];
                *(&dest + v43) = v12;
                *(&dest + v44) = v12;
                goto LABEL_48;
              }
              sub_94700((int)"remote.c", 3673, "sect_index_data not initialized");
            }
            v45 = sub_94700((int)"remote.c", 3666, "sect_index_text not initialized");
LABEL_82:
            sub_946E0("Can not handle qOffsets TextSeg response with this symbol file", HIDWORD(v45));
          }
          v41 = *v30;
          if ( *v30 == 2 )
          {
            v46 = (_DWORD *)v30[1];
            dest = *v46 + v6;
            v48 = v46[1] + v12;
          }
          else
          {
            if ( v41 != 1 )
            {
LABEL_68:
              sub_214E58(v31);
              v32 = *(_DWORD **)(dword_487D2C + 32);
              if ( v16 )
                goto LABEL_48;
              goto LABEL_69;
            }
            dest = *(_DWORD *)v30[1] + v6;
          }
        }
        LODWORD(v45) = ((int (__fastcall *)(_DWORD, _DWORD *, int *, int, int *))loc_2151B4)(
                         *(_DWORD *)(*(_DWORD *)(dword_487D2C + 32) + 36),
                         v30,
                         &dest,
                         v41,
                         &dest);
        if ( !(v24 | (unsigned int)v45) )
          goto LABEL_82;
        if ( (int)v45 > 0 )
        {
          sub_214E58(v31);
          v32 = *(_DWORD **)(dword_487D2C + 32);
          goto LABEL_48;
        }
        goto LABEL_68;
      }
      sub_946E0("Malformed response to offset query, %s", v3);
    }
  }
}
