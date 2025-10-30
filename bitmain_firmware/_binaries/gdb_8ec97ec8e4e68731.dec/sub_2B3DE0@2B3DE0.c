int __fastcall sub_2B3DE0(int a1)
{
  int v2; // r5
  int v4; // r6
  const char *v5; // r5
  int v6; // r3

  v2 = sub_2FC36C(a1, ".note.gnu.arm.ident");
  if ( !v2 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(a1 + 160) + 32) & 0x800) != 0 )
    {
      v2 = 11;
    }
    else
    {
      switch ( sub_2EF5B0(a1, 0, 6) )
      {
        case 1:
          v2 = 5;
          break;
        case 2:
          v2 = 6;
          break;
        case 3:
          v2 = 8;
          break;
        case 4:
          v4 = *(_DWORD *)(a1 + 160);
          v5 = *(const char **)(v4 + 664);
          if ( !v5 )
            goto LABEL_19;
          if ( !strcmp(*(const char **)(v4 + 664), "IWMMXT2") )
          {
            v2 = 13;
            break;
          }
          if ( !strcmp(v5, "IWMMXT") )
            goto LABEL_20;
          if ( !strcmp(v5, "XSCALE") )
          {
            v6 = *(_DWORD *)(v4 + 732);
            if ( v6 == 1 )
            {
LABEL_20:
              v2 = 12;
            }
            else if ( v6 == 2 )
            {
              v2 = 13;
            }
            else
            {
              v2 = 10;
            }
          }
          else
          {
LABEL_19:
            v2 = 9;
          }
          break;
        default:
          break;
      }
    }
  }
  sub_2A66F4(a1, 39, v2);
  return 1;
}
