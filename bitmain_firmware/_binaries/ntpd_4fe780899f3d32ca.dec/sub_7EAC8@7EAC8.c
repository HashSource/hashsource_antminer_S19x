size_t __fastcall sub_7EAC8(const char **a1, int a2)
{
  int (*v4)(); // r1
  const char *v5; // r2
  int v6; // r3
  const char *v7; // r1
  int v8; // r3

  v4 = *(int (**)())(a2 + 40);
  if ( v4 == optionPrintVersion )
  {
    printf("            echo \"$%s_%s_TEXT\"\n            exit 0\n", *a1, "VERSION");
  }
  else if ( v4 == optionPagedUsage )
  {
    printf("            echo \"$%s_LONGUSAGE_TEXT\" | ${PAGER-more}\n            exit 0\n", *a1);
  }
  else if ( v4 == optionLoadOpt )
  {
    printf("            %s\n", "echo 'Warning:  Cannot load options files' >&2");
    printf("            %s\n", "OPT_ARG_NEEDED=YES");
  }
  else
  {
    v5 = *(const char **)(a2 + 48);
    if ( v5 )
    {
      v6 = *(unsigned __int16 *)(a2 + 12);
      v7 = *a1;
      if ( v6 == 1 )
      {
        printf(
          "            if [ -n \"${%1$s_%2$s}\" ] && ${%1$s_%2$s_set} ; then\n"
          "                echo 'Error:  duplicate %2$s option'\n"
          "                echo \"$%1$s_USAGE_TEXT\"\n"
          "                exit 1\n"
          "            fi >&2\n"
          "            %1$s_%2$s_set=true\n"
          "            OPT_NAME='%2$s'\n",
          v7,
          v5);
      }
      else
      {
        if ( v6 != 0xFFFF )
        {
          printf(
            "            if [ $%1$s_%2$s_CT -gt %3$u ] ; then\n"
            "                echo 'Error:  more than %3$d %2$s options'\n"
            "                echo \"$%1$s_USAGE_TEXT\"\n"
            "                exit 1\n"
            "            fi >&2\n",
            v7,
            v5,
            v6);
          v7 = *a1;
          v5 = *(const char **)(a2 + 48);
        }
        printf(
          "            %1$s_%2$s_CT=`expr ${%1$s_%2$s_CT} + 1`\n"
          "            OPT_ELEMENT=\"_${%1$s_%2$s_CT}\"\n"
          "            OPT_NAME='%2$s'\n",
          v7,
          v5);
      }
      v8 = *(_DWORD *)(a2 + 16);
      if ( (v8 & 0xF000) != 0 )
      {
        if ( (v8 & 0x10000) != 0 )
        {
          printf(
            "            eval %1$s_%2$s${OPT_ELEMENT}=true\n            export %1$s_%2$s${OPT_ELEMENT}\n",
            *a1,
            *(const char **)(a2 + 48));
          printf("            %s\n", "OPT_ARG_NEEDED=OK");
        }
        else
        {
          printf("            %s\n", "OPT_ARG_NEEDED=YES");
        }
      }
      else
      {
        printf(
          "            eval %1$s_%2$s${OPT_ELEMENT}=true\n            export %1$s_%2$s${OPT_ELEMENT}\n",
          *a1,
          *(const char **)(a2 + 48));
        printf("            %s\n", "OPT_ARG_NEEDED=NO");
      }
    }
    else if ( v4 )
    {
      printf("            echo \"$%s_%s_TEXT\"\n            exit 0\n", *a1, "LONGUSAGE");
    }
    else
    {
      printf("            %s\n", "echo 'Warning:  Cannot save options files' >&2");
      printf("            %s\n", "OPT_ARG_NEEDED=OK");
    }
  }
  return fwrite("            ;;\n\n", 1u, 0x10u, stdout);
}
