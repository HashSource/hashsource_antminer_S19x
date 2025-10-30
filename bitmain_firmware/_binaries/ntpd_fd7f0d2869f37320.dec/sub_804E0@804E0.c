int __fastcall sub_804E0(int a1)
{
  int v2; // r4
  int v3; // r5
  const char *v4; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r1
  char *v8; // r0
  FILE **v10; // [sp+0h] [bp-1Ch]

  v2 = *(_DWORD *)(a1 + 68);
  v3 = *(_DWORD *)(a1 + 100);
  v10 = &stdout;
  fwrite("        case \"${OPT_CODE}\" in\n", (size_t)&dword_0 + 1, 0x1Eu, stdout);
  do
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 16) & 0x280000) == 0 )
      {
        sub_8031C(*(const char **)(v2 + 52), (_DWORD *)v2, (_DWORD *)(a1 + 68), (int *)(a1 + 100));
        sub_7FFA8((const char **)(a1 + 32), v2);
        v4 = *(const char **)(v2 + 56);
        if ( v4 )
          break;
      }
      --v3;
      v2 += 64;
      if ( v3 <= 0 )
        return printf(
                 "        * )\n"
                 "            echo Unknown %s: \"${OPT_CODE}\" >&2\n"
                 "            echo \"$%s_USAGE_TEXT\" >&2\n"
                 "            exit 1\n"
                 "            ;;\n"
                 "        esac\n",
                 "option",
                 *(const char **)(a1 + 32));
    }
    sub_8031C(v4, (_DWORD *)v2, (_DWORD *)(a1 + 68), (int *)(a1 + 100));
    if ( *(int (**)())(v2 + 40) == optionLoadOpt )
    {
      printf("            %s\n", "echo 'Warning:  Cannot suppress the loading of options files' >&2");
    }
    else
    {
      v5 = *(unsigned __int16 *)(v2 + 12);
      v6 = *(_DWORD *)(v2 + 48);
      v7 = *(_DWORD *)(a1 + 32);
      if ( v5 == 1 )
        v8 = "ME='%2$s'\n";
      else
        v8 = " ;;\n    esac\n";
      if ( v5 == 1 )
        printf(v8 + 11, v7, v6, *(_DWORD *)(v2 + 60), v10);
      else
        printf(v8 + 14, v7, v6, *(_DWORD *)(v2 + 60), v10);
    }
    printf("            %s\n", "OPT_ARG_NEEDED=NO");
    --v3;
    v2 += 64;
    fwrite("            ;;\n\n", 1u, 0x10u, *v10);
  }
  while ( v3 > 0 );
  return printf(
           "        * )\n"
           "            echo Unknown %s: \"${OPT_CODE}\" >&2\n"
           "            echo \"$%s_USAGE_TEXT\" >&2\n"
           "            exit 1\n"
           "            ;;\n"
           "        esac\n",
           "option",
           *(const char **)(a1 + 32));
}
