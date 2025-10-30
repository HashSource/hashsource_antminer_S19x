int __fastcall sub_1E51C4(int a1, int a2)
{
  int v4; // r0
  _BYTE *v5; // r0
  _BYTE *v6; // r7
  _DWORD *v7; // r10
  unsigned int v8; // r4
  _BYTE *v9; // r9
  int v10; // r1
  _BYTE *v11; // r2
  char v12; // t1
  int v13; // r0
  char v14; // r0
  int *v15; // r6
  int v16; // r3
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r0
  int v25; // r3
  char v26; // r4
  _DWORD *v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r3
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  int v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  int v41; // r0
  _DWORD *v42; // r0
  int v43; // [sp+0h] [bp-3Ch]
  int v44; // [sp+4h] [bp-38h]
  int v45; // [sp+8h] [bp-34h]
  int v46; // [sp+10h] [bp-2Ch]
  void *ptr; // [sp+20h] [bp-1Ch] BYREF
  unsigned int v48; // [sp+24h] [bp-18h]
  _BYTE v49[20]; // [sp+28h] [bp-14h] BYREF

  v4 = sub_16F654(a1);
  v5 = (_BYTE *)((int (__fastcall *)(int))loc_1E2770)(v4);
  v6 = (_BYTE *)(a2 + 6);
  v7 = (_DWORD *)dword_488C94;
  if ( a2 != -6 )
  {
    v5 = sub_9836C(a2 + 6);
    v6 = v5;
  }
  if ( !sub_232950(v5) && off_489AFC(&dword_4899A0) && v7[7] )
    sub_946E0(
      "Cannot execute this command while the target is running.\n"
      "Use the \"interrupt\" command to stop the target\n"
      "and then try again.");
  LOBYTE(v8) = 0;
  v7[4] = 0;
  v9 = v6 + 1;
  *v6 = 36;
  if ( a2 <= 0 )
  {
    v13 = 0;
  }
  else
  {
    v10 = a1 - 1;
    v11 = v6 + 1;
    do
    {
      v12 = *(_BYTE *)++v10;
      *v11++ = v12;
      v8 = (unsigned __int8)(v12 + v8);
    }
    while ( &v6[a2 + 1] != v11 );
    v13 = v8 >> 4;
    v9 += a2;
  }
  *v9 = 35;
  v9[1] = sub_99134(v13);
  v14 = sub_99134(v8 & 0xF);
  LOWORD(v15) = (unsigned __int16)&dword_48A590;
  v16 = v9 + 3 - v6;
  if ( v16 >= 512 )
    v16 = 512;
  HIWORD(v15) = (unsigned int)&dword_48A590 >> 16;
  v46 = v16;
  v45 = 0;
  v9[2] = v14;
LABEL_12:
  if ( *v15 )
  {
    v9[3] = 0;
    v17 = sub_1E1578(&ptr, (int)v6, v46);
    v18 = (_DWORD *)sub_242FC8(v17);
    v19 = sub_2594B0(*v18, "Sending packet: %s", ptr);
    if ( v48 > 0x200 )
    {
      v20 = (_DWORD *)sub_242FC8(v19);
      v19 = sub_2594B0(*v20, "[%zu bytes omitted]", v48 - 512);
    }
    v21 = (_DWORD *)sub_242FC8(v19);
    v22 = sub_2594B0(*v21, "...");
    v23 = (_DWORD *)sub_242FC8(v22);
    sub_25680C(*v23);
    if ( ptr != v49 )
      sub_339E64(ptr);
  }
  sub_1E49A0((int)v6, v9 + 3 - v6);
  if ( !v7[5] )
  {
    v43 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = sub_1E4AF8(dword_46DCE8);
        v25 = *v15;
        v26 = v24;
        if ( !*v15 )
          break;
        v44 = v24 + 2;
        switch ( v24 )
        {
          case -2:
          case 36:
          case 37:
          case 43:
          case 45:
            if ( !v43 )
            {
              switch ( v24 )
              {
                case -2:
                  goto LABEL_27;
                case 36:
                  goto LABEL_38;
                case 37:
                  goto LABEL_29;
                case 43:
                  goto LABEL_51;
                case 45:
                  goto LABEL_26;
                default:
                  goto LABEL_52;
              }
            }
            v24 = sub_2592E0(10);
            v43 = 0;
            break;
          default:
            break;
        }
        switch ( v44 )
        {
          case 0:
            goto LABEL_27;
          case 38:
            goto LABEL_37;
          case 39:
            goto LABEL_29;
          case 45:
            goto LABEL_34;
          case 47:
            goto LABEL_25;
          default:
            if ( !*v15 )
              continue;
            if ( !v43 )
            {
LABEL_52:
              v38 = (_DWORD *)sub_242FC8(v24);
              v24 = sub_2594B0(*v38, "putpkt: Junk: ");
            }
            v36 = (_DWORD *)sub_242FC8(v24);
            sub_259314(v26 & 0x7F, *v36);
            break;
        }
LABEL_50:
        v43 = 1;
      }
      switch ( v24 )
      {
        case -2:
          goto LABEL_27;
        case 36:
LABEL_37:
          v25 = *v15;
LABEL_38:
          if ( v25 )
          {
            v35 = (_DWORD *)sub_242FC8(v24);
            sub_2594B0(*v35, "Packet instead of Ack, ignoring it\n");
          }
          while ( 1 )
          {
            v34 = sub_1E4AF8(dword_46DCE8);
            if ( v34 == 35 )
              break;
            if ( v34 == 42 )
            {
              if ( sub_1E4AF8(dword_46DCE8) < 0 )
                goto LABEL_43;
            }
            else if ( v34 == -2 )
            {
              goto LABEL_43;
            }
          }
          if ( sub_1E4AF8(dword_46DCE8) < 0 )
          {
LABEL_43:
            sub_1E49A0((int)"+", 1);
          }
          else
          {
            sub_1E4AF8(dword_46DCE8);
            sub_1E49A0((int)"+", 1);
          }
          continue;
        case 37:
LABEL_29:
          v29 = sub_1E4BA0((const char **)v7, v7 + 1);
          v30 = *v15;
          if ( v29 < 0 )
          {
            if ( v30 )
            {
              if ( !v43 )
              {
                v39 = (_DWORD *)sub_242FC8(v29);
                v29 = sub_2594B0(*v39, "putpkt: Junk: ");
              }
              v40 = (_DWORD *)sub_242FC8(v29);
              v41 = sub_259314(37, *v40);
              v42 = (_DWORD *)sub_242FC8(v41);
              sub_2594B0(*v42, "%s", *v7);
              goto LABEL_50;
            }
          }
          else
          {
            if ( v30 )
            {
              v31 = sub_1E1578(&ptr, *v7, v29);
              v32 = (_DWORD *)sub_242FC8(v31);
              sub_2594B0(*v32, "  Notification received: %s\n", (const char *)ptr);
              if ( ptr != v49 )
                sub_339E64(ptr);
            }
            sub_1F7C60(v7[102]);
            v45 = 0;
          }
          break;
        case 43:
LABEL_34:
          if ( *v15 )
          {
LABEL_51:
            v37 = (_DWORD *)sub_242FC8(v24);
            sub_2594B0(*v37, "Ack\n");
          }
          v28 = 1;
          goto LABEL_36;
        case 45:
LABEL_25:
          if ( *v15 )
          {
LABEL_26:
            v27 = (_DWORD *)sub_242FC8(v24);
            sub_2594B0(*v27, "Nak\n");
          }
LABEL_27:
          if ( ++v45 > 3 )
            goto LABEL_28;
          goto LABEL_12;
        default:
          continue;
      }
    }
  }
LABEL_28:
  v28 = 0;
LABEL_36:
  sub_339E64(v6);
  return v28;
}
