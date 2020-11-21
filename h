[33mcommit 0760fb42fe851f38930d552695d431d2464c4b2e[m[33m ([m[1;36mHEAD -> [m[1;32mmain[m[33m, [m[1;31morigin/main[m[33m, [m[1;31morigin/HEAD[m[33m)[m
Author: jwkim98 <jwkim98@kaist.ac.kr>
Date:   Fri Nov 20 22:16:28 2020 +0900

    refactor : update pom.xml

[33mcommit 7852b90cfe1cea1e0cdaa19d490c83f0d8684b50[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 11 17:41:24 2020 +0200

    Document security fix in release notes

[33mcommit c40e88d2407b7925adc404199be5a367aab1b86c[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 11 17:32:06 2020 +0200

    Update Version.java

[33mcommit db02762dc7ff784d4b68cbbdf8a86412ce87f11e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 11 17:18:57 2020 +0200

    [maven-release-plugin] prepare for next development iteration

[33mcommit 1b683f4ec07bcfa40149f086d32240f805487e66[m[33m ([m[1;33mtag: r4.13.1[m[33m)[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 11 17:18:49 2020 +0200

    [maven-release-plugin] prepare release r4.13.1

[33mcommit ce6ce3aadc070db2902698fe0d3dc6729cd631f2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 11 17:14:28 2020 +0200

    Draft 4.13.1 release notes

[33mcommit c29dd8239d6b353e699397eb090a1fd27411fa24[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 11 17:05:06 2020 +0200

    Change version to 4.13.1-SNAPSHOT

[33mcommit 1d174861f0b64f97ab0722bb324a760bfb02f567[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jan 1 18:05:50 2020 +0100

    Add a link to assertThrows in exception testing
    
    Provide information about alternatives to the expected parameter which
    can be used to overcome the limitations of expected.
    
    This is an improvement for JUnit 4.13 to the fix for #806
    (84dcb64cf07eba08fd7ef4de3a6aaf21f4944157).

[33mcommit 543905df72ff10364b94dda27552efebf3dd04e9[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jan 1 17:26:59 2020 +0100

    Use separate line for annotation in Javadoc
    
    Align coding style of the examples.

[33mcommit 510e906b391e7e46a346e1c852416dc7be934944[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jan 1 17:25:51 2020 +0100

    Add sub headlines to class Javadoc
    
    Structure the Javadoc.

[33mcommit 610155b8c22138329f0723eec22521627dbc52ae[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 11 16:56:21 2020 +0200

    Merge pull request from GHSA-269g-pwp5-87pp
    
    When running on Java 7 or later, temporary directories are now created
    Using Java’s NIO API which restricts permissions to owner-only by
    default.

[33mcommit b6cfd1e3d736cc2106242a8be799615b472c7fec[m
Author: Tasuku Nakagawa <38446259+T45K@users.noreply.github.com>
Date:   Mon Sep 7 02:53:35 2020 +0900

    Explicitly wrap float parameter for consistency (#1671)
    
    Follow-up on #1141.

[33mcommit a5d205c7956dbed302b3bb5ecde5ba4299f0b646[m
Author: Filipe Roque <froque@premium-minds.com>
Date:   Sun Sep 6 18:51:58 2020 +0100

    Fix GitHub link in FAQ (#1672)

[33mcommit 3a5c6b4d08f408c8ca6a8e0bae71a9bc5a8f97e8[m
Author: Rahul Nagekar <rahul.nagekar1@gmail.com>
Date:   Sun Aug 2 23:54:18 2020 +0530

    Deprecated since jdk9 replacing constructor instance of Double and Float (#1660)
    
    Replacing deprecated datatype constructors

[33mcommit 714019f4c98ba68f470df5a551b90bf95deb07b9[m
Merge: bef3bcaa 5be301c6
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sun Aug 2 11:23:20 2020 -0700

    Merge pull request #1669 from pholser/issues/1668/make-framework-field-ctor-public
    
    Make FrameworkField constructor public.
    
    Fixes #1668

[33mcommit 5be301c6e7f5d2305f078da7a5e2272050733981[m
Author: Paul Holser <holser@railroad19.com>
Date:   Mon Jul 20 09:45:28 2020 -0500

    Make FrameworkField ctor public. Fixes #1668
    
    Prior to this change, custom runners could make `FrameworkMethod`
    instances, but not `FrameworkField` instances. This small change
    allows for both now, because `FrameworkField`'s constructor has been
    promoted to `public` from package-private.

[33mcommit c53a277395f98acec432340deedefa7be50d9612[m
Author: Paul Holser <holser@railroad19.com>
Date:   Mon Jul 20 09:42:31 2020 -0500

    Bump to 4.14-SNAPSHOT

[33mcommit bef3bcaaee3c3e433f78cb93c1dfd14eb38acd6d[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jun 21 19:10:39 2020 +0200

    Replace "master" with "main"

[33mcommit 50a285d3ce69b4556ac46d8633f6beb4527b4679[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Apr 10 13:40:42 2020 +0200

    Link to KEYS file in junit4 repo

[33mcommit 8c0df64ff17fead54c304a8b189da839084925c2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Apr 10 13:39:57 2020 +0200

    Add signing key

[33mcommit 4bbee02ddef883d561a3efc08a49c783f65dbc88[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Apr 10 13:38:43 2020 +0200

    Document signing key

[33mcommit 435d41f0d45cfdbc1a38e1ad4eb1d5300da533f9[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Feb 7 21:35:25 2020 +0100

    Use Google's Maven Central mirror
    
    We are using Maven 3.1.1 which by default uses HTTP instead of HTTPS for
    resolving artifacts from Maven Central. Maven Central recently
    discontinued HTTP support. Therefore the build on Travis started
    failing. By using an HTTPS mirror of Maven Central the build on Travis
    will work again.
    
    I chose Google's mirror because Travis uses this mirror by default, too.
    I did not upgrade to a new version of Maven because there is no newer
    version with Java 5 support and it should be possible to build JUnit 4
    with Java 5 so that we can easily ensure that it works with Java 5.

[33mcommit 95af9761e540e3f019d1ffb767c56c52069166af[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jan 27 08:50:22 2020 +0100

    Add "Deprecate Assert#assertThat"
    
    We forgot to add this changes to the release notes.
    
    Fixes #1645.

[33mcommit 2df7e0882128d551565f87f688bbe745d85aacba[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jan 1 16:56:21 2020 +0100

    Migrate release notes for 4.13 from wiki

[33mcommit 6f6f6c12676d1aa04abc6be27ea5a6eb92cc35cc[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jan 1 16:44:03 2020 +0100

    [maven-release-plugin] prepare for next development iteration

[33mcommit 038f7518fc1018b26df608e3e5dce6db4611be29[m[33m ([m[1;33mtag: r4.13[m[33m)[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jan 1 16:43:55 2020 +0100

    [maven-release-plugin] prepare release r4.13

[33mcommit 8fd0197cd3710786212a5bba1545bc9513fe74cc[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 1 11:01:20 2019 +0100

    [maven-release-plugin] prepare for next development iteration

[33mcommit c0bdd7d4312862dbc6e1a8430cf75024a18158c9[m[33m ([m[1;33mtag: r4.13-rc-2[m[33m)[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 1 11:01:12 2019 +0100

    [maven-release-plugin] prepare release r4.13-rc-2

[33mcommit ea2e22933c76f6fb64b802e3645306d4d2414406[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 1 10:53:19 2019 +0100

    [maven-release-plugin] prepare for next development iteration

[33mcommit 0a5a2f81563bbc61ca55301f104aa3a90c9d09cd[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 1 10:53:11 2019 +0100

    [maven-release-plugin] prepare release r4.13-rc-2

[33mcommit b51fa17fc6a750a17436f9f38c139a7b5228171f[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Thu Nov 21 13:50:25 2019 -0500

    Ensure classes annotated with @OrderWith do not have @FixMethodOrder.
    
    This is needed because classes annotated with @FixMethodOrder will not
    be reordered or sorted, so having both annotations is a contradiction.
    
    - Add AnnotationValidator to fail if class annotated with @FixMethodOrder
    - Annotate OrderWith with @ValidateWith(OrderWithValidator.class)
    - Add tests for the new validator

[33mcommit 7c2f12c92bd5c66f4cac65dfdf86863c665a13ec[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Thu Nov 21 13:49:00 2019 -0500

    Never reorder classes annotated with @FixMethodOrder
    
    Fixes #1637

[33mcommit 6c5de817e7e0afdd4d09354693535520712595fc[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Nov 2 14:05:11 2019 +0100

    Remove reference to obsolete mailing list

[33mcommit 6c7cb4b23659ce877ceef230aeef73404485220f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Nov 2 14:04:40 2019 +0100

    Delete outdated docs

[33mcommit fc3938ac16947d6e62b844b92dfae103fffb9ce9[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:16:11 2019 +0200

    [maven-release-plugin] prepare for next development iteration

[33mcommit 17d340a7d2661f0a0c7e284b49cd70f5a4495d6b[m[33m ([m[1;33mtag: r4.13-rc-1[m[33m)[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:16:03 2019 +0200

    [maven-release-plugin] prepare release r4.13-rc-1

[33mcommit 0f3f825b975d9df3e8794f2d79e53e7546029751[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:09:05 2019 +0200

    [maven-release-plugin] prepare for next development iteration

[33mcommit eac719aa5272e564c1d82b66564c53cf7ce203c1[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:08:57 2019 +0200

    [maven-release-plugin] prepare release r4.13-rc-1

[33mcommit 58b3ab6c3f0512e58e4d85c4095ee287114ccca8[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:05:11 2019 +0200

    [maven-release-plugin] prepare for next development iteration

[33mcommit f6961b9e8066618c02050995619fd9f68332a6d7[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:05:04 2019 +0200

    [maven-release-plugin] prepare release r4.13-rc-1

[33mcommit ec52ffa139f3c55412edebe5a22cee669fbd9980[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:01:48 2019 +0200

    [maven-release-plugin] prepare for next development iteration

[33mcommit 30d55e18f37cba16b389d463a450196ee10a39c4[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 14:01:41 2019 +0200

    [maven-release-plugin] prepare release r4.13-rc-1

[33mcommit 6a821fff5eb29e7325914332a71016e9c155fbe6[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 13:56:45 2019 +0200

    Revert "[maven-release-plugin] prepare release r4.13-rc-1"
    
    This reverts commit 720ee195d250190921e6440f88795869997d1a13.

[33mcommit 720ee195d250190921e6440f88795869997d1a13[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 13:54:17 2019 +0200

    [maven-release-plugin] prepare release r4.13-rc-1

[33mcommit ffbe5dbf1196c9f5f985335dbbfad611c6fb3e33[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 13:50:19 2019 +0200

    [maven-release-plugin] prepare for next development iteration

[33mcommit 1d7e041ddaa29abbdce4bf528d6e6d143b8faa3a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 26 13:50:11 2019 +0200

    [maven-release-plugin] prepare release r4.13-rc-1

[33mcommit f7002b5150bf068de0daae450e78eee1a183f63a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Oct 18 20:42:04 2019 +0200

    Only deprecate ExpectedException.none()
    
    Instead of deprecating the whole class, now only the factory method is
    deprecated and points to `assertThrows()`. This will make it easier to
    temporarily suppress the exception for codebases that use it
    extensively by adding an intermediate factory method of their own.
    
    Resolves #1609.

[33mcommit 7065f378bdd67bb9e9e0a44044ed36f7006218bc[m
Author: Alex Panchenko <alex.panchenko@gmail.com>
Date:   Fri Oct 18 20:47:07 2019 +0200

    Make @ValidateWith only applicable to annotation types (#1612)
    
    Add `@Target(ANNOTATION_TYPE)` to `@ValidateWith` since it's
    only designed to be applied to another annotation.
    
    Fixes #1611.

[33mcommit f727ecfdc1eea0ae438b5ed050c6e7cba973324c[m
Author: Dirk Mahler <dirk.mahler@buschmais.com>
Date:   Fri Oct 18 20:35:47 2019 +0200

    Ignore test for read-only temp folder on Windows (#1632)

[33mcommit 34cfd132a394a4ff274592ca87080a100fa811c4[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Sep 27 01:26:29 2019 +0200

    Don't use Assert#assertThat in our tests
    
    This method is deprecated. Therefore we should not use it anymore.

[33mcommit 467c3f8efe1a87e3029df282e4df60ad98bc4142[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Sep 26 22:24:47 2019 +0200

    Deprecate Assert#assertThat
    
    The method "assertThat" is used for writing assertions with Hamcrest.
    Hamcrest is an independent assertion library and contains an own
    "assertThat" method in the class "org.hamcrest.MatcherAssert". It is
    available both in the old Hamcrest 1.3 release and in the current
    Hamcrest 2.1. Therefore the JUnit team recommends to use Hamcrest's own
    "assertThat" directly.

[33mcommit 1ba4b2b400c964acc05c4d7000a4502ac3218211[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Sep 26 21:19:25 2019 +0200

    Revert "Deprecate APIs that use Hamcrest classes."
    
    This reverts commit 3289d9422b535666786aa3201ea0f31ad5e1f7e3 because
    the library java-hamcrest was an experiment that is not continued.

[33mcommit dd6def82200fbbe7304f7f78d9f35f706cafdd73[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Sep 27 00:50:23 2019 +0200

    Run tests on Ubuntu Trusty
    
    Trusty has support for OpenJDK 6 and other old JDKs.

[33mcommit 8c9e81daf38efa8b4af9ba5c55fe83765ac434d6[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jun 4 02:46:46 2019 +0200

    Rewrite Javadoc of RuleChain
    
    The purpose of this rule is no longer the ordering of rules but it can
    still be used for composing rules into a single rule. Therefore we
    remove the deprecation.
    
    Fixes #1614.

[33mcommit 0fe662d1432784cd24f33a4b57a4f62895706d66[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jun 20 19:52:29 2019 +0200

    Add test for failure message of assumeTrue/assumeFalse

[33mcommit a5de8a09218b4b85616e231ae7aac0eb49bf9188[m
Author: Ioan Giurgiu <ioan.giu@gmail.com>
Date:   Thu Jun 20 17:02:35 2019 +0300

    Changed the assumeFalse method following this suggestion: https://github.com/junit-team/junit4/issues/1616

[33mcommit fd27d36274fe53b36ca59e0f9e9e74a6761e8306[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun May 5 14:50:29 2019 +0200

    [maven-release-plugin] prepare for next development iteration

[33mcommit fc3813fba9e2250ddd96877d01f2f694127edb80[m[33m ([m[1;33mtag: r4.13-beta-3[m[33m)[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun May 5 14:50:21 2019 +0200

    [maven-release-plugin] prepare release r4.13-beta-3

[33mcommit d9861ecdb6e487f6c352437ee823879aca3b81d4[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Apr 13 14:44:15 2019 +0200

    Restore that fields shadow fields from super class
    
    This commit restores the shadowing behaviour of JUnit 4.12. Some users
    of JUnit 4 have tests that rely on this behaviour. Their tests would
    fail with JUnit 4.13.
    
    This commit finally reverts 39b8a92d24e6c81e4fc614cdf13003ce17bbc166.
    Some parts have already been reverted by
    ed6813d3bbe2da4d67892f73e641fa80ab4d126e.

[33mcommit 29f930ac93ed5af1cb20ed0b6a8e1d5558e9d927[m
Author: simaos <36926049+simaos@users.noreply.github.com>
Date:   Fri Apr 5 17:48:50 2019 +0100

    make junit4 path consistent with clone
    
    git clone default is to name cloned path same as repo.git.

[33mcommit 8a367c1b918f02135d333f3cea8b576c20287361[m
Author: Alex Panchenko <alex.panchenko@gmail.com>
Date:   Wed Apr 3 17:20:00 2019 +0200

    Revert "ExternalResource: declare after() to throw Throwable (#1421)"
    
    Revert commit cebbf5e15725b4dc247ac0557f6fa63f475b15af.
    It breaks code that extends ExternalResource,
    overrides after() and calls super.after() in after().

[33mcommit 552bb39280c2daa5b41eec808dc6a3cafb3237df[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sun Mar 31 20:03:43 2019 -0700

    Fix typo in CONTRIBUTING.md ("JUnit4" -> "JUnit5")

[33mcommit 37610e67f77db2f238e7fde2c36f1f0d180790b1[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:22:10 2019 -0500

    spelling: unwieldy

[33mcommit 7c2ac2b03e4f09b3906ed6573cd5232177f2e5c5[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:21:54 2019 -0500

    spelling: unmodifiable

[33mcommit a0f07dd2f17f00079d68b85928cadfabbc871803[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:21:10 2019 -0500

    spelling: synchronized

[33mcommit 4c418a437b7a30080854b471636c10bac46b913e[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:19:39 2019 -0500

    spelling: parameterized

[33mcommit 3c6131900616d8e88aee927d1d6b7ecff644cd17[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:19:26 2019 -0500

    spelling: overriding

[33mcommit b9a1291cd0e72b0ba1babfd330a0148ab3d42b27[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:18:51 2019 -0500

    spelling: methods

[33mcommit 68e45a19addd71cce92b45daa4bdcd91870123ea[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:17:34 2019 -0500

    spelling: implementation

[33mcommit 5339b24227cde1e5ae2788e44a5fd1a676463bc8[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:17:15 2019 -0500

    spelling: hierarchy

[33mcommit d24a4f9c0805cb1356935ddc1dcd976060750c7b[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:17:22 2019 -0500

    spelling: hierarchies

[33mcommit 421f31a77fb007bf9342e8b700cd21944a239f5d[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:16:16 2019 -0500

    spelling: elements

[33mcommit a27c8913e83978e931135c1315e6ca83d19cad87[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:16:04 2019 -0500

    spelling: different

[33mcommit 0d295554111f8958dc074e02b8891df402c150c1[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:15:00 2019 -0500

    spelling: corresponding

[33mcommit fd9882a4ccd0e5a44402c334bba5609f3482fa0a[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:14:49 2019 -0500

    spelling: constraints

[33mcommit 721b819bbdddef0aafb52ead6d10b2b9c8c7d102[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:14:37 2019 -0500

    spelling: confidential

[33mcommit a5e71079e26cfa282a36b1eab806f596bc20a949[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:14:14 2019 -0500

    spelling: builder

[33mcommit 2101dad6cf8fcd94d351f65cf28812ec527d7bf5[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:12:55 2019 -0500

    spelling: assert

[33mcommit 039dbd17447bd7bb5b4d0f7861d87b5c22703832[m
Author: Josh Soref <jsoref@users.noreply.github.com>
Date:   Sun Jan 6 02:00:21 2019 -0500

    style: remove space

[33mcommit 6d0fad48ce3a05b32d903d2016c24d276b6e1eb8[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Thu Mar 14 07:06:32 2019 -0700

    Remove usages of FrameworkMember as a raw type. (#1596)

[33mcommit c8250adc5eda0ff1c8a01b9d4f1ec6a131bb38da[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Thu Mar 14 07:06:03 2019 -0700

    Annotate ExpectedException with @Deprecated. (#1597)
    
    The Javadoc already indicates that it is deprecated.

[33mcommit cbb6614036d0a83290e867394017f0ae8e040ae7[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Mar 10 20:17:50 2019 +0100

    Document order attribute of Rule and ClassRule
    
    Instead of mentioning the now deprecated `RuleChain`, the Javadoc of the
    `Rule` and `ClassRule` annotation now contains an example on how to use
    the new `order` attribute.
    
    Resolves #1593.

[33mcommit 1844d843b3bae157c088086477ddee7a5f815878[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Feb 2 14:58:20 2019 +0100

    [maven-release-plugin] prepare for next development iteration

[33mcommit 69424956c3c0d1f983cc2d489bcd7bebbf8b67a9[m[33m ([m[1;33mtag: r4.13-beta-2[m[33m)[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Feb 2 14:58:11 2019 +0100

    [maven-release-plugin] prepare release r4.13-beta-2

[33mcommit 49f1c5dab573080a86f612218f01c5c4191f3a00[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Jan 12 14:39:56 2019 +0100

    Polish ThreadsTest

[33mcommit faa0e334080cd91f05fc1acbc7c39a525e172256[m
Author: Narendra Pathai <narendra.pathai@gmail.com>
Date:   Fri Oct 26 20:01:38 2018 +0530

    Clear thread interrupt status after each test
    
    The thread interrupt status flag is now cleared from `classBlock()` and
    `methodBlock()`. The flag is cleared after each test case completes and
    after `AfterClass` methods and `ClassRules` have been executed.
    
    Fixes #1365.

[33mcommit 9a28848007830dca4b92c73cc571cbe753a560ba[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jan 20 10:47:03 2019 +0100

    Fix site:site build on OpenJDK 11.0.2

[33mcommit 138d278012f9d647f983f59c3ede954ea111bdd5[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Jan 19 23:28:04 2019 +0100

    Fix Javadoc generation on OpenJDK 11.0.2

[33mcommit c3715204786394f461d94953de9a66a4cec684e9[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 17 09:30:40 2018 +0100

    Re-introduce openjdk6 build
    
    Fixes #1577.

[33mcommit 61c3a030440ed9041aafd9e66d1c6c3ebc71440a[m
Author: Alex Panchenko <alex.panchenko@gmail.com>
Date:   Mon Dec 17 19:38:44 2018 +0200

    ParentRunner.classRules() returns modifiable List (#1578)

[33mcommit 9b34c4b6e887c6ea8ea78748f9406c83c9118e71[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Dec 12 10:03:00 2018 +0100

    Remove openjdk6 from Travis pipeline for now
    
    Related issue: #1577

[33mcommit e22bd95ab7e452245d4844f5e9b05564fe189f68[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 25 19:48:18 2018 +0100

    Change links to point directly to junit4/5 repos

[33mcommit c16e932608891f97c4ae419fec54c85f07de9cbd[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 25 19:42:34 2018 +0100

    Delete unused source file for changes site report

[33mcommit fc46c0424162255d30a37eb8ac65f4822c1ff820[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 25 19:38:17 2018 +0100

    Add link to 4.13 release notes to website

[33mcommit ab7c961572adab958edf4c5cf1f5371b72117300[m
Merge: 3681aa37 34359980
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 25 18:59:56 2018 +0100

    Merge branch 'junit-lambda-website'

[33mcommit 3681aa3796084b41d67a25b31c6595dbc180167a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 25 14:10:40 2018 +0100

    [maven-release-plugin] prepare for next development iteration

[33mcommit 6e1d2e6ebbc484af60c06bd26cc55349b352e49e[m[33m ([m[1;33mtag: r4.13-beta-1[m[33m)[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 25 14:10:32 2018 +0100

    [maven-release-plugin] prepare release r4.13-beta-1

[33mcommit d89a403e85c8a12d6b978f91371b5435d7ce6bf7[m
Author: Christian Stein <sormuras@gmail.com>
Date:   Fri Nov 23 20:17:34 2018 +0100

    Set 'junit' as `Automatic-Module-Name`
    
    Prior to this commit, `junit` was derived as the module name
    from the name of the JAR file. Now, `junit` is set as an explicit
    module name, stored in the MANIFEST.MF file, to ensure a
    smooth ride into the modular age for users of JUnit 4.

[33mcommit 10a863eee43c9e13d1647675016b086f527a0697[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Oct 26 22:23:36 2018 +0200

    Improve message if file exists instead of folder
    
    When TemporaryFolder(String path) or TemporaryFolder(String... paths) is
    called with a path that matches the path of an existing file then an
    IOException with a message like "a file with path <path> exists" is
    thrown.

[33mcommit 01d7ec2c8212ed9395877cbf77eb5139d80b74e1[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Oct 26 22:14:17 2018 +0200

    Check that newFolder fails for read only parent

[33mcommit 67d424b26f061c57a0a625a8be2b0c68f7a413b4[m
Author: Leonard Broman <leonard.broman@dewire.com>
Date:   Thu Oct 11 16:10:53 2018 +0200

    Fixed small incorrect javadoc link

[33mcommit 4c6975f955d781ad641e076fe2788a2f4c6ada34[m
Author: Renuka Piyumal Fernando <renuka.piyumal@gmail.com>
Date:   Wed Oct 10 23:34:48 2018 +0530

    replace for with foreach (#1560)

[33mcommit 23157b75c36c8754781512552d8b6733f521c05c[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Oct 2 20:58:41 2018 +0200

    Fix typo in test name

[33mcommit 6973fa1d7e93150ba97846bcf4811161fc1632cb[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Oct 2 21:38:22 2018 +0200

    Set visibility of method "tryDelete" to private
    
    Ensure that we can change the methods signature in the future. This is
    only possible if no JUnit user can override it. Private methods cannot
    be overridden.

[33mcommit dc988e2447a44588baec811259d0f36ca9e2995e[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Oct 2 21:33:05 2018 +0200

    Use standard TemporaryFolder for test
    
    KISS

[33mcommit 814faffaf3ef1ef6a512d87da8de15125b862499[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Oct 2 22:07:45 2018 +0200

    Add description for pull request #876
    
    We missed to add it before we released JUnit 4.12. I think it may be
    still helpful when someone reads the old release notes.

[33mcommit b8300f0d035d4cb176cc360e551a13ad8ba5fe21[m
Author: Renuka Piyumal Fernando <renuka.piyumal@gmail.com>
Date:   Wed Oct 3 13:32:59 2018 +0530

    Simplify DisableOnDebug and ParentRunner
    
     - DisableOnDebug: merge two if branches with the same implementation
       (`return true` in the both branches).
     - Use `Collections.singletonList` instead of `Arrays.asList` since it
       contains only one item.

[33mcommit ec3d88ed31921cdef07eeace3ad1ecdbce2ecbf4[m
Author: Renuka Piyumal Fernando <renuka.piyumal@gmail.com>
Date:   Wed Oct 3 13:29:16 2018 +0530

    Close ObjectOutputStream in a finally clause
    
    Fixes #1556.

[33mcommit 568424ad3cd9fe1fdd02c4089ceb94dcc53499dd[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Oct 2 03:01:08 2018 +0200

    Improve test for assumption in Parameters method
    
    Improve readability by using more descriptive names. Split single test
    into two so that the two parts can fail independently. This makes it
    easier to find mistakes.

[33mcommit 5bb66d32679a96d7393917319b7912dc7c0a8203[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Oct 2 03:16:08 2018 +0200

    Add assumption support to Javadoc of Parameterized
    
    Since 7111b9621997f6c660687b8ac04003398343ee3a we support assumptions in
    @Parameters methods. This commit adds a description of this feature to
    the Javadoc of the Parameterized runner so that people can discover the
    new feature more easily.

[33mcommit 78029cd90a5a7be76fc54aa725be94f87f35927e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Sep 30 20:47:01 2018 +0200

    Publish from Travis
    
    Remove 11
    
    Omit signing
    
    WIP

[33mcommit 02c328028b4d32c15bbf0becc9838e54ecbafcbf[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Jul 30 10:07:50 2018 -0700

    Add Ordering, Orderable and @OrderWith (#1130)
    
    * Add Ordering, Orderable and @OrderWith.
    
    These APIs allow arbitrary ordering of tests, including randomization.

[33mcommit 64eb7302653c1263767eee550e5b53d9af66ba0d[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Jul 15 14:22:57 2018 +0200

    Fix link to JUnit Toolbox
    
    This project moved from Google Code to GitHub.
    
    Fixes #1540.

[33mcommit 0e2d999c11e28369b5057c96fc7c20e162adee72[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Jun 24 11:21:18 2018 +0200

    Download dependencies with JDK 8
    
    As of June 18th 2018, Maven Central supports TLS 1.2 only. Therefore we
    cannot install dependencies with JDK 6 anymore. As a workaround we
    switch in each build temporarily to JDK 8 for downloading the
    dependencies. Afterwards we restore the desired JDK and build System
    Rules with it.

[33mcommit 63fd27710ee2bab6fdf00965f41ef12b79120c70[m
Author: Rodrigo Merino <elrodro83@users.noreply.github.com>
Date:   Wed Jun 20 01:34:23 2018 -0300

    ThreadGroup instance leaked when using Timeout rule (#1517)

[33mcommit 54b338c3004f765ad0df1cc228599a1841d13ca3[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Jun 18 09:44:18 2018 -0400

    Simplify NoExitSecurityManager. (#1529)
    
    * Simplify NoExitSecurityManager.
    
    SecurityManager.getInCheck() was removed in Java 10 (see
    https://bugs.openjdk.java.net/browse/JDK-8189750) and many of the other
    overridden methods in NoExitSecurityManager are deprecate, so having the
    security manager only prevent System.exit() seems better.
    
    Fixes #1522

[33mcommit f5dda835d2a3ace89fe1d12e2e769cf1cfad198a[m
Merge: 0038617a eb75886b
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sat Jun 16 22:26:48 2018 -0400

    Merge pull request #1530 from kcooney/fix-test-assumeWithExpectedException
    
    Add Result#getAssumptionFailureCount

[33mcommit eb75886b2be7edf709441962bf3272e4319823c5[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jun 5 08:45:08 2018 -0700

    Add tests for serialization of Result.assumptionFailureCount.

[33mcommit 0038617a0a6c70c712cf30b90c849db518f3715f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed May 9 07:46:26 2018 +0200

    Use assertThrows
    
    Improve readability of tests because the assert explicitly wraps the
    statement that throws the exception.

[33mcommit 5aa5f1641387daba3e566c54c83e674abc683d6c[m
Author: Laura Fink <l.fink@micromata.de>
Date:   Mon May 7 13:52:54 2018 +0200

    fix ListTest testRemoveElement by using Integer.valueOf

[33mcommit cceaf19c554f9c0bcd51223ad99fc77f31f9e877[m
Author: Laura Fink <l.fink@micromata.de>
Date:   Sun Apr 29 09:01:34 2018 +0200

    ListTest: using assertFalse

[33mcommit 5785d9df8fe25f68567272850cd65b4dc07da617[m
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Sat May 5 18:01:34 2018 +0200

    Deprecate rule ExpectedException (#1519)
    
    The method Assert.assertThrows provides a nicer way for verifying
    exceptions. In addition the use of ExpectedException is error-prone
    when used with other rules like TestWatcher because the order of rules
    is important in that case.

[33mcommit 00f2f7635fdfa16f7091d84683b5a3b93059cd20[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Apr 6 23:18:23 2018 +0200

    Recommend to set order for ExpectedException
    
    A test that should fail because of ErrorCollector may not fail when this
    test throws an exception that is expected by ExpectedException.
    
    Fixes #1466.

[33mcommit ed6813d3bbe2da4d67892f73e641fa80ab4d126e[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Tue Apr 3 19:57:23 2018 -0700

    Shadowed static methods/fields should override parent class behavior. (#1514)

[33mcommit cf13399be099b42d8786b62c134108f854d54578[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Feb 13 04:14:57 2018 +0100

    Recommend to always set order for TestWatcher
    
    TestWatcher may see failed tests as successful and vice versa if it is
    not the outermost rule and another rule changes the result of a test
    (e.g. ErrorCollector or ExpectedException).
    
    Fixes #1436.

[33mcommit 0bec573229bdd725b1d4588bd3c1ad9ba38f29eb[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Feb 9 10:21:48 2018 +0100

    Tidy up tests for TestWatcher
    
    - Make it easier to understand TestWatcher's behavior based on the tests.
    - Improve expressiveness of the test.
    - Add missing tests.

[33mcommit 9b061ea8c96fa6cba0ac9d7cfd5e8ffbd030b34a[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Feb 16 11:00:58 2018 +0100

    Support building JUnit on JDK 9
    
    Developers with a current JDK 9 on their machines are currently not able
    to easily build JUnit. This commit makes it possible to develop with
    JDK 9 and ensures that JUnit can be build with JDK 0.

[33mcommit 7a098547474fb11c91262476a172f994e8051ada[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 22 08:57:29 2018 +0100

    Compare order of methods explicitly
    
    Make the test providesAnnotatedMethodsSortedByName less fragile. (Before
    the test failed on JDK 9 because Java 9 introduces new annotations for
    some methods of Object.)

[33mcommit 04d624545f19131c9211ce330106e8665159216b[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 22 08:51:20 2018 +0100

    Test that not annotated methods are ignored
    
    Make the test less fragile. The number of annotated methods varies
    because Java 9 introduces new annotations for some methods of Object.

[33mcommit 1d0688f5d183510afd6014145f9cccc81b719d41[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Feb 19 15:38:18 2018 +0100

    Replace tabs with spaces
    
    Use same coding style within TestClassTest.

[33mcommit d3d7a8b1389e53055d4de9de3aa319053b4a5524[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Feb 19 14:20:54 2018 +0100

    Identify reflection package jdk.internal.reflect
    
    JDK 9 uses classes from the package jdk.internal.reflect instead of
    sun.reflect.

[33mcommit 660a37320badfd6749f453201aeef8f5b15da890[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Feb 21 20:00:53 2018 +0100

    Add explicit type parameters for JDK 5
    
    The code did not compile with JDK 5 before.

[33mcommit aa02545ce04232dc9806663e5729d12c7de992d5[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 15 10:22:08 2018 +0100

    Improve tests with AssumptionViolatedExceptions
    
    The expectations that the test are failing and not being skipped is now
    explicit.

[33mcommit 926b1d49464c97834bd6940e70e13762ebadd126[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 15 10:07:10 2018 +0100

    Add some missing tests

[33mcommit f7d4f2835ec7dde25356d923ade0eb93f11cf1c9[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 15 08:04:36 2018 +0100

    Run ErrorCollectorTest with Parameterized runner
    
    The array for the Parameterized gives a better overview of the tests.

[33mcommit 3d7de190844d92de87ca197cfd1fce74ae432f0f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 15 11:54:16 2018 +0100

    Add test for handling InitializationError
    
    The code was changed by commit 0804ef4cd09b0e94783a9882c60914e22fca5108
    but unfortunately the test was not part of the commit. The test is based
    on Philip Graf's test in pull request #1065.
    
    Co-authored-by: Philip Graf <git@acanda.ch>

[33mcommit 627b85abfd9c1f6c69b14f9d33fb292868fe6826[m
Author: Alex Panchenko <alex.panchenko@gmail.com>
Date:   Thu Feb 15 13:26:25 2018 +0700

    rename expectThrows() to assertThrows()

[33mcommit 347eb809e653d8fb601b9751f7b7971341e1f5ec[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Feb 14 16:15:15 2018 +0100

    Separate VerifierRuleTest and ErrorCollectorTest
    
    It is a common practice to collect the tests for a class in a test class
    whose name is equal to the class' name but with a suffix `Test`.
    Therefore having all tests for `ErrorCollector` in a class named
    `ErrorCollectorTest` makes it easier for people to find them (principle
    of least astonishment).

[33mcommit 1b4ac073bc2337eb766f379e74237aa1fc4a6e4f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 8 10:23:58 2018 +0100

    Use LoggingTestWatcher (DRY)

[33mcommit 43cdf991a8c5808b07c657460815e7d8913ebb79[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 8 10:18:43 2018 +0100

    Improve expressiveness of test name
    
    The test name "beforesAndAftersAreEnclosedByRule" reflects the purpose
    of the test better than "methodBeforesAndAfters".

[33mcommit 41c8f3ebd3e1627483956f1fb9a18bfdedb6b6b7[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Feb 8 00:03:12 2018 +0100

    Delete unnecessary semicolons
    
    These semicolons are the source of distracting warnings in the IDE.

[33mcommit 343599800301b8f0886921cfc605dc85899f8f7e[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Oct 15 22:21:29 2017 +0200

    Build with Maven 3.1.1 (using Maven Wrapper)
    
    This makes the build independent from the Maven version that is
    installed on the build machine. E.g. Travis has Maven 3.5.6 installed
    that does not support Java 6 anymore.
    
    Maven version 3.1.1 is used because all newer version don't support
    Java 1.5.

[33mcommit 0900bc02145d1793149433332d41181b9bef84fe[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Feb 7 07:59:35 2018 +0100

    Use HTTPS for CloudBees banner

[33mcommit 039a24e6afd0527a28d5b5b9e05f118724c97366[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Dec 31 12:36:56 2017 -0800

    Revert "Fluent expectations for ExpectedException".
    The change was not binary compatible with JUnit 4.12.
    In addition, the preferred way to check for exceptions
    in JUnit 4.13 is with Assert.assertThrows() so we will
    be not adding new major features to ExpectedException.
    
    This reverts commit 1db00d5a965951ea3667480a96467b43a80823c1.

[33mcommit 03298e26b29569ccbac3c6c542e9e9f79aee271e[m
Author: Uday Sagar Shiramshetty <udaysagar.2177@gmail.com>
Date:   Sun Dec 10 18:22:48 2017 -0800

    Simplify TemporaryFolder.recursiveDelete() (#1491)

[33mcommit a832c5afe5b0e7c2590d057a1a49a344d207f8a0[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Oct 16 07:03:29 2017 +0200

    Don't build with Oracle JDK 7 on Travis anymore
    
    Travis switched from Ubuntu Precise images to Ubuntu Trusty images. The
    Trusty images don't have installed Oracle JDK 7. See
    travis-ci/travis-ci#7884 We still build JUnit 4 with OpenJDK 7.
    Therefore it is fine to not build it with Oracle JDK 7.

[33mcommit 24f6632a40be83ff6ef79326cd62b67e8de86e19[m
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Sat Oct 7 15:21:49 2017 +0200

    Install OpenJDK 6 on Travis
    
    Travis switched from Ubuntu Precise images to Ubuntu Trusty images. The
    Trusty images don't have installed OpenJDK 6 by default. See
    travis-ci/travis-ci#8199

[33mcommit d2b75f93d21d2584efab1129aacd1f3020c37fca[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Oct 15 22:21:29 2017 +0200

    Build with Maven 3.1.1 (using Maven Wrapper)
    
    This makes the build independent from the Maven version that is
    installed on the build machine. E.g. Travis has Maven 3.5.6 installed
    that does not support Java 6 anymore.
    
    Maven version 3.1.1 is used because all newer version don't support
    Java 1.5.

[33mcommit 2510a7e82efabfd442b4cddfabe6150b4edf45f2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Sep 10 21:00:16 2017 +0200

    Update JUnit 5 teaser

[33mcommit 376c2fc3f269eaba580c75cd1689ca2ba16ad202[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Aug 21 21:15:10 2017 -0700

    Generate Javadoc for the junit.* packages. (#1477)
    
    Fixes #81

[33mcommit 24dfdd762e753c83babca3768d4b508cf5c6a86c[m
Author: Andrei Rybak <rybak.a.v@gmail.com>
Date:   Tue Aug 8 13:38:45 2017 +0300

    Fix dead link to the ant task in FAQ (#1478)
    
    Documentation to the ant junit task has been moved to another location.

[33mcommit e024f83796b987c6a85a40d210af6f241f2be751[m
Author: Alex Panchenko <alex.panchenko@gmail.com>
Date:   Thu May 25 23:36:45 2017 +0700

    deprecate RuleChain
    
    Closes #1445

[33mcommit aad22b88bf3332cf304da6f558152b59cdbeea2b[m
Author: Alex Panchenko <alex.panchenko@gmail.com>
Date:   Thu May 25 23:36:39 2017 +0700

    Declarative ordering of @Rule/@ClassRule rules

[33mcommit bb48ff9a5440f4062abdbd2296a377b6c4e057f0[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sat Jul 29 16:27:36 2017 -0700

    Support non-public base classes containing @Before or @Rule (#1470)
    
    Fixes #1468

[33mcommit 6324fde37e0a87c8a03ac6cb3aa0664c8c07442c[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jun 13 00:00:00 2017 +0000

    Provide helpful message if parameter cannot be set.
    
    For private @Parameter fields is users get an exception like
    "java.lang.IllegalAccessException: Class ... can not access a member
    of class X with modifiers private" The new message "Cannot set
    parameter 'parameter'. Ensure that the the field 'parameter' is
    public." tells the user what they should do.
    
    The reason for adding this feature is the Stackoverflow question
    https://stackoverflow.com/questions/44522046/reflection-exception-in-parameterized-junit-test-using-array-parameter/44522988

[33mcommit 7111b9621997f6c660687b8ac04003398343ee3a[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Thu Jun 15 02:06:03 2017 +0700

    Handle AssumptionViolatedException in @Parameters method (#1460)

[33mcommit 2cb24ea0ea1995d55cec43fc41df4c1f1ec58424[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Tue Jun 13 21:55:52 2017 +0700

    Remove exec permission from sources (#1464)

[33mcommit 3f736cf514b0421a82383db74188f6c0e3dfef1a[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Thu Jun 8 23:05:31 2017 +0700

    Call methodBlock() after fireTestStarted() (#1463)
    
    Fixes #1462

[33mcommit 563d32cd3eea98a0f87aa12c48b309678d94d5a2[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Fri May 26 13:03:57 2017 +0700

    Support suppressed exceptions when trimming stack trace (#1451)
    
    Fixes #1426

[33mcommit e0b5e243990b6945ce11704259a309c1f8e6dde2[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Fri May 26 13:02:59 2017 +0700

    Test for failures in ExternalResouce.after() when multiple rules (#1452)

[33mcommit f34c4435ebeea2dc4dd91b8242a2defdf14d7d5c[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri May 5 15:43:33 2017 -0700

    Update ParentRunner(TestClass) to check for a null parameter.
    
    Closes #1449

[33mcommit efdcb373596cca129ddd158bd81130fe14f7175d[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri May 5 14:25:45 2017 -0700

    Avoid unnecessary call to ParentRunner.createTestClass() for tests not annotated with @RunWith.

[33mcommit de3404dbc608e598b3ccdbf862972e65198efcf4[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri May 5 14:24:26 2017 -0700

    Update Theories to pass the TestClass to BlockJUnit4ClassRunner.
    
    This avoids repeated class scanning.

[33mcommit 9d2fe4efd5db64f47f3f8d1e1e8b10634f99e95d[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri May 5 14:22:23 2017 -0700

    Reuse `TestClass` for parameterized tests.
    
    The `BlockJUnit4ClassRunnerWithParameters` created a new instance of
    `TestClass` for each parameter set. This led to repeated class
    scanning and noticeable memory allocation. Reusing the `TestClass`
    avoids theses side effects.
    
    Fixes #1046.

[33mcommit 9cdf06c52de55608e95ffd636f583369ed037fb9[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Thu May 25 23:16:19 2017 +0700

    Consistent exception testing in AssertionTest (#1455)

[33mcommit 9ee381470d56efa800420e5e22721e402aca01c2[m
Author: Davide Savazzi <davide.savazzi@gmail.com>
Date:   Thu May 25 05:44:11 2017 +0100

    Remove fast-tests maven target.
    
    Many of our tests store data in static fields, so the tests cannot be run in parallel.
    
    Fixes #1297

[33mcommit 3dc8cce254982eab456409ab5e41084ac5351c2c[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Fri May 19 12:43:52 2017 -0700

    Fix incorrectly-ordered arguments in call to assertEquals(). (#1456)

[33mcommit a81c5e2eca15af2e08acf777d7a582c44d7f9b6d[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Fri May 19 08:00:56 2017 +0700

    Fix assertEquals() if toString() returns null (#1454)
    
    Fixes #1453

[33mcommit d07ed0bf79efd81c260f327854a02097f59fffb2[m
Author: jokaah <omg.joka@gmail.com>
Date:   Sat May 6 20:57:34 2017 +0200

    Made ExpectedExceptio.isAnyExceptionExpected public. (#1443)

[33mcommit 7c94e33e61b6311ffacbb65fa31b6586b785a1dd[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Fri May 5 14:08:09 2017 -0700

    Replace uses of synchronized(something) with ReentrantLock. (#1343)
    
    In almost all cases, this is more efficent, especially if there is any
    contention on the locks.

[33mcommit 1bf8438b65858565dbb64736bfe13aae9cfc1b5a[m
Author: Alex Panchenko <panchenko@users.noreply.github.com>
Date:   Fri Apr 21 02:19:06 2017 +0200

    @BeforeParam/@AfterParam for Parameterized runner (#1435)
    
    Closes #45

[33mcommit 3ce01b1484c176d553c43f230897d25a0ed01366[m
Author: Evgeny Mandrikov <Godin@users.noreply.github.com>
Date:   Mon Apr 17 18:39:40 2017 +0200

    Fix title and broken link in 4.10 release notes (#1441)

[33mcommit 26d61457c3aa8f1de646c400aaaf5524299c8c32[m
Author: powazny <yegomosc@o2.pl>
Date:   Tue Mar 7 17:52:26 2017 +0100

    Fix TemporaryFolderUsageTest on Windows (#1428)
    
    Fix newFolderWithPathStartingWithFileSeparatorThrowsIOException Test run on Windows OS

[33mcommit 6838ac0ec19918990d28ea81176cdd065aaf7c34[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Mon Apr 25 13:39:10 2016 +0100

    Refactor BlockJUnit4ClassRunner.possiblyExpectingExceptions
    
    Extract to local variable the result of getExpectedException(), thus saving one extra call.

[33mcommit 113e8b7c6fd3f96ddbd9c759c58a27877f0f854b[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Wed Mar 1 23:40:28 2017 +0100

    Fix javadoc mentioning @Test's "expected" attribute

[33mcommit cebbf5e15725b4dc247ac0557f6fa63f475b15af[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Mon Feb 27 01:14:55 2017 +0100

    ExternalResource: declare after() to throw Throwable (#1421)
    
    This allows clients to call methods that throw checked exceptions without having to catch and wrap checked exceptions.

[33mcommit 6d140c7c0176c683269dc9d897dbdb1a6b4b7554[m
Author: Eitan Adler <grimreaper@users.noreply.github.com>
Date:   Fri Feb 24 22:14:31 2017 -0800

    remove an an extra word

[33mcommit a29f45a3be64caa53feee6f6cc4d70cc43542362[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Tue Feb 14 03:18:08 2017 +0100

    Tests expecting AssumptionViolatedException should be marked as passed, not skipped (#1291)
    
    Tests annotated with `@Test(expected = AssumptionViolatedException.class)`
    which throw AssumptionViolatedException should be marked as passing, not skipped.
    
    Fixes #1290

[33mcommit a58d459d76add6a1621ae7da80c7412134076af2[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Feb 13 18:11:46 2017 -0800

    Classes annotated with @RunWith(Suite.class) do not need to be public. (#1408)
    
    This fixes a regression in JUnit 4.12 introduced by
    https://github.com/junit-team/junit4/commit/1d97da7.

[33mcommit 39b8a92d24e6c81e4fc614cdf13003ce17bbc166[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Jan 22 20:03:11 2017 -0800

    Fix FrameworkMember so fields never shadow other fields.
    
    Previously, if a class had a @Rule field  with the same name as a @Rule field in
    a superclass, the field was ignored. The same would happen for @ClassRule
    fields. With this commit, the static fields on the class are applied as rules.
    
    Closes #1414

[33mcommit 861569f225f5a549728deacfcbb4f68a2608c3d1[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 17 19:14:48 2017 -0800

    Fix FrameworkMember so static methods do not shadow other methods.
    
    Previously, if a class had a @ClassRule method with the same name as a
    @ClassRule method a superclass, the method was ignored. The same would happen
    for @BeforeClass methods and @AfterClass methods. With this commit, the
    static methods on the class are called.

[33mcommit ead2fe7ca97e4b0bc013efe0e734e39a45db213c[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sun Feb 5 16:35:28 2017 -0800

    Trim stack trace. (#1028)
    
    Update TextListener to trim stack traces.
    
    Fixes #669

[33mcommit a03e02a22fe147b5d1a68bca981373cd094e1329[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Jan 23 13:19:23 2017 -0800

    Fix link to up-for-grab issues
    
    We renamed the "lowhanging" tag to "up-for-grabs" (to match the tag in the JUnit5 repository). This change updates the links to use the new tag.

[33mcommit d066f5225f28e90d4bff88f9b7031481be29ec8e[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sun Jan 22 15:04:09 2017 -0800

    Ignore bridge methods when scanning for annotated methods. (#1413)

[33mcommit 709b81e74d3c753009b6967a8636817a8c7bec28[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Thu Jan 19 17:23:15 2017 -0800

    Update CONTRIBUTING.md to link to the coding style

[33mcommit f15ee64ef898f26775b90e4baf19251a76e5b1e0[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Jan 7 00:30:08 2017 -0800

    Fix method names in TemporaryFolderUsageTest.

[33mcommit 326f9bbc8fdc82829faf70d086b06d6cd7203e90[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Jan 7 00:23:41 2017 -0800

    newFolder(String...) now throws IAE on an empty array

[33mcommit 852762b48959776ba0c6da72bac8b403005d6fb4[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Jan 6 09:44:26 2017 -0800

    newFolder(String...) now supports passing in paths with file separators.
    
    The error messages on failures now include the full relative path
    that could not be created.

[33mcommit a5acc2defe0134d179cf15424202b5403eef74d4[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Jan 6 09:40:52 2017 -0800

    Improve error message when TemporaryFolder.newFolder() fails.

[33mcommit aea31f9f1904d7e61ad365d58429647e2625a206[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jan 11 19:55:59 2017 +0100

    Update JUnit 5 teaser

[33mcommit 4d472c8b21a12eba59bf329ec759a7d51ff10c8b[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jan 11 19:53:03 2017 +0100

    Update campaign spending

[33mcommit d112596c41d217ed6136ce694e5b42ce0ba6f6cd[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Jan 9 19:18:30 2017 -0800

    Add public CategoryFilter constructor that was removed in JUnit 4.12 (#1403)
    
    * Add back public CategoryFilter constructor that was removed in JUnit 4.12.
    
    * Remove duplicated code that handles null categories.
    
    * Change CategoryFilter to use LinkedHashSet().
    
    This makes describe() and toString() print the categories in the
    same order that they were provided to the user.

[33mcommit ae28d978b41ed5a5785fde708490b19d76b0c1a5[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Jan 9 19:17:26 2017 -0800

    Update Classes.getClass() to never use the bootstrap class loader. (#1404)
    
    Previously, if there was no context class loader then the
    bootstrap class loader is used. Now, the class loader for
    Classes is used (or for the passed in class, if the new overloaded
    version of getClass() is used).

[33mcommit b19ff583ce5cb5527dab83a1f336c7526463dac4[m
Author: Nicola Ambrosetti Brolin <nicola.ambrosetti@stralfors.se>
Date:   Mon Jan 9 22:27:32 2017 +0100

    Fixed failing tests when running on Windows.
    
    Note that File.separator is not sufficient to build an absolute path on Windows.
    String.format with "%n" produces a platform dependent line separator.
    
    Closes #1409

[33mcommit c85c6147ada5ad1afdd3be10769670d309730132[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Tue Jan 3 15:58:50 2017 -0800

    Fix regression in TemporaryFolder.newFolder(String) for paths with slashes. (#1402)
    
    In JUnit 4.11, newFolder(String) was changed to no longer support paths
    with a file separator. This has been fixed. The overload of newFolder()
    that supports passing in multiple strings still does not allow strings
    containing file separators.

[33mcommit 24dab774e300d4d99388d8ca05ff8913f45df7ab[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Jan 2 11:04:11 2017 -0800

    Use Unix-style line endings. (#1405)

[33mcommit 6f6855610aea886677b465df3420caabf8e56088[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Jan 1 15:02:57 2017 -0800

    Remove unused imports from AllExperimentalTests.java.

[33mcommit 47be7da0cf83b6b32fbde73b654e96d29421d767[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Dec 18 11:47:06 2016 -0800

    Enable TestWatchmanTest

[33mcommit d69cdd80760487df3379f8906ec076a23e1a9f84[m
Author: Hannes Käufler <hanneskaeufler@users.noreply.github.com>
Date:   Sat Dec 10 14:46:35 2016 +0100

    Fix dead link to xUnit frameworks in FAQ (#1399)
    
    The link to the list of xUnit frameworks on xprogramming.com is dead. A more complete and up-to-date list can be found on wikipedia.

[33mcommit 8baae6ecd6e719c8de58bac1a191de2badd78ed3[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Thu Dec 8 10:16:32 2016 -0800

    Do not use @Override when implementing methods from interfaces.
    
    This behavior is only allowed starting with JDK 1.6

[33mcommit edcb82278b060f3e07286dfb98862002ba9efb68[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Oct 11 23:33:49 2016 -0700

    Update MultipleFailureException.assertEmpty() to wrap assumption
    failures if there are multiple exceptions.
    
    This makes failures during the handling of assumption failures easier
    to understand.

[33mcommit ac273c084eb1bdcceb60fc2a75ddb6e7ae060681[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Nov 29 18:26:34 2016 -0800

    Update ErrorCollector.addError() to check for null

[33mcommit 88f63daafb9eec076c09f532c9f0bd823a150be0[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Nov 29 18:20:05 2016 -0800

    Wrap assumption violations in ErrorCollector.addError() and checkSucceeds().
    
    Fixes #1363

[33mcommit 44cd8f80dbac11849a42a5d73fc9b5ddc75cd1b4[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Nov 30 10:38:13 2016 -0800

    Change generics on ExpectedException.expectCause().
    
    The previous generics (Matcher<? extends Throwable>) would not allow
    you do use matchers on Object, like notNullValue().
    
    Fixes #1073

[33mcommit 638e82435a01af83e77c23e9f8d7b658a89eb4bf[m
Author: smallyard <liuhongqiang@live.cn>
Date:   Wed Nov 30 12:56:54 2016 +0800

    Use %n in string.format() (#1346)
    
    In format strings, it is generally preferable better to use %n, which will produce the platform-specific line separator.

[33mcommit 29cb6cb358c37bfe2d7c6d9e720972a5171e6c3f[m
Author: Axel Monroy <xaxelmonroyx@gmail.com>
Date:   Mon Nov 28 23:13:10 2016 -0700

    Change javadoc reference of ThrowingRunnable on ExpectedException (#1392)
    
    Change reference from org.junit.Assert.ThrowingRunnable to org.junit.function.ThrowingRunnable

[33mcommit 4042487e40bb441ad4388373e5c91d727b74e0db[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Nov 27 11:24:22 2016 -0800

    Improve error message if the thrown exception has the same class but the classes are loaded from different class loaders.

[33mcommit b87d766f8cf2769aa25a1192e71c22f4c324cf8a[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Nov 27 11:20:58 2016 -0800

    Use canonical class name for failure message in expectThrows()
    
    Fixes #1388.

[33mcommit a73dc0d5ab3bf12db50c5a4c62a933f2d08d4936[m
Author: Ramon Raya <rraya@nearsoft.com>
Date:   Wed Nov 23 10:25:55 2016 -0700

    Modified the JavaDoc to better suit the returning values of the function Request.filterWith (#1391)

[33mcommit a068272d73585902db8677daf17952a9d48625aa[m
Author: Axel Monroy <xaxelmonroyx@gmail.com>
Date:   Tue Nov 22 08:56:46 2016 -0700

    Improve ListTest sample test (#1389)
    
    * Set private to fEmpty, fFull and remove unnecesary boxing on ListTest
    * Change from protected to private fEmpty and fFull
    * Remove unnecesary boxing on fFull.remove()
    * Remove main method from ListTest, rename fEmpty to emptyList and rename fFull to fullList

[33mcommit 45b990ae0b18496638f1e507ad2b4181a4ac3da1[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Mon Nov 21 11:25:44 2016 -0800

    Add "Limitations" section to CONTRIBUTING.md
    
    Document the kinds of changes we generally have not been accepting.

[33mcommit 25f96a308d34ee0519fa24c957f82346089dd145[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Nov 21 19:40:51 2016 +0100

    Use fully qualified class name for failure message in expectThrows
    
    Fixes #1388.

[33mcommit 1887122f99b3c7bf417ee4172aa662a70d55077b[m
Author: Axel Monroy <xaxelmonroyx@gmail.com>
Date:   Wed Nov 16 11:06:35 2016 -0700

    Remove unnecessary boxing on ListTest (#1385)
    
    Remove unnecessary boxing on ListTest

[33mcommit 394e199f05f4bcce793f814735f20b7f78da568d[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Nov 15 22:25:42 2016 +0100

    Improve test method name.
    
    Replace `assumeNotNullSingleNullThrowsException` by
    `assumeNotNullThrowsExceptionForNullArray` because it is more clear.

[33mcommit 58f1598c371fd3532fbc49cd76492bcaf4fc810a[m
Author: Jerzy Zagorski <jzagorsk@amazon.com>
Date:   Mon Oct 31 16:17:38 2016 +0100

    Throw AssumptionViolatedException when single null is passed to Assume.assumeNotNull(Object... objects) method
    
    Previous implementation threw `NullPointerException` when single `null`
    argument was passed:
    
        java.lang.NullPointerException
          at java.util.Objects.requireNonNull(Objects.java:203)
          at java.util.Arrays$ArrayList.<init>(Arrays.java:3813)
          at java.util.Arrays.asList(Arrays.java:3800)
    
    Fixes #1380

[33mcommit 0138b154869fbb313a9771309713291b813e5458[m
Author: Axel Monroy <xaxelmonroyx@gmail.com>
Date:   Mon Nov 7 11:52:04 2016 -0700

    Remove unnecessary modifiers "public" for TestRunListener interface

[33mcommit 23b0bb0ef9b690660cd3853005f9b635533d3770[m
Author: Peter Wippermann <PeterWippermann@users.noreply.github.com>
Date:   Mon Oct 31 16:39:34 2016 +0100

    Test for #1320 - Description produced by Request.classes() shouldn't be null (#1377)
    
    Fixes #1320

[33mcommit d50032d673544330fcaa68b5476a5dc99df9633d[m
Author: Peter Wippermann <PeterWippermann@users.noreply.github.com>
Date:   Mon Oct 31 16:37:31 2016 +0100

    Test for #1169 - Initializing MultipleFailureException with empty list should fail test (#1376)
    
    Fix for #1169

[33mcommit 140f1cde4a50c21bab7ab012ee14a687699723dc[m
Author: Jin Haifeng <jhfjhfj1@gmail.com>
Date:   Fri Oct 28 15:01:53 2016 -0500

    Fixed some grammatical mistakes in the comments in junit.framework (#1184)
    
    Fixed JavaDoc in junit.framework to use periods

[33mcommit a25189631a9eb551a1ac961ca4d2c2db37a687a0[m
Author: Trejkaz (pen name) <trejkaz@trypticon.org>
Date:   Sat Oct 15 09:19:09 2016 +1100

    Catch SecurityException in addition to IOException. (#1227)
    
    Fixes #1213, not by adding the doPrivileged, but by coping with lack of access to the file by pretending it doesn't exist.

[33mcommit 25495b3e91e346121e3292e8e01a3cc085b644f3[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sat Oct 8 11:13:17 2016 -0700

    Fixes #1189: JUnit4TestAdapter blocks JUnit-3-style suites that are included via @RunWith(Suite.class) (#1344)
    
    * Fixes #1189: JUnit4TestAdapter blocks JUnit-3-style suites that are included via @RunWith(Suite.class)
    
    * Redo fix of 1189 in a way that won't break code that subclasses AllDefaultPossibilitiesBuilder

[33mcommit ee4403455a9573a67668da695fea223f77606326[m
Author: Jimmy Shi <Jimmy-Shi@users.noreply.github.com>
Date:   Mon Oct 3 22:09:20 2016 +0800

    Improve confusing Javadoc about the Rule running order (#1149)

[33mcommit 363755060f75d3d5cce21bd05d49110e02bc1ba2[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Sun Sep 18 19:34:02 2016 +0200

    Fix ResultMatchers#hasFailureContaining (#1292)
    
    ResultMatchers.hasFailureContaining() should not match when the given PrintableResult has no failures.

[33mcommit 93bcc8d5fe351d50cf46f2c58ed8320e47a2b6ee[m
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sun Sep 18 10:30:10 2016 -0700

    Access java.lang.management.* via reflection (#1187)
    
    Several platforms, including Android and j2objc, do not provide the java
    management APIs and crash or otherwise fail when encountering code that
    imports or uses these APIs directly.

[33mcommit 61f8c8373f413f2ee89b3a0e38b7d48dbf712d62[m
Author: Éamonn McManus <emcmanus@google.com>
Date:   Sun Sep 18 10:29:23 2016 -0700

    With ExpectedException, document that there should be no statements after the exceptional one. (#1199)
    
    * Add text to the documentation of ExpectedException that points out that it is a mistake to have statements after the one that is expected to throw the exception. A common bug pattern is to have verification statements after that statement, like Mockito.verifyNoMoreInteractions. These will of course never be executed, but an imperfect understanding of exactly how ExpectedException works leads people not to realize that.
    * In ExpectedException, recommend the use of Assert.assertThrows.
    * In new ExpectedException javadoc text, spell out {@link} tags with complete parameter lists, and remove parentheses around the reference to expectThrows. Also move each <p> to the start of its paragraph text rather than a line on its own.
    * Refine the suggestion to use Assert.assertThrows, saying that it applies starting with Java 8.

[33mcommit 756959c1efa929110fc3bf0da8262fcea580e049[m
Author: Peter Wippermann <PeterWippermann@users.noreply.github.com>
Date:   Sun Sep 18 09:29:23 2016 +0200

    Document encoding, line delimiters, and formatting in style guide
    
    Pull request: #1352

[33mcommit 2b6fa701e84625c511b03079296774cc0904ef1a[m
Author: Vladimir Gordiychuk <folyga@gmail.com>
Date:   Sun Sep 18 01:41:10 2016 +0300

    Bug: ParentRunner lost test Class from a separate class loader (#1252)
    
    * Bug: ParentRunner lost test Class from a separate class loader
    
    When junit.jar located in one ClassLoader but runing tests in another ParentRunner can lost information about run class.
    For example if use @ClassRule and request test class(org.junit.runner.Description#getTestClass) we can get null,
    because ParentRunner instead of set Class as is to Description tranform it to class name string,
    as result org.junit.runner.Description#getTestClass execute Class.forName and can't find test class.
    
    Spring-test fail with exception if we try use SpringClassRule
    
    ```
    java.lang.NullPointerException
     at org.springframework.test.context.junit4.rules.SpringClassRule.validateSpringMethodRuleConfiguration(SpringClassRule.java:186)
     at org.springframework.test.context.junit4.rules.SpringClassRule.apply(SpringClassRule.java:134)
     at org.junit.rules.RunRules.applyAll(RunRules.java:26)
     at org.junit.rules.RunRules.<init>(RunRules.java:15)
     at org.junit.runners.ParentRunner.withClassRules(ParentRunner.java:245)
     at org.junit.runners.ParentRunner.classBlock(ParentRunner.java:194)
     at org.junit.runners.ParentRunner.run(ParentRunner.java:362)
     at org.junit.runner.JUnitCore.run(JUnitCore.java:137)
    ```
    
    As solution, now ParentRunner create Descriptor with explicit specify Class, name and uses annotations.
    
    * Restore backward compatibility with sub class of ParentRunner that override getName method
    * Add ParentRunnerClassLoaderTest to AllClassesTests suite

[33mcommit 35c8fd373965ab1b06d63e5c3bbc5d9f2c356ec4[m
Author: Jacob Heldenbrand <jacobrh91@gmail.com>
Date:   Sat Sep 17 17:31:28 2016 -0500

    Fix StackTrace printing when multiple exceptions occur (#1238) (#1359)

[33mcommit 41d44734f41aba0cf6ba5a11ff5d32ffed155027[m
Author: smallyard <liuhongqiang@live.cn>
Date:   Mon Jul 18 13:59:19 2016 +0800

    Fix inconsistencies with the constructor parameter (#1347)
    
    Fixes #1337.

[33mcommit e6a20043db694056ac00456f6076091012ecba87[m
Author: aishahalim <aishahalim@gmail.com>
Date:   Sun Jul 17 05:31:03 2016 -0700

    ArrayComparisonFailure serialization incompatibility fix (#1315)
    
    * Add back field fCause, initialize and use it in the constructor (via initCause()) to avoid NPE and unused field warnings, respectively.
    * Override getCause() to allow fallback to the deprecated fCause field.
    * Run tests around possible forward incompatibility of the class from r4.11, 4.12.
    
    Fixes #1178.

[33mcommit c07965ab1b232b04a13ea84fdbcdd8be04ea0182[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Tue Jun 28 23:33:59 2016 +0100

    rm unused import
    
    Closes #1335

[33mcommit 85d7d3327a10435291f948121e1a8402b131fbd4[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Sat Jun 25 20:06:25 2016 +0100

    Fix ExternalResource: the test failure was lost..
    
    .. when the test failed *and* closing the resource failed:
    only the exception coming from the after() method was propagated,
    as per semantics of the try-finally
    (see http://docs.oracle.com/javase/specs/jls/se8/html/jls-14.html#jls-14.20.2).
    
    Finally, the new behavior is compatible with @After method semantics
    (see class RunAfters).
    
    Fixes #1334, point 1.

[33mcommit b1d37670892cd885b87a7c62d7c5808517fd20b6[m
Author: smallyard <liuhongqiang@live.cn>
Date:   Sat Jul 16 22:30:58 2016 +0800

    Remove useless variable (#1342)

[33mcommit 7e38e390090ded68a7c08eb639dc33a0838f7278[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Tue Jul 12 16:43:33 2016 +0100

    RuleChain#around should not allow null args (#1313)
    
    By throwing IllegalArgEx from around(), we allow for better feedback to users, as the stacktrace will point to the exact line where the null rule is declared.

[33mcommit 4c0c7876d8b1010e949a885702721e30300eb56e[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Sat Jun 25 16:02:35 2016 +0100

    Fix broken build for jdk5 (#1333)
    
    https://junit.ci.cloudbees.com/job/JUnit/78/console

[33mcommit 4884654903762d0de6889720b0be0162d3a18cbd[m
Author: Nick Harris <harrisnick@live.com>
Date:   Wed Jun 1 17:31:21 2016 +0100

    Improve Javadoc of RuleChain (#1319)
    
    - Remove unnecessary `static` modifier
    - Add missing closing parenthesis of method calls
    - Clarify that RuleChain cannot be used to define the order of
      existing rules
    
    Closes #1319. Fixes #1295.

[33mcommit 0e4cb7ee2ede82f2228c1e100557070a3bb3c9c3[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Thu Jun 23 19:53:43 2016 +0100

    Provide better feedback to the user in case of invalid test classes (#1286)
    
    Only one exception per invalid test class is now fired, rather than one per validation error,
    with all of the validation errors as part of its message.
    
    Example:
    
        org.junit.runners.InvalidTestClassError: Invalid test class 'InvalidTest':
          1. Method staticAfterMethod() should not be static
          2. Method staticBeforeMethod() should not be static
    
    Validation errors for the same test class now count only once in the failure count (Result#getFailureCount).
    
    Implementation:
     - ParentRunner#validate throws InvalidTestClassError in case of validation errors
     - ErrorReportingRunner fires the InvalidTestClassError above without unpacking the causes

[33mcommit 8fb81532f8dcc4a2b8c2f7aaa0e6386cbb1f68f2[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Thu Jun 23 19:48:07 2016 +0100

    Add hamcrest-library as test dependency (#1301)

[33mcommit 72acfaaaf2280ca3992b2c8da061ab53d9403b4b[m
Author: Serge Bishyr <SeriyBg@gmail.com>
Date:   Sat Jun 11 21:00:48 2016 +0300

    Document case when no parameters satisfy all assumptions (#1324)

[33mcommit dc43a04fcac86f1d412b428cce1ad9737d2287d3[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun May 29 10:31:15 2016 -0700

    Update Javadoc for fireTestSuiteStarted(), fireTestSuiteFinished(),
    testSuiteStarted() and testSuiteFinished() to make it clear that
    not all runners call these methods, but runners that call
    the started methods should also call the finished methods.
    
    Closes #1118

[33mcommit f4a13cb4962280cd58a7c4bba7397f55ea829281[m
Author: Dmitry Baev <charlie@yandex-team.ru>
Date:   Wed Apr 8 13:49:15 2015 +0300

    add suite events to listener

[33mcommit 7f2569fb5d16fdc35e632cf41dc10050655295b2[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Tue May 31 14:47:25 2016 +0100

    Refactoring: remove duplication by adding Throwables#getStacktrace (#1312)

[33mcommit b2d7fce66be7904246dc2870a7575340acf3d110[m
Author: Tom Anderson <twic@urchin.earth.li>
Date:   Mon May 16 00:06:52 2016 +0100

    Produce a more legible failure message when multidimensional arrays are of different lengths
    
    Closes #1300

[33mcommit 892f798b459e3ffa1666b6514f1682ba5dde2525[m
Author: Tom Anderson <twic@urchin.earth.li>
Date:   Sun May 15 23:42:19 2016 +0100

    Make testing of array equality more thorough and consistent

[33mcommit a688f6cecfe303b02087747226e5c376aebb0c44[m
Author: Tom Anderson <twic@urchin.earth.li>
Date:   Sun May 15 23:35:58 2016 +0100

    Issue #1127; when arrays differ in length, say so, but go ahead and find the first difference as usual to ease diagnosis

[33mcommit 9b85ea03a352606ae8014acacbb44f4e15637846[m
Author: Carsten Varming <cvarming@twitter.com>
Date:   Sat May 21 18:02:43 2016 -0400

    Prevent following symbolic links when deleting temporary directories.
    
    Closes #1303

[33mcommit 1baceb2a1bbd7c9409d6320924bd6c1b5d0768c7[m
Merge: db8d5800 b8b21a2a
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun May 29 09:24:01 2016 -0700

    Merge branch 'check-throws'

[33mcommit b8b21a2ad3b4a17b1a41478d2227f18be61b28bc[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon May 23 23:05:00 2016 -0700

    Add ErrorCollector.checkThrows()
    
    Closes #1305

[33mcommit db8d58004aebc25a14231468d957b74f8dbecc38[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Fri May 27 14:51:11 2016 +0100

    Refactor RuleChain: remove duplication
    
    The algorithm for running the rules in the chain is the same as the one in RunRules: re-use that!
    
    Closes #1308

[33mcommit 23688534cb86dbc76095a2535b807d902cf77bef[m
Author: Carsten Varming <cvarming@twitter.com>
Date:   Fri May 27 15:02:52 2016 -0400

    Fix regression of the location of temporary directory created by TemporaryFolder rule introduced by #1304
    
    Closes #1310

[33mcommit 316e5b6eed072ceeb479fedfac95e15e93bb92a0[m
Author: peter.wippermann <peter.wippermann@bearingpoint.com>
Date:   Tue May 24 09:00:42 2016 +0200

    Update JavaDoc for safeRunnerForClass to state that null can be returned.
    
    Closes #1306

[33mcommit 392c673b5f35c2c72f74a15b24afff338ba4e3a7[m
Author: peter.wippermann <peter.wippermann@bearingpoint.com>
Date:   Tue May 24 09:01:38 2016 +0200

    Updated URL to Google's code style repository.
    Document indent size.
    
    Updating code style as per https://github.com/junit-team/junit4/pull/1306#issuecomment-221194760

[33mcommit 24b8ee0bec2f2761b479bdd989275f19597955a3[m
Author: Carsten Varming <cvarming@twitter.com>
Date:   Sat May 21 22:43:07 2016 -0400

    Retry TemporaryFolder.newFolder's call to mkdir if the call does not create a new directory.
    
    Closes #1304

[33mcommit 2bf3509dfe58fcf768a5f3b624284df8cdb61e5c[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Sun May 15 22:37:21 2016 +0100

    Improve Maven Surefire config for better test output (#1289)
    
    * upgrade maven-surefire-plugin to the latest
    * force surefire-junit47 as the surefire provider
    * refactor pom: extract the surefire version to property

[33mcommit df016dc056ab15dfa7a6c448ef1905b27eff877f[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Sat May 14 20:37:00 2016 +0100

    Refactor AssumptionTests to use try-catch (#1299)
    
    Use a try/catch block instead of the attribute 'expected' of the @Test annotation.
    See bug #1290.
    See discussion on #1289.

[33mcommit 17a2f11783fa8e731fe49cf638d51c78468c8c25[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Sat May 14 11:47:23 2016 +0100

    Refactor ErrorReportingRunner (#1285)
    
    - remove unused parameter
    - remove explicit array creation
    - use singletonList

[33mcommit c4c8ebd03380350ef4e02a2744ecb5f04f8a30e1[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Fri May 13 04:16:46 2016 +0100

    Add Result#getAssumptionFailureCount
    
    Fix unit test assumeWithExpectedException: it was throwing AssumptionViolatedException thus being skipped (see #98).

[33mcommit 54d6e949e952100a3aea5d2bfb18ef26d39e28e8[m
Author: Arturo Vargas <avargas@nearsoft.com>
Date:   Tue Mar 22 14:12:15 2016 -0700

    Fix typo in assertEmptyThrowsMultipleFailureExceptionForManyThrowables() at MultipleFailureExceptionTest
    
    Closes #1265.

[33mcommit de6077c8f07a44b50ec257d26b1f859f50e16b4e[m
Author: emopers <emopers@gmail.com>
Date:   Wed May 4 00:13:48 2016 -0500

    Closing ObjectOutputStream before calling toByteArray on the underlying ByteArrayOutputStream

[33mcommit 4d0d182424f462cb29b74c99d352d3bf4beb1e05[m
Merge: fd691746 82bea5dc
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Apr 19 09:08:31 2016 +0200

    Merge pull request #1274 from paulduffin/test-cleanup
    
    Test cleanup

[33mcommit fd691746a7d953c8e4a6855161437124071a49fb[m
Author: Pascal Schumacher <pascalschumacher@gmx.net>
Date:   Mon Apr 18 22:45:19 2016 +0200

    Fix dead link to blog post by Joe Walnes about assertThat (#1210)

[33mcommit 3bd79f0cb669617dd883db354c3f05ead0fa3d6f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Apr 18 21:15:59 2016 +0200

    Use new logo and link to new website

[33mcommit 0431f42c2f2502610719e0b45a28fd0dd51b2cb1[m
Author: Alberto Scotto <scotto.alberto.86@gmail.com>
Date:   Mon Apr 18 15:15:43 2016 +0100

    Fix javadoc of ParentRunner#withAfterClasses (#1282)
    
    "before" -> "after"

[33mcommit 82bea5dc259bb769fcd590020fe42733c95e3cfa[m
Author: Paul Duffin <paulduffin@google.com>
Date:   Tue Apr 5 12:44:53 2016 +0100

    Add tests that were not previously being run
    
    The TestWatchmanTest failed because it was using @Rule on a
    static field. Switching to @ClassRule did not work because it
    does not implement TestRule. I fixed the test by making the
    fields non-static however presumably this test did work at some
    point which means that there could have been a regression.
    
    After this change 935 tests passed, 7 were ignored.

[33mcommit 65a98b47a95ff6173c5190d0afff07c7265fe277[m
Author: Paul Duffin <paulduffin@google.com>
Date:   Tue Apr 5 12:44:53 2016 +0100

    Clean up the test hierarchy from org.junit.tests.AllTests
    
    Went through the tests in AllTests and ExperimentalTests and
    split them out into their own test suites that more closely
    matches the package structure.
    
    Moved some tests from
    src/test/java/org/junit/tests/experimental/categories/ to
    src/test/java/org/junit/experimental/categories/ as the category
    test classes were split between them and based on change history
    the latter is where the tests should be.
    
    Did something similar for
    src/test/java/org/junit/tests/experimental/rules except the
    tests were moved to src/test/java/org/junit/rules as they
    were no longer experimental.
    
    Renamed ExperimentalTests to AllExperimentalTests to match the
    pattern used of the other suite classes:
        All<Titled Package>Tests
    
    After this change there were still 911 tests that passed and 7
    that were ignored

[33mcommit d5c0bae31c151d5125e67940aabbb552c9ac0aec[m
Author: Paul Duffin <paulduffin@google.com>
Date:   Tue Apr 5 12:44:53 2016 +0100

    Fix some problems with the tests.
    
    Some tests were being run twice.
    * TheoriesPerformanceTest was in AllTests twice.
    * A number of tests were in both ExperimentalTests and AllTests
     * AllMembersSupplierTest
     * ParameterizedAssertionErrorTest
     * SpecificDataPointsSupplierTest
     * WithAutoGeneratedDataPoints
     * WithDataPointMethod
     * WithNamedDataPoints
    
    * org.junit.samples.MoneyTest was not being run at all, instead
      it was running junit.samples.MoneyTest twice (once via AllTests and
      once via junit.tests.AllTests.
    
    After this change 911 tests pass, 7 are ignored.

[33mcommit 5878c7c952bc996d6e86138bbe5036765ceb4595[m
Merge: 236e75bd b052c712
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Mar 29 21:07:04 2016 +0200

    Merge pull request #1272 from avargas-nearsoft/copyArray
    
    Replace ArrayList for primitive array in copyArray method

[33mcommit b052c7124c9cdc04fdc1800c5d9f9de7cfd8e0ca[m
Author: Arturo Vargas <avargas@nearsoft.com>
Date:   Mon Mar 28 15:33:50 2016 -0700

    Replace ArrayList for primitive array in copyArray method at org.junit.runner.JUnitCommandLineParseResult

[33mcommit 236e75bd968935cf8728c3f7aaaccaefd2f9c737[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Mar 21 20:47:51 2016 +0100

    Adapt links to reflect repo rename

[33mcommit 32d7f24bf40c2cc65eb5af875910caf880db7f29[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Mar 21 20:47:51 2016 +0100

    Adapt links to reflect repo rename

[33mcommit 8962aefcf1d2395dabf0c299efd83aa518a00678[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Mar 21 20:10:27 2016 +0100

    Rename repository to junit4

[33mcommit 1c5a8effed3a5fed402a3e9c9f980842311bcb7b[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Mar 21 20:42:35 2016 +0100

    Explicitly state "JUnit 4" in menus

[33mcommit 19f9ccca69ff44c120961af0cd98630888351ebe[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Mar 21 20:41:16 2016 +0100

    Revert to plain JUnit logo to avoid confusion

[33mcommit c34c97e4da193190a41d942a45e6f9c943135033[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Mar 21 20:10:27 2016 +0100

    Rename repository to junit4

[33mcommit 5345833c6b382646ced3060a8dbc85763e7bc817[m
Author: Johannes Link <business@johanneslink.net>
Date:   Wed Mar 16 10:02:04 2016 +0100

    Changed JUnit Lambda to JUnit 5 and added combined logo

[33mcommit 9e98a85ecf6e857523fcda9150756297a64bccba[m
Merge: 05167f3d 1f75796e
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Mar 15 14:52:23 2016 +0100

    Merge pull request #1259 from rherrmann/patch-1
    
    Fix wrong exception type in JavaDoc

[33mcommit 1f75796e4cd2827070f319d718ec4a8d285a9bdb[m
Author: Rüdiger Herrmann <ruediger.herrmann@gmx.de>
Date:   Tue Mar 15 13:48:44 2016 +0100

    Fix wrong exception type in JavaDoc
    
    See issue #1258

[33mcommit 6fe93c1a2717ce06b252d8a45d7ca020d3dc3fb3[m
Author: Shintaro Katafuchi <hot.chemistry21@gmail.com>
Date:   Sat Mar 12 04:46:19 2016 +0900

    Deleted dead faq link.
    
    Fix #1248.

[33mcommit 05167f3db14dc574070769551b02adec57ed81ec[m
Merge: 06274d1c 6175fa65
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Mar 13 15:32:28 2016 +0100

    Merge pull request #1256 from hotchemi/Fix#1248
    
    Deleted dead faq link.

[33mcommit 06274d1cd3b348e800e0be0abb19a2a01833f0df[m
Merge: 33fa8a84 1db00d5a
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Mar 13 15:31:10 2016 +0100

    Merge pull request #1245 from pablisco/master
    
    Fluent expectations for ExpectedException

[33mcommit 6175fa654c52aa91450414891e65e7150df913e5[m
Author: Shintaro Katafuchi <hot.chemistry21@gmail.com>
Date:   Sat Mar 12 04:46:19 2016 +0900

    Deleted dead faq link.
    
    Fix #1248.

[33mcommit 1db00d5a965951ea3667480a96467b43a80823c1[m
Author: Pablo Gonzalez Alonso <pabs87@gmail.com>
Date:   Fri Feb 19 10:16:47 2016 +0000

    Fluent expectations for ExpectedException

[33mcommit 179b06c923d75f7df4d271cd17994dd268f9a261[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Feb 11 15:10:15 2016 +0100

    Update spending page

[33mcommit 0a3c5b0725909c9a5b9d312adbcfb699eca264dc[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Feb 2 16:39:43 2016 +0100

    Update Twitter handle

[33mcommit 5e5ea216b378da28ab29b8c0c524643a1e70dc8b[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Jan 30 19:57:27 2016 +0100

    Update campaign spending page

[33mcommit b2786a9bcdf12173e639b9a063527ce182e99eb5[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Dec 3 14:06:18 2015 +0100

    Use less cryptic avatar URLs and appropriate size

[33mcommit e8a73c823e14efe536cebd88e97d5d8084c66871[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Dec 2 21:34:45 2015 +0100

    Add avatars and links for team members

[33mcommit e0df1de980436169f9612d61174811edbc3f1a5d[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Dec 1 13:50:31 2015 +0100

    Correct balance

[33mcommit ce82fff2f47b42224223562fe6e42e287e9e5b1a[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Dec 1 10:32:01 2015 +0100

    Added campaign spending page

[33mcommit 06187f3e2740e6e6a207484f1fbd9ede1a2ba4da[m
Author: Johannes Link <business@johanneslink.net>
Date:   Fri Nov 20 14:58:37 2015 +0100

    typos

[33mcommit c2ba99e9d67bc6d4ad2b31f452be664b23d949d2[m
Author: Johannes Link <business@johanneslink.net>
Date:   Fri Nov 20 09:37:09 2015 +0100

    Changed JUnit index page

[33mcommit b581c7635782f53273239842ca2bf61745579c4a[m
Author: Johannes Link <business@johanneslink.net>
Date:   Fri Nov 20 09:27:32 2015 +0100

    Changed JUnit Lambda part of the website to reflect current situation

[33mcommit 4f2ed5d7a7bbe77f6c917c6ccc7de303896d1beb[m
Author: Johannes Link <business@johanneslink.net>
Date:   Fri Nov 20 08:21:02 2015 +0100

    Added name to contributors list

[33mcommit 0e242d7005927c9a7285c9ffe017997d5deed018[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Oct 22 18:02:00 2015 +0200

    Added name

[33mcommit d57c44614e0597e8cefeadeda60d32a77f634a23[m
Author: Johannes Link <business@johanneslink.net>
Date:   Mon Oct 19 20:59:09 2015 +0200

    Removed name in brackets

[33mcommit 55210021e442d25a319fb389bedc2a0c6ee6fa98[m
Author: Johannes Link <business@johanneslink.net>
Date:   Mon Oct 19 20:42:37 2015 +0200

    Added name to list

[33mcommit d6279729fcf9d19716723f52c8d2484d451b2fb8[m
Author: Johannes Link <business@johanneslink.net>
Date:   Mon Oct 19 20:39:23 2015 +0200

    Added name to list

[33mcommit c55a66413b6f164b694e2409ab97927d89b509f4[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Oct 13 12:30:51 2015 +0200

    David Tanzer verlinkt

[33mcommit 24661e0729d2112c03b887eac7131e49334dd671[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Oct 7 19:32:42 2015 +0200

    Remove last placeholder

[33mcommit 8e05e94956c1820e7a72d55795c5198835afca0e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Oct 7 19:32:12 2015 +0200

    Add siili

[33mcommit d7e47e370e8db4d2a34dea3b75600a5c24fab942[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Oct 5 19:51:20 2015 +0200

    Just "TOPdesk" as requested

[33mcommit 383f1807be6a9b7e2ede634fe0907f8844169881[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Oct 5 09:24:55 2015 +0200

    Add Yamamoto Masaki

[33mcommit a7dcfb47ba61634acae5467b4e9559497bc43496[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Oct 5 09:24:38 2015 +0200

    Add klose brothers

[33mcommit c650a0fa1aaed24a4446e6a284de9c2c84274a96[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 3 15:27:24 2015 +0200

    Add more names

[33mcommit 91c9ee567c1daae09eee84e35429598217d0701d[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 3 15:27:15 2015 +0200

    Add two small logos

[33mcommit 928fc1af5927b17173c5f89f7c6b8d7ec0982f94[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Oct 3 15:26:39 2015 +0200

    Add Klarna

[33mcommit 33fa8a845223e7bae46609cacce8e5d65d29de4c[m
Merge: 5ae6473d 04c3f995
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Oct 2 13:50:12 2015 +0200

    Merge pull request #1206 from Xaerxess/doc-fixes
    
    Fix typo and formatting in JavaDoc

[33mcommit 04c3f9955266bbb47542a17c486354b80cfe77e6[m
Author: Grzegorz Rożniecki <xaerxess@gmail.com>
Date:   Fri Oct 2 13:15:05 2015 +0200

    Fix typo and formatting in JavaDoc

[33mcommit fb69e99301d33a452d06df47c3e9e43efe808c0f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Sep 30 22:15:30 2015 +0200

    Add more names

[33mcommit e73b2b3bac527775baa7ca7ff3d1fffe97381de5[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Sep 30 22:15:18 2015 +0200

    Add synyx

[33mcommit 9e91ecc769a17f2a9674896f2aab236aa8ad0715[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 29 20:20:01 2015 +0200

    Add Steven Christou

[33mcommit c62e0a34a16449a0321c16fbe91d43ad5302c936[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 29 20:19:46 2015 +0200

    Add NovaTec logo

[33mcommit d1c68a97108b5e46a9db3a57c97812e69cb2a8b9[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Sep 28 20:54:58 2015 +0200

    Add Eclipse Foundation

[33mcommit 9bad8ce0a56d056ec3b7166351b7405c8be7e834[m
Author: Allon Mureinik <mureinik@gmail.com>
Date:   Mon Sep 28 00:05:24 2015 +0300

    License link on junit.org
    
    Added prominent link to the project's license.
    
    This patch fixes #1162.
    
    Signed-off-by: Allon Mureinik <mureinik@gmail.com>

[33mcommit 5ae6473db8a9c61ccf4e53a3c529b03699ef816c[m
Author: Allon Mureinik <mureinik@gmail.com>
Date:   Mon Sep 28 00:05:24 2015 +0300

    License link on junit.org
    
    Added prominent link to the project's license.
    
    This patch fixes #1162.
    
    Signed-off-by: Allon Mureinik <mureinik@gmail.com>

[33mcommit 252e19cf05863443bc519186fc7fb237f1d81817[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Sep 28 19:53:56 2015 +0200

    Add more names

[33mcommit c88cd1f76ceb98f5841e4c09c8dc6fccb0aa8709[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 24 08:51:54 2015 +0200

    Fixed lost names. Part 3

[33mcommit b6ee6c138832b4eae4ca4fd58a4d1a67d6ee4431[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 24 08:47:53 2015 +0200

    Fixed lost names. Part 2

[33mcommit 59baeed4cb3d24211960ad01fd3ee9e534b0e1da[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 24 08:43:32 2015 +0200

    Fixed lost names

[33mcommit 23871dbaba72278f6ae50f1e34cc40544ca247c9[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 24 08:30:46 2015 +0200

    Added name to contributors list

[33mcommit 77f2c51273416e137402f6736be000745f7d299f[m
Author: Johannes Link <business@johanneslink.net>
Date:   Wed Sep 23 08:30:11 2015 +0200

    Added link and name

[33mcommit 47f596c7dab54e30ded6cc01e859a813dc546c2d[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 22 20:37:36 2015 +0200

    Add more names

[33mcommit efbd2e8070edfc9886e8f76b73e5bbe800ddc18c[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 22 20:37:14 2015 +0200

    Fix typo in name

[33mcommit 94dcf2dea41bc09a9c1e0e0fe29d7320b386c0b5[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 22 20:36:48 2015 +0200

    Add missing placeholder

[33mcommit cf9aa29323020439a3f8895ec7dc13e8e3219324[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 22 11:23:11 2015 +0200

    Added a few names

[33mcommit 4cf6fb06592928f867de0a91e9b4b57297e35b36[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 22 11:15:11 2015 +0200

    Added Structure 101 logo and link

[33mcommit fc16d540ae5401f852585346dc74ae1c8dd70605[m
Author: Johannes Link <business@johanneslink.net>
Date:   Sat Sep 19 19:37:59 2015 +0200

    Added a couple of names to contributors list

[33mcommit 6ffe62ea11f8b4e710391ad3a831229954fc7401[m
Author: Johannes Link <business@johanneslink.net>
Date:   Sat Sep 19 12:23:58 2015 +0200

    Added a couple of names

[33mcommit f537ba39d7e3952a74c9582e70c12bb836fef7cb[m
Author: Johannes Link <business@johanneslink.net>
Date:   Fri Sep 18 09:03:03 2015 +0200

    Added a few names to contributors list

[33mcommit 625c5458b8df2d8b0be00c0eae1a790dfa07b3b5[m
Author: Johannes Link <business@johanneslink.net>
Date:   Fri Sep 18 08:32:16 2015 +0200

    Added Gradle logo

[33mcommit 2e2b962ca1aa3dcaaa4f08123d96e60918761889[m
Author: Johannes Link <business@johanneslink.net>
Date:   Fri Sep 18 08:26:37 2015 +0200

    Added Red ES logo

[33mcommit 01831e8f96e42c72e5abe5838e13554e9d48f3ee[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 17 15:29:50 2015 +0200

    Added arcbees logo

[33mcommit 581a3717a2654e9011ca7bb8c6ff4abca00f95c4[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 17 12:47:36 2015 +0200

    Two new names and a link

[33mcommit cbea22cfd38b3d2bc8c40d4ee28d4c4df1005c53[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 17 11:34:12 2015 +0200

    ADded one small logo and a name

[33mcommit 57952f879be14d0735ed43dab164839f4de57b55[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 17 09:58:51 2015 +0200

    Added two large logos

[33mcommit 30c64f443d7feae46c163e743b3f879d5e9a8fd0[m
Merge: e65310f8 32f3458f
Author: Johannes Link <jl@johanneslink.net>
Date:   Thu Sep 17 09:39:15 2015 +0200

    Merge pull request #1200 from yusuke/junit-lambda-website
    
    Add Samuraism Inc.

[33mcommit 32f3458f1a7a618e28b1f32c77c1b3cd08c910bf[m
Author: Yusuke Yamamoto <yusuke@mac.com>
Date:   Thu Sep 17 11:55:08 2015 +0900

    Add Samuraism Inc.

[33mcommit e65310f8b21474a8111a9c7311436e700804ca3f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 8 22:15:04 2015 +0200

    Add Pivotal as main sponsor and contributor

[33mcommit a2ea00d745f2770ff3b443f77ef72572d37209df[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Sep 14 19:28:15 2015 +0200

    Add more contributors

[33mcommit c7313b19a24165f4e6b39c3eb2c8165a02f1e108[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Sep 11 09:17:14 2015 +0200

    List more contributor names

[33mcommit 1079730d32227eaed5c69a908770572285ad6301[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Sep 11 09:16:59 2015 +0200

    Add 42talents GmbH

[33mcommit d5428f3f195f3c89a3b548c7ed041346b4311084[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Sep 10 20:50:30 2015 +0200

    Add Zenika and Six

[33mcommit 277ccefbc64b7f39272204b68106e7e394975d78[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Sep 10 09:32:48 2015 +0200

    Slightly size down andrena logo

[33mcommit 2a5558e7ee31d7ec31959fa313373ab0c71d9215[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Sep 10 08:57:44 2015 +0200

    Add Murex

[33mcommit 60fac448f24f479b1536bb515c527ae8a24d161c[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 8 22:14:16 2015 +0200

    Enlarge main sponsors

[33mcommit baf48c1acf9d5412bebc3da46e7907393b6ac328[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 8 20:27:32 2015 +0200

    Enlarge American Express logo

[33mcommit 588d82a7146a2076cc71d19d272c4070084bc03e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 8 20:25:52 2015 +0200

    Add IntelliJ and bol.com

[33mcommit b978f680cfa3eb9b526cc8bd25c68a3eb6db3c45[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Sep 7 22:05:26 2015 +0200

    Fix indentation

[33mcommit d3a0ce2003c2ff70558a99c795359e4be882b7fe[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Sep 7 22:05:01 2015 +0200

    Large logo for sipgate

[33mcommit bff043beba464d58b8497c98e62df54beb39b0f4[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Sep 6 16:43:59 2015 +0200

    Add more contributors listed by name

[33mcommit 75225f76d430e45adcf36cef8d6fdbeb7629de57[m
Author: Johannes Link <business@johanneslink.net>
Date:   Sat Sep 5 17:47:59 2015 +0200

    Added 3 names and a link

[33mcommit 388ae4ceb0c3f34b2ab339afafb22e6a6a032194[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 3 17:16:09 2015 +0200

    Added a name to list

[33mcommit 6f10321bfd1f183d42c19292a25520bed4545e38[m
Author: Johannes Link <business@johanneslink.net>
Date:   Thu Sep 3 12:15:15 2015 +0200

    Added two names to list

[33mcommit ce7ce514aa79a7a3be067552359722626937fe8f[m
Author: Johannes Link <business@johanneslink.net>
Date:   Wed Sep 2 18:13:45 2015 +0200

    Added AdNovum large logo

[33mcommit bc9618af9e995faaf74381abe417f080df47399c[m
Author: Johannes Link <business@johanneslink.net>
Date:   Wed Sep 2 07:49:25 2015 +0200

    Added name to contributors list

[33mcommit e9e9da84e9b50e233eac79c3879e2e0862778eeb[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 1 14:23:00 2015 +0200

    Added one link

[33mcommit 38beb569a0bb1531609cd7ffcf119e39a322857d[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 1 14:13:20 2015 +0200

    Added one more name to contributors list

[33mcommit 44a09e71c211d961c9a1b31c22f0f890d0e8d418[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 1 13:03:02 2015 +0200

    Added one more name to contributors list

[33mcommit f8f1c548788347e610bb87cfe474de08a3edf585[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 1 12:59:29 2015 +0200

    Added one more name to contributors list

[33mcommit 6e5d8fd17c63f322b1606ed456877c228d0565c4[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 1 10:39:57 2015 +0200

    Added name to contributors list

[33mcommit 94f6b6775780c6f58738ae768bae038683565b2c[m
Author: Johannes Link <business@johanneslink.net>
Date:   Tue Sep 1 10:15:27 2015 +0200

    Added lots of names and links

[33mcommit fd2c4fbbf74f01eecef1680fa1365052d0302d19[m
Author: Johannes Link <business@johanneslink.net>
Date:   Mon Aug 31 15:54:57 2015 +0200

    Added some names to list of contributors

[33mcommit cab111add67ec6ba33f93f8611a73b565fb2786c[m
Author: Johannes Link <business@johanneslink.net>
Date:   Mon Aug 31 15:19:52 2015 +0200

    Added logo and contributor by name

[33mcommit d96d9db1208f45748623799b1756291488c55e8a[m
Author: Johannes Link <business@johanneslink.net>
Date:   Mon Aug 31 14:55:08 2015 +0200

    Added 3 logos and a link to campaign contributors page

[33mcommit 7a565edd49073c2ac6a555a35d2a5981189545fd[m
Merge: e331eb94 73f5e4d0
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Aug 28 12:52:36 2015 +0200

    Merge pull request #1196 from matthiashd/junit-lambda-website
    
    included amex logo as new main sponsor

[33mcommit 73f5e4d0f33b59f2b37abb90a8ff083c13bb6fb0[m
Author: Matthias Merdes <Matthias.Merdes@heidelberg-mobil.com>
Date:   Fri Aug 28 11:49:06 2015 +0200

    included amex logo as new main sponsor
    
    included logo image file, created suitable css class, adapted wording a bit

[33mcommit e331eb94e43dae8201d8f44bec834a3f89db29db[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Aug 16 20:31:40 2015 +0200

    Link for Oliver Paulus

[33mcommit bd8a3f3bd0cf9e34174a9e48a5ae57569180ab0e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Aug 15 17:43:44 2015 +0200

    More contributor names

[33mcommit bd30934c2e63614b957f16258a7771619e3e5c8d[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 12 08:45:07 2015 +0200

    Larger Namics Logo

[33mcommit 32f3c6292808f793a50821dac3fec3bad3b661c9[m
Author: gk2go <gk@gk2go.com>
Date:   Sat Aug 8 10:50:36 2015 +0300

    Replaced <br> with </p><p> in faq.html
    
    @dsaff @kcooney, I have replaced the <br> tag with the <p> tags. It should be fine now.
    Thank you @kcooney for spotting the issue :)

[33mcommit 3489500ca2f4b05bc91e5137a2b3faff273998f2[m
Author: gk2go <gk@gk2go.com>
Date:   Fri Aug 7 20:23:19 2015 +0300

    Updated answer to question in faq.html
    
    Updated answer as discussed on JUnit's Yahoo! Group:
    
    If you are using JDK 1.3 or higher, you can use reflection to subvert the access control mechanism with the aid of the <a href="http://sourceforge.net/projects/privaccessor/">PrivilegedAccessor</a>. For details on how to use it, read <a href="http://www.onjava.com/pub/a/onjava/2003/11/12/reflection.html">this article</a>.
    If you are using JDK 1.6 or higher and you annotate your tests with @Test, you can use <a href="http://dp4j.com">Dp4j</a> to inject reflection in your
    test methods. For details on how to use it, see <a href="http://dp4j.com/testscript">this test script</a>.

[33mcommit 9ea4f8cc6a1cfcf56689be4bd6ece908b87f9c6a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Aug 14 09:13:45 2015 +0200

    Add contributor DiffPlug

[33mcommit be6026923f1c20d1e3e9c27caa049c5f3950d3f7[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 12 07:39:27 2015 +0200

    Ergon logo with claim

[33mcommit 97304493c95f97c111dbb957f81868e7015c79da[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 12 07:36:52 2015 +0200

    Ergon and Netcetera

[33mcommit 3e43555e1f4df95b0a239f453af6d3226a8fef6e[m
Merge: 1d63100e 3c3aa7c7
Author: David Saff <saff+aa@google.com>
Date:   Mon Aug 10 11:04:38 2015 -0400

    Merge pull request #1188 from gk2go/patch-2
    
    Updated answer to question in faq.html

[33mcommit 3c3aa7c72cae8d5abab8f4a1facea2ea2aa6bb8c[m
Author: gk2go <gk@gk2go.com>
Date:   Sat Aug 8 10:50:36 2015 +0300

    Replaced <br> with </p><p> in faq.html
    
    @dsaff @kcooney, I have replaced the <br> tag with the <p> tags. It should be fine now.
    Thank you @kcooney for spotting the issue :)

[33mcommit 8d9e2051c21ab4f5c50a1b77d9711a72a55f7896[m
Author: gk2go <gk@gk2go.com>
Date:   Fri Aug 7 20:23:19 2015 +0300

    Updated answer to question in faq.html
    
    Updated answer as discussed on JUnit's Yahoo! Group:
    
    If you are using JDK 1.3 or higher, you can use reflection to subvert the access control mechanism with the aid of the <a href="http://sourceforge.net/projects/privaccessor/">PrivilegedAccessor</a>. For details on how to use it, read <a href="http://www.onjava.com/pub/a/onjava/2003/11/12/reflection.html">this article</a>.
    If you are using JDK 1.6 or higher and you annotate your tests with @Test, you can use <a href="http://dp4j.com">Dp4j</a> to inject reflection in your
    test methods. For details on how to use it, see <a href="http://dp4j.com/testscript">this test script</a>.

[33mcommit d40d65bc32cd87f958e49625fb6ae1b9f0d084c4[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Aug 6 22:15:59 2015 +0200

    Update contributors

[33mcommit 9371b5f5eb348717632d4d78e8a303d5f7302372[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 5 22:54:48 2015 +0200

    Enlarge main sponsors

[33mcommit 33d9df3d58c02d5a3aae45c8eb3e7982f6884df2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 5 22:40:37 2015 +0200

    Update Contributors

[33mcommit fbbbcec0da67835b00421f9f1012412e4b31d3ec[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 5 09:27:40 2015 +0200

    Campaign Contributors page

[33mcommit d573af741a7077d0db032bdb7f331fd4f40439b2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Aug 2 14:02:03 2015 +0200

    Campaign Launch preparations

[33mcommit ff922af0b64c704b9dad697f36c17a6bee34a758[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 30 20:36:29 2015 +0200

    Add sponsor Namics

[33mcommit 83e72f27172d3ffd670d7ba5dff970a750077704[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Jul 27 14:05:46 2015 +0200

    Add sponsor Heidelberg Mobil

[33mcommit 52c36eac22b5f156944bbb6882c7c354cb00703d[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 26 20:15:26 2015 +0200

    Crowdfunding will start on August 3, 2015

[33mcommit c52818e7e2195c1a5351dec6cbad682c9a9276d5[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 26 12:49:17 2015 +0200

    Add page header and hash tag

[33mcommit 860c1142f76276b348aa4fb5fb5248c5cad6894b[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Mar 12 22:36:13 2015 +0100

    Promote JUnit Lambda campaign on JUnit website

[33mcommit 1d63100e6d69f448a3afb4571e9915cb9439fe1d[m
Author: Chris Barrow <chris.barrow@kaazing.com>
Date:   Wed Jul 8 14:00:33 2015 -0700

    Minor fix to javadoc of RuleChain.around.

[33mcommit 3289d9422b535666786aa3201ea0f31ad5e1f7e3[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue May 26 21:07:51 2015 -0700

    Deprecate APIs that use Hamcrest classes.
    
    Users should use the java-hamcrest library instead.
    
    Closes #1150.

[33mcommit bdb1799a6b58c4ab40c418111333f4e8e1816e7e[m
Author: Ryan Schmitt <rschmitt@pobox.com>
Date:   Wed Jun 3 18:43:01 2015 -0700

    Add Assert#expectThrows and Assert#assertThrows
    
    Closes #1154.

[33mcommit bcbf43dcaa5efee1418685a9a523dc11dedc77c7[m
Merge: fe175370 45f22658
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 2 22:56:09 2015 +0200

    Merge pull request #1174 from cnauroth/timeout-javadoc-sample-fix-deprecation
    
    Avoid calling a deprecated constructor in the JavaDoc sample for the …

[33mcommit 45f22658aca9059a1a3c1dbf0d07ca91118e5f1b[m
Author: cnauroth <cnauroth@apache.org>
Date:   Thu Jul 2 13:48:33 2015 -0700

    Avoid calling a deprecated constructor in the JavaDoc sample for the Timeout rule.

[33mcommit fe1753703f4f20718b3479dd71e01e9e4d96cf1f[m
Merge: 00911b15 b8057bc3
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jul 1 23:09:31 2015 +0200

    Merge pull request #1172 from avandeursen/replacer
    
    Let maven replacer plugin use sourceDirectory property.

[33mcommit b8057bc33957a83086019fb5edca386add6d0b6c[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Wed Jul 1 21:44:01 2015 +0200

    Let replacer plugin use build.sourceDirectory property.
    
    The old maven replacer plugin was configured with a relative
    link to the source path.
    
    This caused "mvn -f path/pom.xml" to fail.
    
    The modified pom file used the project.build.sourceDirectory
    property, which solves this problem.

[33mcommit 00911b15329a3d329f1b241a45ca49d2cbbe8504[m
Merge: f53a3ada e848a973
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Jun 26 21:15:59 2015 +0200

    Merge pull request #1168 from jhfjhfj1/doc-revise
    
    Fixed a typo in step 7 in the quick guide.

[33mcommit e848a97320851c8614cf9712fa5e2b5092d82925[m
Author: Jin Haifeng <jhfjhfj1@gmail.com>
Date:   Sat Jun 27 01:53:16 2015 +0800

    Added some helpful links.
    
    Changed the format of the link of "Fork the repo".
    Added the links for "Create a new branch" and "submit a pull request", which are useful for first time contributors who need this quick guide.

[33mcommit e5c943ada7ad1b3b79570ff10b11d396927a337d[m
Author: Jin Haifeng <jhfjhfj1@gmail.com>
Date:   Sat Jun 27 01:39:29 2015 +0800

    Fixed a typo in step 7 in the quick guide.
    
    The number should be 7 instead of 6

[33mcommit f53a3ada07fb07ece60eb20f571b6db2727d73b2[m
Merge: 989be00b 9b926838
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jun 14 15:02:20 2015 +0200

    Merge pull request #1164 from hansjoachim/plugins
    
    Upgrade plugins to latest version

[33mcommit 9b926838cecedd7933681cb176e59f059ae1f0ad[m
Author: Hans Joachim Desserud <github@desserud.org>
Date:   Wed Jun 10 20:40:13 2015 +0200

    Add explicit version numbers for additional plugins. Without explicit version numbers they would use the default set in Maven, which might vary depending on the release

[33mcommit 40226c72383c689c02a5cd05271428e948365a01[m
Author: Hans Joachim Desserud <github@desserud.org>
Date:   Wed Jun 10 20:33:31 2015 +0200

    Upgrade plugins to latest version.
    
    maven-compiler-plugin .................................... 3.2 -> 3.3
    maven-enforcer-plugin .................................. 1.3.1 -> 1.4
    maven-gpg-plugin ......................................... 1.5 -> 1.6
    maven-jar-plugin ......................................... 2.5 -> 2.6
    maven-javadoc-plugin ............................... 2.10.1 -> 2.10.3
    maven-project-info-reports-plugin ........................ 2.7 -> 2.8
    maven-release-plugin ................................. 2.5.1 -> 2.5.2
    org.codehaus.mojo:animal-sniffer-maven-plugin .......... 1.13 -> 1.14

[33mcommit 989be00be3baecb3e47bc95ba981d642bb9eca81[m
Author: Ryan Schmitt <rschmitt@pobox.com>
Date:   Thu Jun 4 10:16:02 2015 -0700

    Remove dead code in TestRuleTest.
    
    Closes #1156

[33mcommit eedd1f68fbd014beca60c979e8173c271ea5cf2d[m
Author: Ryan Schmitt <rschmitt@pobox.com>
Date:   Thu Jun 4 10:21:13 2015 -0700

    Upate TestName to make the 'name' field volatile.
    
    This ensures that the name is published across threads correctly--for
    instance, if a parallelized runner is used.
    
    Closes #1157

[33mcommit 99da5691c6cf70af52c4793ffab717a9f3085753[m
Author: Shadowfacts <me@shadowfacts.net>
Date:   Sun May 31 13:34:37 2015 -0400

    Make exception message more descriptive when methods do not have a void return value.
    
    Closes #1152

[33mcommit 04353c59ed3ce7c795ee312fa8bf4d3f02d721a7[m
Merge: 28a3a3b1 1ce094e7
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jun 4 21:44:41 2015 +0200

    Merge pull request #1155 from izeye/patch-1
    
    Fix Javadoc in Theories

[33mcommit 1ce094e73a673fefb7ef69c8734f19a51293b47d[m
Author: izeye <izeye@naver.com>
Date:   Fri Jun 5 01:12:52 2015 +0900

    Fix Javadoc in Theories

[33mcommit 28a3a3b1bd84e4b438bea6fccc913f419003f879[m
Merge: f56556f1 37a8aaba
Author: David Saff <saff+aa@google.com>
Date:   Thu Jun 4 11:19:05 2015 -0400

    Merge pull request #1124 from stefanbirkner/parameterized-categories
    
    Provide all annotations except RunWith. Fixes #751

[33mcommit f56556f1f6fa3390efd7dcbc22123321c9a596ff[m
Merge: 4bef795f 82118e72
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Jun 1 16:21:48 2015 +0200

    Merge pull request #1141 from baev/sonar-fixes
    
    Some sonar fixes

[33mcommit 82118e728701b7b0f81a2dd4a69b2290de056b28[m
Author: Dmitry Baev <charlie@yandex-team.ru>
Date:   Tue May 12 18:39:55 2015 +0300

    some sonar fixes

[33mcommit 4bef795fa872ae326bb3fd2ef0032f708d861082[m
Merge: 03eff4b9 b3f336f3
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed May 20 23:21:04 2015 +0200

    Merge pull request #1136 from marcphilipp/epl-in-contributing-doc
    
    EPL agreement will be shown for new pull requests

[33mcommit 03eff4b98a38d617a3d0cbc047221d7d337eeb86[m
Author: EarthCitizen <EarthCitizen@users.noreply.github.com>
Date:   Wed May 13 15:23:48 2015 -0700

    JavaDoc Clean-up Rules Implement TestRule
    
    This cleans up the JavaDoc, removing links to classes which no longer
    implement this interface.

[33mcommit b3f336f375f1c49f63d9058897d92edcc0ebb8a5[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri May 1 18:07:45 2015 +0200

    EPL agreement will be shown for new pull requests
    
    The Eclipse Foundation requires that all contributors agree to these
    terms so that Eclipse can continue to ship with Eclipse.

[33mcommit 387e8518435df62b557a59001b18109af88fb0dc[m
Merge: 9f87b781 10f8f5ad
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Apr 21 04:24:10 2015 +0200

    Merge pull request #1128 from Jonatino/patch-1
    
    Update Test.java

[33mcommit 10f8f5ada174ee2b3480485980865b26db4bcdbc[m
Author: Jonathan Beaudoin <jonathanbeaudoin1996@hotmail.com>
Date:   Sun Apr 19 17:53:49 2015 -0400

    Update Test.java
    
    Fixed a grammatically incorrect comment.

[33mcommit 9f87b7819a63b53aae70e79fb72cc00e1837a3b6[m
Author: Dmitry Baev <charlie@yandex-team.ru>
Date:   Wed Apr 8 16:04:14 2015 +0300

    remove redundant interface modifiers

[33mcommit 37a8aaba8a817b4bebbeebcd645d304601a0c8f0[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jul 29 22:18:47 2014 +0200

    Provide all annotations except RunWith. Fixes #751
    
    Couldn't see any reason why we should remove annotations like
    `@Category` from the child runners of parameterized tests. Now the
    `Categories` runner can handle parameterized tests.

[33mcommit 2adef6f30c64c5e5e14e9261637d113f7adda884[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Apr 8 01:33:35 2015 +0200

    Make injection type explicit.
    
    Makes it easier to understand the code.

[33mcommit 414e31f00b97bdd1242063495b5db7ff0c22ee5a[m
Merge: 3a5772da 97654ff3
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Apr 13 18:17:30 2015 +0200

    Merge pull request #1114 from stefanbirkner/parameterized-example
    
    Use simpler example for Parameterized runner.

[33mcommit 97654ff38f976733fa4c6ae9b28e3fe10328183f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Mar 6 01:11:36 2015 +0100

    Replace example with addition example. Fixes #1088.
    
    The new example does not depend on external classes anymore. Hence it
    is self-contained and can be run by simply copying it.

[33mcommit 61994e0c0aa768b43fad1ac6e35b1e43ffc8b142[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Mar 6 01:05:18 2015 +0100

    Remove some tests.
    
    We don't have to test the test and failure naming for tests with
    @Parameter annotation again, because it is not different from the test
    that sets the parameters via constructor.

[33mcommit b403288c9bf67e4989b7f3af5b8360828dcb8e94[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Mar 6 00:54:13 2015 +0100

    Separate tests for failure and run count.
    
    A test should only test a single thing.

[33mcommit 3a5772dab5ce8f3b2879a19009357d425e84400e[m
Author: Tibor17 <tibor17@lycos.com>
Date:   Sat Apr 4 20:30:47 2015 +0200

    StopWatch does not need to be abstract.
    
    Fixes #1110.

[33mcommit ad9972ba5d135d1c5673f0773cb7027f7823feb5[m
Author: Hans Joachim Desserud <github@desserud.org>
Date:   Tue Mar 10 20:37:47 2015 +0100

    Prefer interfaces over concrete classes
    
    Makes code easier to scan by removing unnecessary noise.

[33mcommit 5dd69355f371be15aee03875752f95e2b20e02c9[m
Author: Hans Joachim Desserud <github@desserud.org>
Date:   Tue Mar 10 20:16:54 2015 +0100

    Unnecessary semicolon

[33mcommit a4699a1f3363728218cf0a269f78b4ced25dea38[m
Author: Hans Joachim Desserud <github@desserud.org>
Date:   Tue Mar 10 20:14:11 2015 +0100

    Move the array designator to the type

[33mcommit 47707e8d86ad0927f6c67472615646949d313ab3[m
Merge: 9c337dcb 187c5648
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Mar 2 09:25:47 2015 +0100

    Merge pull request #1087 from mustafau/patch-1
    
    Use Timeout.millis(long) in javadoc for Timeout class

[33mcommit 187c56489189d2a6e928fea3d0942e1a5346c517[m
Author: Mustafa Ulu <mustafau@sabanciuniv.edu>
Date:   Sun Mar 1 20:36:02 2015 +0200

    Use Timeout.millis(long) in javadoc for Timeout class
    
    Javadoc for Timeout class should use Timeout.millis(long) instead of deprecated Timeout(int) constructor

[33mcommit 9c337dcbb8c71cfcbd283a4f481c2794c13465a6[m
Author: Adrian Cole <adrian.f.cole@gmail.com>
Date:   Sat Feb 28 07:52:17 2015 -0800

    Corrects typo in source example of ParametersRunnerFactory.
    
    Closes #1085

[33mcommit dc90577ab174c020db4380a54e48276d69b3fc8c[m
Author: The Alchemist <kap4020@gmail.com>
Date:   Thu Feb 26 13:48:22 2015 -0500

    Adding generics to uses of ArrayList on homepage example code.
    
    Closes #1084

[33mcommit 38010188e5c5e34da29d063e6c002a173f56a539[m
Author: Hans Joachim Desserud <github@desserud.org>
Date:   Sat Feb 28 15:22:57 2015 +0100

    Changed line endings to LF
    
    SonarQube had problems scanning this file because it believed it got
    multiple blame annotations for the same line.
    This seemed to be the only file with CR line endings, so I changed it
    to LF which is consistent with the files in the same directory.
    
    Closes #1086

[33mcommit a90b496a6595856066504baf4f737fb853a6e45d[m
Author: Sam Brannen <sam@sambrannen.com>
Date:   Sun Feb 15 21:53:52 2015 +0100

    Ensure exceptions from methodBlock() don't result in unrooted tests.
    
    The introduction of the runLeaf() method in BlockJUnit4ClassRunner in
    JUnit 4.9 introduced a regression with regard to exception handling.
    
    Specifically, the invocation of methodBlock() is no longer executed
    within a try-catch block as was the case in previous versions of JUnit.
    
    Custom modifications to methodBlock() or the methods it invokes may in
    fact throw exceptions. In such cases, exceptions thrown from
    methodBlock() cause the current test execution to abort immediately. As
    a result, the failing test method is unrooted in test reports, and
    subsequent test methods are never invoked. Furthermore, RunListeners
    registered with JUnit are not notified.
    
    This commit addresses this issue by wrapping the invocation of
    methodBlock() within a try-catch block. If an exception is not thrown,
    the resulting Statement is passed to runLeaf(). If an exception is
    thrown, it is wrapped in a Fail statement which is passed to runLeaf().
    
    Closes #1066
    Closes #1082

[33mcommit 0f0152a8cd6dcbdb9f9cbb6ec5ca1cf2629dc12a[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Jan 4 12:45:12 2015 -0800

    Add missing @since Javadoc to createTest(FrameworkMethod)
    
    Closes #1061

[33mcommit 0804ef4cd09b0e94783a9882c60914e22fca5108[m
Author: Philip Graf <git@acanda.ch>
Date:   Tue Jan 6 20:35:26 2015 +0100

    Fix swallowed exception in Request.classes(...)
    
    The method classes(Computer computer, Class<?>... classes) in
    org.junit.runner.Request swallows an InitializationError and throws a
    new RuntimeException instead when it cannot create a request. This
    prevents the user from finding out why the request could not be created.
    
    This change replaces throwing a new RuntimeException with generating a
    proper error report. The report contains the causes of the
    InitializationError so the user has a chance to find out what is causing
    the problem.

[33mcommit c7300033b5622aa02a58d4570e598697e58b0b4d[m
Author: Jorge Gonzalez <jorgeejgonzalez@gmail.com>
Date:   Sun Jan 18 10:42:35 2015 -0430

    Changed the name of the constructor variable klass to testClass reveal its true purpose.
    
    Closes #1071

[33mcommit 8f2a561045b432f9755e5226b8148fd70c20c984[m
Merge: 54b76134 5245ddd2
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jan 14 21:39:36 2015 +0100

    Merge pull request #1069 from hansjoachim/plugin
    
    Upgrade maven-surefire-plugin to latest version

[33mcommit 5245ddd26f7e2a0d40e8b19fd0936afe2c0c9b86[m
Author: Hans Joachim Desserud <github@desserud.org>
Date:   Wed Jan 14 19:17:48 2015 +0100

    Upgrade maven-surefire-plugin to latest version

[33mcommit 54b7613484be714a769a8d62f1ac507912e61a01[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jan 4 22:20:25 2015 +0100

    Fix Javadoc generation on JDK 8.

[33mcommit de9269563b6af4ccf9e3d3750864158a27eee6d3[m
Author: Narendra Pathai <narendra.pathai@gmail.com>
Date:   Wed Dec 10 13:00:50 2014 +0530

    Added support for strict verification of resource deletion in TemporaryFolder rule.
    
    Closes #1044

[33mcommit 3f0adeaf0a812cf88e76527b95c499e3ba99404e[m
Author: Stephan Schroevers <sschroevers@sdl.com>
Date:   Sat Dec 27 20:55:19 2014 +0100

    Improve error message for assertArrayEquals() when multi-dimensional arrays
    have different lengths.
    
    Previously, JUnit's assertion error message would indicate only that some array
    lengths x and y were unequal, without indicating whether this pertained to the
    outer array or some nested array. Now, in case of a length mismatch between two
    nested arrays, Junit will tell at which indices they reside.
    
    Closes #1054
    Closes #803

[33mcommit e4c92d479b18b6c26a22cace23f33aedd116c116[m
Merge: 64a1c760 bfd81449
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 21 15:54:34 2014 +0100

    Merge pull request #1051 from NarendraPathai/Issue1035
    
    PR to utilize 'use' option for cross-referencing javadoc pages #1035

[33mcommit bfd81449318bcebd2769328007861d8fde6227ff[m
Author: Narendra Pathai <narendra.pathai@gmail.com>
Date:   Fri Dec 19 15:45:00 2014 +0530

    Updated pom.xml to utilize 'use' option for cross-referencing javadoc pages

[33mcommit 64a1c76037475cca448ba16bca90a83581c4ef01[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 15 23:08:45 2014 +0100

    Fix: TimeUnit.HOURS does not exist in JDK5

[33mcommit bc0292bd70ad085157e76eaad7dcde287769f41a[m
Merge: bfd76703 23684f6b
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 15 20:45:25 2014 +0100

    Merge pull request #1042 from junit-team/fix-compiler-warnings
    
    Fix Eclipse compiler warnings

[33mcommit 23684f6b47da555ec0cac883776f8cdeef82842a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:19:30 2014 +0100

    Suppress serialization warning
    
    FilterNotCreatedException does not add any fields to Exception.

[33mcommit 340beca75040da67e495284ce34756c9f7e567b4[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:15:07 2014 +0100

    Don't use deprecated TestWatchman MethodRule

[33mcommit dfbf2ae868049c041c926f2bf2d7633056af5820[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:14:36 2014 +0100

    Add type wildcard

[33mcommit 3d535e08126bc515ddcb23e845f5fed121faa470[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:14:25 2014 +0100

    Remove unnecessary unused suppression

[33mcommit d477277831290221d5e557eb0afe02c483289939[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:14:01 2014 +0100

    Add missing @Override annotation

[33mcommit 430e3669badc46ae9ba97e513ddbd1a88a5b7f14[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:13:20 2014 +0100

    Suppress SecurityManager deprecation warnings

[33mcommit e6f04890312dccafb295fb0a38f441c81c9f137f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:10:55 2014 +0100

    Use builder instead of deprecated constructor

[33mcommit ac655968cf324d1ccb7628f92c5facc9430f177e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:10:28 2014 +0100

    Add/prevent adding missing type wildcard to Class

[33mcommit 3cea4a9e8f196616ceb9f0bdb1755dace92befd2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:08:38 2014 +0100

    Remove unused imports

[33mcommit 207b0d727d365e90a3f03102c7b483492f5f7154[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:08:10 2014 +0100

    Ignore deprecation warnings for AssumptionViolatedException

[33mcommit d462bb939b13b0a95a31258eb872a5295d11df76[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:06:32 2014 +0100

    Fix dead code warnings in recent Eclipse IDEs

[33mcommit aacc4438a98ff483b210862b095fbe9e68f30c0d[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:05:54 2014 +0100

    Remove useless test for @ValidateWith
    
    You cannot pass `null` as a class literal: @ValidateWith(null) results
    in a compiler error.

[33mcommit 2b6109612b4a70cca1175cb01b0322593647f218[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:04:20 2014 +0100

    Only AssumptionViolatedException constructors are deprecated

[33mcommit b3a5b536d7a3889b33f956b463351edfbc06b80f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 14 09:38:41 2014 +0100

    Add serialver generated serialVersionUID

[33mcommit 39d3fd65ab7d3689486427a1cc0ad0cf22dbb6ec[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Dec 8 21:02:30 2014 +0100

    Suppress warnings in junit.* code

[33mcommit bfd76703d33a0ff4ffa6dc97d7c2eb6f3b2c4709[m
Merge: 4b79be8b 270eabab
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Dec 9 20:00:02 2014 +0100

    Merge pull request #1043 from stefanbirkner/plugin-updates
    
    Update plugins to current versions.

[33mcommit 4b79be8b3a3d6afdf5e79c89c4a83077b86d5929[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 7 20:23:02 2014 +0100

    Add missing tests to AllTests

[33mcommit 87b4aceb6b588104dec62628ce656254c1d13222[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Dec 7 20:14:41 2014 +0100

    Add resource source folders to Eclipse project

[33mcommit 270eabab180adafc3a4aab923b14d5811ee563e9[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Dec 9 07:58:31 2014 +0100

    Update plugins to current versions.
    
    maven-compiler-plugin .................................... 3.1 -> 3.2
    maven-jar-plugin ......................................... 2.4 -> 2.5
    maven-javadoc-plugin ................................ 2.9.1 -> 2.10.1
    maven-release-plugin ................................... 2.5 -> 2.5.1
    maven-site-plugin ........................................ 3.3 -> 3.4
    maven-source-plugin .................................... 2.2.1 -> 2.4
    maven-surefire-plugin .................................. 2.17 -> 2.18
    org.codehaus.mojo:animal-sniffer-maven-plugin .......... 1.11 -> 1.13

[33mcommit bd5b90f75908b7a3ed074a7be29823170f008fb4[m
Author: Peter Wright <peter@peterphi.com>
Date:   Mon Dec 1 21:53:18 2014 +0000

    Add BlockJUnit4ClassRunner#createTest(method)
    
    This allows extensions of BlockJUnit4ClassRunner to provide a custom instance of the test for each FrameworkMethod invocation.
    
    Two tests show that:
    
    1. createTest(FrameworkMethod) can be overridden successfully
    2. createTest() is called by default by createTest(FrameworkMethod)
    
    Fixes #1036. Closes #1037.

[33mcommit 96ca415d66bb37d6d3c54505cf34ce5dce3fecf5[m
Merge: 1fc1c122 495a9a93
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Dec 6 21:35:03 2014 +0100

    Merge pull request #945 from stefanbirkner/parameterized-suite
    
    Extract class that creates the runners.

[33mcommit 1fc1c12289c84d19f46d202b98d50bc80b38ab2e[m
Merge: d712ef95 7216e4bd
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Dec 6 21:28:16 2014 +0100

    Merge pull request #968 from stefanbirkner/category
    
    Avoid repeated checks.

[33mcommit d712ef951802074695c79740f9bb6954b12ee4ce[m
Merge: 3867a736 07cf3c7f
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Dec 6 20:55:27 2014 +0100

    Merge pull request #984 from kcooney/fail-on-timeout-remove-copy
    
    Remove unnecessary array copy in FailOnTimeout.

[33mcommit 3867a7360533cb0fd90a50adb5864bab14ecb425[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Thu Dec 4 09:13:13 2014 -0800

    Add pull request #1013 to the release notes.

[33mcommit 102ebee6f111bef7bf36442a0defb756faffa312[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Thu Dec 4 11:13:58 2014 -0500

    [maven-release-plugin] prepare for next development iteration

[33mcommit 64155f8a9babcfcf4263cf4d08253a1556e75481[m[33m ([m[1;33mtag: r4.12[m[33m)[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Thu Dec 4 11:13:56 2014 -0500

    [maven-release-plugin] prepare release r4.12

[33mcommit d4c8b1a213a8eb63a290e3dee5105f7a6ef3058e[m
Author: David Saff <saff+aa@google.com>
Date:   Wed Dec 3 16:15:45 2014 -0500

    Update ReleaseNotes4.12.md

[33mcommit 01768666d362391a57a7e5989d23b6b1d1789eb0[m
Author: David Saff <saff+aa@google.com>
Date:   Wed Dec 3 16:15:31 2014 -0500

    Add info on --filter option

[33mcommit 60d16e02576f7ab259eec29c2af0dbcce0e0e925[m
Author: John <john.k.tims@gmail.com>
Date:   Mon Dec 1 19:37:36 2014 -0500

    Fix typo in 4.12 release notes.

[33mcommit 60aaf96322abf2071e4f93b2748723a56c5ee668[m
Author: Stefan Oehme <st.oehme@gmail.com>
Date:   Sun Oct 26 20:53:13 2014 +0100

    Make ErrorCollector#checkSucceeds generic
    
    Closes #1013

[33mcommit e94c54327486637afea3a3e676def0ce080fb375[m
Author: sakky11 <deshpande.sakky@gmail.com>
Date:   Fri Aug 22 18:51:51 2014 +0530

    Remove 'public abstract' from methods in IMoney.java
    
    By default, methods in an interface are public and abstract.
    Closes #1033

[33mcommit 495a9a93e4a1157e707a01467e7cc3f600c88d19[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Jun 29 01:52:19 2014 +0200

    Extract class that creates the runners.
    
    The new code makes it clear that the Parameterized ruinner is a suite
    with automatically generated runners for each set of parameters.

[33mcommit c391c25b230e880289484202f3dc3aa81c373a1c[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Jun 28 19:06:51 2014 +0200

    Remove redundant exception from method signature.
    
    A more general exception is already part of the signature.

[33mcommit 7216e4bd9eceea0be4813da6520a6fa4ed2e3a2a[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 30 00:20:36 2014 +0200

    Avoid repeated checks.
    
    The only check is `assertNoDescendantsHaveCategoryAnnotations`. It
    checks all descendants. Hence further calls of
    `assertNoCategorizedDescendentsOfUncategorizeableParents` for each
    child are redundant, because it has already been checked.

[33mcommit b03c6a529861e0e10edde534ae69d5507eed123c[m
Merge: b9a154fc 4411c102
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Nov 10 19:52:18 2014 +0100

    Merge pull request #1029 from stefanbirkner/javadoc-old-directory
    
    Restore old Javadoc directory

[33mcommit 4411c102d489c2272d7e38606e912a54be4defa8[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Nov 9 15:04:25 2014 +0100

    Restore folder `javadoc/latest` for Javadoc.
    
    This folder has been used for many years. There are links to Javadoc at
    that folder (e.g. http://stackoverflow.com/questions/156503/how-do-you-assert-that-a-certain-exception-is-thrown-in-junit-4-tests/2935935#2935935 ).
    Restoring the folder `javadoc/latest` will hopefully restore the
    Javadoc pages in Google Search, too.

[33mcommit b9a154fce93bf7fd81ac3e1f9fdf1d6bccd871d2[m
Merge: 433e41df e5e61c44
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Mon Nov 10 00:03:29 2014 +0100

    Merge pull request #1026 from marcphilipp/javadoc-link
    
    Link to Maven-generated Javadoc

[33mcommit 433e41dfde986998c6bc9a062a921f68e476deba[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Nov 9 10:49:24 2014 -0500

    [maven-release-plugin] prepare for next development iteration

[33mcommit ceaafcafc7d7ac8d80509ab046acc7a472ddb515[m[33m ([m[1;33mtag: r4.12-beta-3[m[33m)[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Nov 9 10:49:21 2014 -0500

    [maven-release-plugin] prepare release r4.12-beta-3

[33mcommit 77450c71a7024d85012fa371dbfe98b651353b02[m
Merge: c508fc44 417add34
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 9 07:39:34 2014 +0100

    Merge pull request #1024 from kcooney/update-release-notes
    
    Add missing pull requests from 4.12 release notes

[33mcommit 417add342b2161e592707c61f66efc8b9d8feccd[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Nov 8 07:50:40 2014 -0800

    Add missing pull requests from 4.12 release notes.

[33mcommit c508fc4443a7e12cf1c9e4e669eebeb12b16b56f[m
Merge: 304a03ec 5e2616aa
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Sat Nov 8 14:34:03 2014 -0800

    Merge pull request #1025 from marcphilipp/fix-jdk5-incompatibility
    
    Fix Incompatibility with JDK5 source level

[33mcommit e5e61c4447d76cd128d44f412fce26caaba3fc86[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Nov 8 21:50:55 2014 +0100

    Link to Maven-generated Javadoc

[33mcommit 304a03ec5e57f52d9c5490a7de599629f2de3cf7[m
Merge: d20ea40c 16a2b51b
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Nov 8 21:39:37 2014 +0100

    Merge pull request #1022 from stefanbirkner/travis-site
    
    Verify that the site goal is working.

[33mcommit 5e2616aa6280909649185240e0194fd14c5147a8[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Nov 8 21:33:45 2014 +0100

    Fix Incompatibility with JDK5 source level
    
    @Override is not allowed when implementing an interface method

[33mcommit d20ea40ce77489491bfbd8a1b44e4c45695c5455[m
Merge: 8d057b4e 93b08bc9
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Thu Nov 6 16:59:54 2014 -0800

    Merge pull request #1021 from UrsMetz/adjust-temporary-folder-javadoc
    
    JavaDoc of TemperaryFolder: folder not guaranteed to be deleted

[33mcommit 93b08bc93e76daae248982a4644c749cc4058ebc[m
Author: Urs Metz <urs.metz@gmx.de>
Date:   Wed Nov 5 19:39:15 2014 +0100

    adjust JavaDoc to reflect that temporary folders are not guaranteed to be deleted

[33mcommit 16a2b51b9d9425cd7dacad85e2df97985996ca8d[m
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Thu Nov 6 11:57:32 2014 +0100

    Disable parts of doclint for the site's javadoc.
    
    This is a follow-up to e0367cd. That commit is missing to apply the doclint rules to site generation. Hence the site goal fails because of doclint issues. Now doclint is disabled for all groups but accessibility and reference for the site generation, too.

[33mcommit d0acd32b64f7cccaf9c6a8401fd5a8846a9faefd[m
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Thu Nov 6 11:43:43 2014 +0100

    Verify that the site goal is working.
    
    Currently you could not create the site with Java 8. Unfortunately I didn't know about this. In order to avoid such an accident we will build the site on the CI server, too.

[33mcommit 8d057b4e3352958a9a13ca54b4ca54b9cffc05c4[m
Merge: b6974003 99b0ebc7
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Wed Nov 5 07:32:34 2014 -0800

    Merge pull request #1015 from NarendraPathai/Issue589
    
    Resolved #589 where the method rules returned my methods were not e...

[33mcommit b69740032a4abdd2596a652630cc6497dbcea084[m
Merge: c731aa52 c1aae8c8
Author: Kevin Cooney <kcooney@users.noreply.github.com>
Date:   Wed Nov 5 00:29:58 2014 -0800

    Merge pull request #1020 from NarendraPathai/Issue1019
    
    Added validtion that @ClassRule should only be implementation of TestRule

[33mcommit c731aa520096809d21d44208ad05b3af5c3959b6[m
Merge: 26f9ebac 39076ede
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Mon Nov 3 20:46:53 2014 +0100

    Merge pull request #1008 from marcphilipp/update-team-in-pom
    
    Update Team in pom.xml

[33mcommit 39076ede530e2ddadcbdef931781cb24a2ffea7c[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 09:56:26 2014 +0200

    Update Team in pom.xml

[33mcommit c1aae8c894e2afe75ee44965562521cf02c2034a[m
Author: Narendra Pathai <narendra.pathai@gmail.com>
Date:   Sun Nov 2 23:57:26 2014 +0530

    Fixes #1019 by adding validtion that @ClassRule should only be implementation of TestRule

[33mcommit 99b0ebc70e061d7620179f4e72e735e3944e54cd[m
Author: Narendra Pathai <narendra.pathai@gmail.com>
Date:   Sat Nov 1 20:28:11 2014 +0530

    Resolved Issue#589 where the method rules returned my methods were not executed

[33mcommit 26f9ebac45e0ff95c72d356b98b64eaf3de4f618[m
Merge: 8381b367 30a34986
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Tue Oct 21 23:26:05 2014 +0200

    Merge pull request #1010 from marcphilipp/master
    
    Disable maven-site-plugin reports that don't add any value

[33mcommit 8381b36720cbd4945cbec6d74f110db136c1cf78[m
Merge: b5e4174d fc1b3571
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Tue Oct 21 15:21:26 2014 +0200

    Merge pull request #1009 from marcphilipp/update-yahoo-groups-url-in-pom
    
    Fix Yahoo Groups URL

[33mcommit 30a349860acfa847dd7a60ef77df92f6831794c7[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 10:17:36 2014 +0200

    Disable summary report

[33mcommit 2cf560eec4eeabebe39ae372b52c562cb2161ffa[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 10:17:19 2014 +0200

    Disable Maven plugin related reports

[33mcommit 0841cbb1c14ac497a107f576494df9e10816fef4[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 10:15:27 2014 +0200

    Disable Surefire report

[33mcommit b69b3ab15e0aa03fa8e95f43d897af29843fca1b[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 10:15:05 2014 +0200

    Disable GitHub and changes reports

[33mcommit 80e7b0deaf4ca24659878328987b7d096a4a7070[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 10:14:18 2014 +0200

    Disable xref reports

[33mcommit fc1b3571f5995594b27cd3b82d9721b14e5620b9[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 10:01:53 2014 +0200

    Fix Yahoo Groups URL

[33mcommit b5e4174d4fa7aa4cecb47c64214daddf9f293e53[m
Merge: 077f5c50 18b23a7e
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Tue Oct 21 09:52:44 2014 +0200

    Merge pull request #1007 from marcphilipp/gh-995-fix-link-to-4.12-release-notes
    
    Fix #995 - correct link to 4.12 release notes

[33mcommit 18b23a7ed22080e7412e24060c66cef7fc3b1b93[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Oct 21 09:46:32 2014 +0200

    Fix #995 - correct link to 4.12 release notes

[33mcommit 077f5c502a2494c3625941724ddcd5412a99ccc8[m
Merge: 6cf8f1fa f6149a92
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sun Oct 12 21:12:58 2014 -0700

    Merge pull request #1000 from kcooney/Result-serialization-compatibility
    
    Make serialization of Result compatible with 4.11

[33mcommit f6149a9236d9a2778bf2fd6db927fd9f498a79c8[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 27 21:35:09 2014 -0700

    Make serialization of Result compatible with 4.11

[33mcommit 6cf8f1fa2f4428f1e96f6cd2eded743b6879859e[m
Merge: 597977ed 5c885a7d
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Sep 28 07:36:40 2014 +0200

    Merge pull request #999 from kcooney/add-pull-993-to-release-notes
    
    Add pull request 993 to release notes

[33mcommit 5c885a7df5e557a271268dbd4f00f48b4184c064[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 27 15:19:23 2014 -0700

    Add pull request 993 to release notes

[33mcommit 597977ed1e15acfce0c7c67284d8cd1501911a53[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Thu Sep 25 01:50:50 2014 -0400

    [maven-release-plugin] prepare for next development iteration

[33mcommit 8d63bc65ace8c36eb3b189528c06e201f2caa535[m[33m ([m[1;33mtag: r4.12-beta-2[m[33m)[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Thu Sep 25 01:50:48 2014 -0400

    [maven-release-plugin] prepare release r4.12-beta-2

[33mcommit af83b6badeb37083a22bf7247111cbe0b5de0b86[m
Merge: c2f2a8c1 d0b029f6
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Sep 24 23:14:15 2014 +0200

    Merge pull request #993 from kcooney/AssumptionViolatedException-remove-unused-ctors
    
    Remove unused constructors in the external AssumptionViolatedException.

[33mcommit d0b029f644e2f3217962f0de0cd4ffdfa641bd96[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Sep 10 09:48:47 2014 -0700

    Remove unused constructors in external AssumptionViolatedException.

[33mcommit c2f2a8c11487523569bf30f75d16cb747947d8dc[m
Merge: a5727fce 86b9346e
Author: David Saff <saff+aa@google.com>
Date:   Wed Sep 24 12:57:25 2014 -0400

    Merge pull request #994 from marcphilipp/serialization-compatibility
    
    Ensure serialization compatibility where possible

[33mcommit 86b9346e4c8fa263810dbd55a2775081194b1d6f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Sep 21 20:11:07 2014 +0200

    Ensure serialization compatibility where possible
    
    Not possible for org.junit.runner.Result

[33mcommit a5727fce1819a01a7d7715320bc0cac3b91200be[m
Merge: 3d7dfb3f 3dbe046a
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Sep 16 11:53:26 2014 -0700

    Merge pull request #990 from marcphilipp/release-notes-918
    
    Document #918

[33mcommit 3dbe046a967236bce5ede9bed258ebd9d0a45182[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Sep 16 13:31:17 2014 +0200

    Document #918

[33mcommit 3d7dfb3f254df2e41e69a63ee85639567d09a70b[m
Merge: 7d07b8db 510d8079
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Sep 14 19:45:58 2014 +0200

    Merge pull request #986 from kcooney/Timeout-rule-builder
    
    Add builder for Timeout rule. Make Timeout rule designed for extension.

[33mcommit 510d807929bdd2dea85726b5a12542758aa61420[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 13 09:27:51 2014 -0700

    Update release notes with details on pull 986

[33mcommit 2a88771e9d523bff6f539c3db9e7def483a13f04[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 6 17:45:44 2014 -0700

    Add missing @since Javadoc for FailOnTimeout.Builder

[33mcommit 755a82f05ea6cfb884d72041b404fc1c8129f92c[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 6 17:24:07 2014 -0700

    Add builder for Timeout rule. Make Timeout rule designed for extension

[33mcommit 7d07b8db30db7ee0d7220af40fff25f22aae2c9e[m
Merge: 008299ef 883c1bb6
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Sep 12 16:05:03 2014 -0700

    Merge pull request #988 from marcphilipp/revert-gh862
    
    Revert "Delete classes that are deprecated for six years."

[33mcommit 008299efcf2bddf0f050735e80c61a70a5d6b35a[m
Merge: e5615908 34701f7a
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Sep 12 15:56:57 2014 -0700

    Merge pull request #989 from marcphilipp/fix-975-junitsystem-exit
    
    Add JUnitSystem.exit() back

[33mcommit 883c1bb6da11ff4c8422220fd99d727a495dd51f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Aug 11 21:41:37 2014 +0200

    Restore classes that are deprecated for 6 years
    
    This reverts commit 745ca05dccf5cc907e43a58142bb8be97da2b78f. The
    deletion of the classes caused some problems for users (see
    https://groups.yahoo.com/neo/groups/junit/conversations/topics/24572).
    
    In addition, the new coding style has been applied and "major" has
    been added to the deprecation messages in the Javadoc.

[33mcommit 34701f7aedd60ace43171a9c56c14c8ef1f7bd15[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Sep 12 21:56:52 2014 +0200

    Add JUnitSystem.exit() back

[33mcommit e561590830f24e663c03fd604d39c51a47bfcc31[m
Merge: c5a2e043 890ba977
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Sep 11 22:17:20 2014 +0200

    Merge pull request #987 from kcooney/release-notes
    
    Update release notes to include pulls #818 and #985

[33mcommit 890ba9770601156474939e26e5507efafb3bf2f0[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Thu Sep 11 09:01:17 2014 -0700

    Update release notes to include pulls #818 and #985

[33mcommit c5a2e043f988c8fbafd57a453f77930720f55c2b[m
Merge: afdbe56d 8f59230f
Author: David Saff <saff+aa@google.com>
Date:   Thu Sep 11 10:32:33 2014 -0400

    Merge pull request #918 from eamonnmcmanus/master
    
    Avoid a potentially expensive reflection-based loop in assertArrayEquals...

[33mcommit afdbe56dcdc453608429643dcda516556ce00334[m
Merge: 71a32216 daa46e40
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Wed Sep 10 08:27:02 2014 -0700

    Merge pull request #985 from kcooney/AssumptionViolatedException-cause
    
    Change AssumptionViolatedException to not set the cause to null; fixes issue #494

[33mcommit 71a322165f18c9b696d5ba5ecf2134f58e66f615[m
Merge: 533dbb7b 56a63f16
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Sep 9 09:04:30 2014 -0700

    Merge pull request #982 from pettermahlen/cause-matcher-type-variance
    
    Less restrictive type bounds for ThrowableCauseMatcher

[33mcommit daa46e409f29cd21f9b3a9036fd858c3c21e564f[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 6 10:29:40 2014 -0700

    Change AssumptionViolatedException to not set the cause to null; fixes issue #494

[33mcommit 56a63f1607fadd83df240b1676d8a053348d868f[m
Author: Petter Måhlén <petter@spotify.com>
Date:   Thu Sep 4 13:32:22 2014 +0200

    Less restrictive type bounds for ThrowableCauseMatcher
    
    Prior to this change, ThrowableCauseMatcher.hasCause() required
    the cause matcher to be a matcher for the type of the outer
    exception. This change allows a matcher for any Throwable sub-type
    as the matcher to apply to the cause.

[33mcommit 533dbb7b97dc25529b96c512e638a778d9ee0530[m
Merge: 54081627 e304688f
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sun Sep 7 09:25:57 2014 -0700

    Merge pull request #922 from AlexYursha/improve-theories-javadoc
    
    Add javadoc to some classes in org.junit.experimental.theories

[33mcommit 07cf3c7fa446da330776502fb7cdc7329bfa2265[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 6 09:27:19 2014 -0700

    Remove unnecessary array copy in FailOnTimeout.

[33mcommit 5408162765635af9b42a47ea865b06865284a2ab[m
Merge: bbbb8571 1e55e32b
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sat Sep 6 08:54:35 2014 -0700

    Merge pull request #981 from kcooney/fail-on-timeout-builder
    
    Create a Builder for FailOnTimeout.

[33mcommit 1e55e32ba3dab864b20e9c162c5b421f99a11c6d[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Sep 2 22:39:15 2014 -0700

    Update BlockJUnit4ClassRunner to no longer use the deprecated FailOnTimeout ctor

[33mcommit d96a05f8d33ed781c701c58dd285bf6464112719[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Sep 2 22:23:15 2014 -0700

    Create a Builder for FailOnTimeout.
    Delete all constructors created since 4.11 was released.
    Fix style issues.

[33mcommit bbbb8571f1a3cdcb9af977867c7a16de3a1f5a76[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Aug 14 23:16:09 2014 +0200

    Use a smaller DURATION_THAT_EXCEEDS_TIMEOUT value.
    
    Integer.MAX_VALUE might cause problems in some implementations.

[33mcommit fee8a7422d1c81b63ce6cdeb126cf878553c0df7[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 13 21:42:12 2014 +0200

    Document #974

[33mcommit 4c78da06eb62de642259b99c4407bca3b3ab755b[m
Merge: 7c6c36d0 3b544f57
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Wed Aug 13 07:18:22 2014 -0700

    Merge pull request #974 from priav03/master
    
    Update TemporaryFolder.newFolder() to give a better error message if a path contains a slash

[33mcommit 3b544f571c2ec23a31e15ecc031a313ffa6ebcee[m
Author: Priya <pria.v03@gmail.com>
Date:   Tue Aug 12 22:24:46 2014 +0530

    #946 - Updated TemporaryFolder.newFolder() to give a better error message if a path contains a slash

[33mcommit 7c6c36d0de0caf3b44ea80f93c7c4efe6644e1fc[m
Merge: be4cdb25 4baabd8b
Author: David Saff <saff+aa@google.com>
Date:   Tue Aug 5 11:15:26 2014 -0400

    Merge pull request #972 from stephenc/plain-links-in-site
    
    Remove icon decoration on all external links

[33mcommit 4baabd8b27a276aacb2efa545dc5e3ee42d7b72b[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Tue Aug 5 14:25:03 2014 +0100

    Remove decoration on all external links

[33mcommit be4cdb2564e0cf039defb09d983925b7e00e71f0[m
Merge: e8b65582 f17e0671
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Jul 29 11:50:57 2014 -0700

    Merge pull request #962 from chrisvest/thread-start-timeout
    
    Do not include thread start time in test timeout measurements.

[33mcommit e8b655828694b2b3bf8b35e82e94be937607c898[m
Merge: ab5d85e7 1ef44913
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Jul 28 23:07:57 2014 +0200

    Merge pull request #967 from stefanbirkner/fail-on-timeout
    
    Increase running time of statement. Fixes #963.

[33mcommit 1ef449139923a22333f262dc8c75fa057903040c[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jul 28 22:33:48 2014 +0200

    Increase running time of statement. Fixes #963.
    
    The time between starting the statement and calling the future is
    arbitrary. Now the execution time of the statement is very very long.
    This ensures that the statement is not already finished when the
    future is called.

[33mcommit ab5d85e79260ef10d09328c8af68080ff84dc53c[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Jul 28 21:43:35 2014 +0200

    Prepare release notes for 4.13

[33mcommit bc235a478eafb3136942f1e70c23b82e9194f12c[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Jul 28 21:42:04 2014 +0200

    Remove [unreleased!] from title

[33mcommit 8aea9bc66441e5dd727b7d0a6478b4adb93b63f9[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Jul 28 21:41:40 2014 +0200

    Migrate release notes from wiki to repo

[33mcommit d621a8387a7ce820821c9a378013f4ea187ff166[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jul 28 21:16:10 2014 +0200

    Fix version range for restict-doclint. Fixes #965.
    
    Non-inclusive version ranges must be terminated by a closing parantheses according to the [Maven documentation](http://docs.codehaus.org/display/MAVEN/Dependency+Mediation+and+Conflict+Resolution#DependencyMediationandConflictResolution-DependencyVersionRanges).

[33mcommit 87f64ab3d8aeabda7800dc12dfcf4f55b636392c[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Mon Jul 28 13:38:58 2014 -0400

    [maven-release-plugin] prepare for next development iteration

[33mcommit 9b864b9c8f74cb03211b300987cd045f016e7a75[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Mon Jul 28 13:38:57 2014 -0400

    [maven-release-plugin] prepare release r4.12-site-test

[33mcommit 08a610b2fc25bc7e1053d9156f41c41b9382863b[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Jul 27 16:37:29 2014 -0400

    [maven-release-plugin] prepare for next development iteration

[33mcommit 0550afa689cc5c7860d4378b27ecd38d35c05570[m[33m ([m[1;33mtag: r4.12-beta-1[m[33m)[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Jul 27 16:37:26 2014 -0400

    [maven-release-plugin] prepare release r4.12-beta-1

[33mcommit eb374efefdf47d5f7383532bd8befc6ef3777133[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 27 22:30:00 2014 +0200

    Revert "[maven-release-plugin] prepare release r4.12-beta-1"
    
    This reverts commit cf2fe3a3abef29c252e1dc62bd6118af5ddaef58.

[33mcommit cf2fe3a3abef29c252e1dc62bd6118af5ddaef58[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Jul 27 16:29:07 2014 -0400

    [maven-release-plugin] prepare release r4.12-beta-1

[33mcommit d611a84f38cf9966a894dc17ce392b99d5ebe011[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 27 21:56:42 2014 +0200

    Revert "[maven-release-plugin] prepare release r4.12-beta-1"
    
    This reverts commit e9b8b4478b71c272ef270335326d7789d4364112.

[33mcommit e9b8b4478b71c272ef270335326d7789d4364112[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Jul 27 15:44:54 2014 -0400

    [maven-release-plugin] prepare release r4.12-beta-1

[33mcommit aa5ed2e5e65239f3485eda786db2a466f86a092f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 27 21:36:39 2014 +0200

    Ignore FailOnTimeoutTest for now (see #963)

[33mcommit 364eaa2d2c8c1ef1d3cad6597ab28471fd7dcb8a[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Jul 27 15:24:03 2014 -0400

    [maven-release-plugin] prepare for next development iteration

[33mcommit c14fe1727dee5ae5d0424394a73243279caa771d[m
Author: CloudBees DEV@Cloud <nobody@cloudbees.com>
Date:   Sun Jul 27 15:24:01 2014 -0400

    [maven-release-plugin] prepare release r4.12-beta-1

[33mcommit c7d04da7490c17435ba0dcdf796259827a8d994d[m
Merge: 74b11e0c 0d84dce2
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Jul 24 23:50:47 2014 -0700

    Merge pull request #956 from kay/disable_on_debug
    
    TestRule to disable specific other TestRules when debugging without modification to the test class

[33mcommit f17e06715488e2814b6f9b3b4e329961ce224f07[m
Author: Chris Vest <mr.chrisvest@gmail.com>
Date:   Fri Jul 25 08:09:29 2014 +0200

    Do not include thread start time in test timeout measurements.
    
    The time it takes to start a thread can be surprisingly large.
    Especially in virtualized cloud environments where noisy neighbours.
    This change reduces the probability of non-deterministic failures of
    tests with timeouts (`@Test(timeout=…)`) by not beginning the timeout
    clock until we have observed the starting of the task thread – the
    thread that runs the actual test. This should make tests with small
    timeout values more reliable in general, and especially in cloud CI
    environments.
    
    No tests added for this because of the probabilistic nature of the
    problem, and the small scope of the change.

[33mcommit 0d84dce24d6125048f22e2bf9e2e8b208ade53c8[m
Author: Doug Lawrie <doug@neverfear.org>
Date:   Tue Jul 15 20:20:32 2014 +0100

    Feature to disable TestRules when the test class being ran has been
    launched in debug mode.
    
    This feature is immediately useful with @Timeouts by disabling them
    during debugging allowing developers time to debug at their leisure
    without the test terminating abruptly.
    
    Timeouts or time sensitive logic in the code under test is not handled
    by this feature and may make this unuseful in some circumstances.
    
    The important benefit of this feature is that you can suspend rules
    without any making any modifications to your test class to remove them
    during debugging. Anecdotally removing timeouts for debug purposes often
    results in developers forgetting to restore them (including myself!).

[33mcommit 74b11e0c206faf9ca78ec14c0c16ec44152d6268[m
Merge: 817ea24f ef7b30f2
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Jul 24 02:20:48 2014 -0700

    Merge pull request #961 from stefanbirkner/intellij
    
    Restore field names with f prefix. Fixes #960.

[33mcommit ef7b30f2a31e02690c32abb1c412e097726cb8f5[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Jul 24 09:38:11 2014 +0200

    Restore field names with f prefix. Fixes #960.
    
    The prefix has been removed by df00d5eced3a7737b88de0f6f9e3673f0cf88f88,
    because we changed the coding style. Unfortunately IntelliJ IDEA reads
    ClassRequest.fTestClass and FilterRequest.fFilter via reflection. (See
    http://grepcode.com/file/repository.grepcode.com/java/ext/com.jetbrains/intellij-idea/13.0.0/com/intellij/junit4/JUnit4IdeaTestRunner.java/ ) This makes it impossible to
    start tests by using IntelliJ IDEA.
    
    There is already an issue at JetBrains:
    [IDEA-127349 ](http://youtrack.jetbrains.com/issue/IDEA-127349) We can
    revert the fix when this ticket is solved and most users are using an
    IntelliJ version with the fix.

[33mcommit 817ea24f69a040d4161525e600b73d7037a3222f[m
Merge: 127f1bb2 9274f00a
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Jul 17 17:29:38 2014 -0400

    Merge pull request #957 from benmccann/filters-comment
    
    Remove obsolete comment

[33mcommit 9274f00a1c3ee90355dba0d09213d513aba787c0[m
Author: Ben McCann <ben@benmccann.com>
Date:   Thu Jul 17 13:57:45 2014 -0700

    Remove obsolete comment

[33mcommit e304688f14e9f73d7984bdb148f45f6f7ecc337b[m
Author: Alex Yursha <alex.yursha@icloud.com>
Date:   Fri May 30 13:23:57 2014 +0300

    Add javadoc to some classes in org.junit.experimental.theories

[33mcommit 127f1bb2a137d611e98277a0d1e9184efc47bc05[m
Merge: 4eecfb1e a7537088
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Wed Jul 2 10:56:16 2014 -0700

    Merge pull request #736 from kcooney/filter-factory
    
    Change FilterFactory code to pass in the actual Description

[33mcommit a75370887a71a09b3e5a12dec252513e80228e6b[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Jul 2 10:45:24 2014 -0700

    Change FilterFactory code to pass in the actual Description

[33mcommit 4eecfb1eff9aa5304f6b30874a26734124ac902d[m
Author: vimil <vimilsaju@yahoo.com>
Date:   Sun Jun 15 18:12:47 2014 -0700

    Add inherited annotation to UseParametersRunnerFactory annotation.

[33mcommit 8db8032522ac77c77f3456dbbf2cbfbe8a1cfcb5[m
Merge: 95fc32d8 9d2817c1
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Jun 24 20:55:26 2014 +0200

    Merge pull request #938 from Tibor17/junit.tests
    
    Tests speedup by parallel execution of classes in AllTests

[33mcommit 95fc32d8cd15c81e7a007e05b142c2e3d9168781[m
Merge: 4914d90e a0576ab1
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Jun 24 06:46:43 2014 -0700

    Merge pull request #939 from mustafa01ali/license_file_rename
    
    Fixed issue #929 - Renamed license file to prevent duplicate file errors in Android when creating an apk

[33mcommit a0576ab189537d91e2c3f04df5bed3bf61ae9b1f[m
Author: Mustafa Ali <mustafa.ali@mutualmobile.com>
Date:   Tue Jun 24 13:56:46 2014 +0530

    Updated license file name in pom.xml

[33mcommit ec298c9a5593b46aca073567895613768ad19064[m
Author: Mustafa Ali <mustafa.ali@mutualmobile.com>
Date:   Tue Jun 24 12:56:14 2014 +0530

    Fixed issue #929 - Renamed license file to prevent duplicate file errors
    while using in Android apps.

[33mcommit 4914d90e4e6c265e952084eb61e126641d144f27[m
Merge: 2f86c6f6 0ffc637a
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jun 24 08:34:56 2014 +0200

    Merge pull request #937 from kcooney/test-watcher-delegation
    
    Change Stopwatch to delegate to TestWatcher. Fix Stopwatch.runtime()

[33mcommit 9d2817c19a413021e7c4b986923f45826403f99c[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jun 24 00:39:04 2014 +0200

    Tests speedup by parallel execution of classes in AllTests

[33mcommit 0ffc637a33164dd219a6fbbb7210db84779c700a[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon Jun 23 13:52:43 2014 -0700

    runtime() should return a fixed value after the test ends.

[33mcommit 7ae75535efbb7a95ac62cfa1d0ccb626cc23e8c7[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon Jun 23 13:51:52 2014 -0700

    Change Stopwatch to use delegation instead of inheritance.

[33mcommit 2f86c6f600f5a953d02d00e0b12f621ceaa7d59d[m
Merge: e1315c75 a1f68c6d
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jun 23 21:47:32 2014 +0200

    Merge pull request #935 from kcooney/ParameterizedAssertionError-hashCode
    
    Make ParameterizedAssertionError override hashCode()

[33mcommit a1f68c6d9ad0fd5ce0ca2946fa66a1a059b4633f[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon Jun 23 11:46:32 2014 -0700

    ParameterizedAssertionError overrides equals() so it should override hashCode()

[33mcommit e1315c75a81d8131dd88dadbf5184892f0d9ce63[m
Merge: 0e64f5c9 e12bb770
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jun 23 18:43:00 2014 +0200

    Merge pull request #928 from kcooney/test-watcher-internal-assumption-violation
    
    Add overload of TestWatcher.skipped() that uses the external AssumptionViolationException

[33mcommit 0e64f5c9d8626c95c7da36186312a76524ff7b15[m
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sun Jun 22 11:12:14 2014 -0700

    Update CONTRIBUTING.md

[33mcommit 8019c1997267454c653bb36aa94c02d3dfda943c[m
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sun Jun 22 10:58:01 2014 -0700

    Mentions that you need to create a branch

[33mcommit e12bb77074e3e8fde738ff5c4ac359e106978584[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Jun 8 09:15:08 2014 -0700

    Add overload of TestWatcher.skipped() that uses the external AssumptionViolationException.
    
    This allows code using TestWatcher to handle assumption violation exceptions
    without using deprecated classes.

[33mcommit d9b90bc27491c7c02a61c68afe33f41ea1fab338[m
Merge: df00d5ec 15c925c4
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Wed Jun 18 21:15:49 2014 -0700

    Merge pull request #932 from rowanhill/non-static-class-rules
    
    Allow members annotated with both @ClassRule and @Rule to be static

[33mcommit 15c925c4412d993a12e91a2a6c0168977402efec[m
Author: Rowan Hill <rowan.hill@softwire.com>
Date:   Mon Jun 16 20:16:42 2014 +0100

    Allow static @Rule members if also @ClassRule

[33mcommit dc23211eb83c7d9f23f6a7031fedc091c6365bed[m
Author: Rowan Hill <rowan.hill@softwire.com>
Date:   Mon Jun 16 21:57:59 2014 +0100

    Rename RuleFieldValidator to RuleMemberValidator

[33mcommit 6ca812e0d62495b7de7611e95e58e4e797d6243f[m
Author: Rowan Hill <rowan.hill@softwire.com>
Date:   Wed Jun 18 09:43:44 2014 +0100

    More precise error message for static MethodRules

[33mcommit 759061a31775afd29ff99fd2a55969bd6aaa8c2f[m
Author: Rowan Hill <rowan.hill@softwire.com>
Date:   Mon Jun 16 19:37:30 2014 +0100

    Refactor RuleFieldValidator into strategy classes

[33mcommit df00d5eced3a7737b88de0f6f9e3673f0cf88f88[m
Author: Alex Yursha <alex.yursha@icloud.com>
Date:   Mon May 26 18:02:49 2014 +0300

    remove 'f' prefix from field names, add LEGACY_CODING_STYLE, change CODING_STYLE

[33mcommit 63b1950468b19d91e368caa6ae804b2c4fefc6a8[m
Merge: 23c8e97e 745ca05d
Author: David Saff <saff+aa@google.com>
Date:   Fri Jun 6 20:47:48 2014 -0400

    Merge pull request #862 from stefanbirkner/remove-deprecated-classes
    
    Delete classes that are deprecated for six years.

[33mcommit 23c8e97eef2bf6302b165bd04d642f8f7c961d26[m
Merge: 70f082f4 a5d194fc
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu May 29 08:31:20 2014 -0700

    Merge pull request #919 from AlexYursha/comparison-failure
    
    Improve readability of ComparisonFailure

[33mcommit 70f082f4d679cbf0b544758bc44321ecd168552d[m
Merge: 950702c6 23c1ef4d
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue May 27 07:46:27 2014 -0700

    Merge pull request #920 from AlexYursha/improve-assumptions-docs
    
    Improve documentation on using assumptions.

[33mcommit 23c1ef4d6a436408080e9145415f792a158e9274[m
Author: Alex Yursha <alex.yursha@icloud.com>
Date:   Mon May 26 16:57:37 2014 +0300

    Mention about using assumptions in Theories

[33mcommit a5d194fcb57b1b320ae808bc5a8d153f98f18a84[m
Author: Alex Yursha <alex.yursha@icloud.com>
Date:   Mon May 26 16:26:15 2014 +0300

    Improve readability of ComparisonFailure

[33mcommit 8f59230f8be208e876a66cccd87f1a2d81aeccd3[m
Author: Éamonn McManus <eamonn@mcmanus.net>
Date:   Thu May 22 10:27:22 2014 -0700

    Avoid a potentially expensive reflection-based loop in assertArrayEquals, in the usual case where the arrays are in fact exactly equal.

[33mcommit 950702c6adbbcbbee0ce2061d674bf05e0c997b1[m
Merge: ad09a5cf 5d059936
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Wed May 14 15:15:10 2014 -0700

    Merge pull request #903 from baev/master
    
    Description.getMethodName() should not return null. Fixes #892

[33mcommit 5d05993602fc1e0ef384f3193790053ea706d0cd[m
Author: charlie <charlie@yandex-team.ru>
Date:   Sat May 3 21:09:47 2014 +0400

    Description.getMethodName() should not return null. Fixes #892

[33mcommit ad09a5cf24eaea5d09e43cfef84164bebb5fbc00[m
Merge: 5e692e43 fe410297
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue May 13 23:07:49 2014 -0700

    Merge pull request #914 from mananshah99/master
    
    Add supplementary Javadoc

[33mcommit fe410297b12268e4d287a34be4856172ce8a6c94[m
Author: Manan Shah <manan.shah.777@gmail.com>
Date:   Tue May 13 22:39:44 2014 -0700

    Add supplementary Javadoc
    
    Includes
    - AssertionFailedError
    - TestFailure

[33mcommit 5e692e435599d43745be27da4013cefbc25bc2de[m
Merge: ae497d38 4cca68f8
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon May 12 21:12:17 2014 +0200

    Merge pull request #883 from stefanbirkner/doclint
    
    Doclint

[33mcommit ae497d3811bfde738cbb2093aedc7c893bb67da6[m
Merge: b2d26ecd cfe6afad
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon May 12 13:47:03 2014 +0200

    Merge pull request #912 from mynxyl/fix
    
    Small fix,correct spelling mistake

[33mcommit cfe6afadc81b72449c8b0cb96d51aa57f7a593b7[m
Author: mengyanan <mengyanan@xiaomi.com>
Date:   Mon May 12 16:26:11 2014 +0800

    Small fix,correct spelling mistake

[33mcommit b2d26ecd55eb952ad4dcd281ac3c4db77fbf9ba0[m
Merge: a959bce5 696f665d
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri May 9 14:42:37 2014 +0200

    Merge pull request #910 from mynxyl/replacer
    
    update maven-replacer-plugin version

[33mcommit 696f665de2166a43aa83bba39dae97f493defb27[m
Author: mengyanan <mengyanan@xiaomi.com>
Date:   Fri May 9 19:34:16 2014 +0800

    update maven-replacer-plugin version

[33mcommit a959bce55354e05a57b90aaea68643b164737599[m
Merge: 02ec1db1 5496a0a0
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu May 8 12:37:54 2014 +0200

    Merge pull request #907 from Tibor17/junit.fix
    
    Small refactoring of pom.xml

[33mcommit 5496a0a0639a467899fa02eaea560c6e27a07e18[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu May 8 11:53:10 2014 +0200

    Small refactoring of pom.xml

[33mcommit 4cca68f8c69c95aad2ae10e0917d5864c3e8f709[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Apr 26 02:58:10 2014 +0200

    Use compilerArgs instead of compilerArguments.
    
    The parameter compilerArguments is deprecated.

[33mcommit 26d438356dce6176ef9116348e768c14291131af[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Apr 25 00:38:04 2014 +0200

    Verify javadoc on Travis CI.
    
    The build should fail for Javadoc issues.

[33mcommit e0367cda6dfb92c8cc87744809e91298ebfcba0a[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Apr 24 22:43:22 2014 +0200

    Disable doclint for all groups but accessibility and reference.
    
    With JDK 8, doclint has been added to Javac and Javadoc. It is enabled
    by default but it is too strict for JUnit. The only groups that don't
    report issues are accessibility, reference and syntax. But syntax has
    to be disabled for Javadoc because the Hamcrest classes are reporting
    syntax issues.
    
    Additionally doclint is disabled for JDK < 8, because the -Xdoclint
    argument causes a failing build in JDKs before JDK 8.

[33mcommit 968abcfdd4578a68cb628919acb9a6d88ba44c80[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Apr 24 23:50:50 2014 +0200

    Fix Javadoc issues reported by JDK8's doclint.

[33mcommit b32c0b32a0dc628b9839ea0a7b1f9b64550f772e[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Apr 26 02:33:51 2014 +0200

    Remove outdated documentation.

[33mcommit 02ec1db120714910dbcb7eba1e55595f3904145c[m
Merge: aea63f05 686240ea
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon May 5 09:40:50 2014 +0200

    Merge pull request #896 from BrianBerzins/master
    
    ParentRunner handling of AssumptionViolationException

[33mcommit 686240ea6cc89187c1fa190f077ea6dc73bdb258[m
Author: Brian Berzins (Murasaki) <brianberzins@gmail.com>
Date:   Wed Apr 30 20:10:12 2014 -0500

    ParentRunner to notify of assumption failure instead ignore for assumption violation exceptions

[33mcommit aea63f059d16607879e5710098fdab208d6d5cb0[m
Merge: 5784c8ab a6282ab9
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat May 3 15:16:55 2014 +0200

    Merge pull request #899 from Tibor17/junit.fix
    
    Compiler source/target 1.5 in tests

[33mcommit 5784c8ab4042079a2df939fc5473cbebde697912[m
Merge: f8b36698 56a03468
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat May 3 14:01:49 2014 +0200

    Merge pull request #902 from ancosen/master
    
    #880 Allow static @Rule declarations

[33mcommit 56a03468f394f23a95f3a0cd2e80f2671963941d[m
Author: ancosen <ancosen@gmail.com>
Date:   Sat May 3 09:17:38 2014 +0200

    Fixes #880: Added new error message relative to static @Rule and @ClassRule

[33mcommit a6282ab95e1f4cf308899407b612a0664d6a776f[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat May 3 00:02:44 2014 +0200

    Compiler source/target 1.5 in tests

[33mcommit f8b36698fd080a05aec9329120283599e31f9a2e[m
Merge: cf507ab8 4b7db358
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri May 2 22:20:58 2014 +0200

    Merge pull request #898 from Tibor17/junit.tests
    
    Sniffer plugin to check Java 5 signatures

[33mcommit 4b7db358f6c7f707890087e91b00d0e0a226d666[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri May 2 21:14:41 2014 +0200

    Sniffer plugin to check Java 5 signatures

[33mcommit cf507ab8446f6e8ea0191da998d7607c3e85c787[m
Merge: fc7c72e5 00711f69
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Mon Apr 28 07:08:44 2014 -0700

    Merge pull request #817 from bechte/support-member-classes
    
    Support for hierarchical context hierarchies

[33mcommit 00711f69af5f74d1a5cce573290847b78ce34cec[m
Author: Stefan Bechtold <stefan.bechtold@me.com>
Date:   Sun Feb 9 13:51:27 2014 +0100

     #816: Support for hierarchical context hierarchies - RunWith annotation will be resolved along the hierarchy of non-static member classes.

[33mcommit fc7c72e5b40dcd52f6f6f9a9aaa6e1efe7dbcdbc[m
Merge: c23833ec 17541733
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Apr 26 02:13:14 2014 +0200

    Merge pull request #886 from Tibor17/junit.fix
    
    Reformating pom.xml and ParentRunner

[33mcommit c23833ec31dc6cc2f66256d99805e26a17eadeda[m
Merge: 9e21ea6b 1c1537d3
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Apr 25 14:44:59 2014 -0700

    Merge pull request #884 from stefanbirkner/update-plugins
    
    Update plugins to current versions.

[33mcommit 1754173319b5b3e153cc54cae0c6261707713ca9[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Apr 25 23:25:57 2014 +0200

    Reformating pom.xml and ParentRunner

[33mcommit 1c1537d30e0a2369177cab903f278f3a0823bf13[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Apr 25 21:54:56 2014 +0200

    Update plugins to current versions.
    
    com.google.code.maven-replacer-plugin:maven-replacer-plugin  1.3.8 -> 1.4.1
    maven-changes-plugin .................................... 2.9 -> 2.10
    maven-compiler-plugin .................................. 2.5.1 -> 3.1
    maven-enforcer-plugin ................................ 1.1.1 -> 1.3.1
    maven-jxr-plugin ......................................... 2.3 -> 2.4
    maven-source-plugin .................................... 2.2 -> 2.2.1

[33mcommit 9e21ea6bf4f8291ceb4f0f8a7b529c1f5602d3f1[m
Merge: 62dd5095 46813938
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Wed Apr 23 00:59:14 2014 -0700

    Merge pull request #866 from stefanbirkner/verify-public-test-class
    
    Verify public test class

[33mcommit 468139382cba4eb0142f775de5657b6e9373afa5[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Apr 6 00:10:24 2014 +0200

    Build JUnit with JDK 8 on Travis.
    
    We can now build JUnit with JDK 8, because #749 is fixed.

[33mcommit 88f7a12d472b1157639db5148b29c8a8825802a3[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Apr 6 00:02:03 2014 +0200

    Don't verify the visibility of a method's declaring class.
    
    I would not expect FrameworkMethod.validatePublicVoid(...) to test
    visibility of the declaring class. Since the last commit the runner
    itself verifies that a test class is public. Hence we can safely remove
    this validation from FrameworkMethod.
    
    This fixes #749 (JUnit cannot be build with JDK 8), too.

[33mcommit 1d97da73fdafce8f5cf9d722f23c5cba41b26b70[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Apr 5 22:24:27 2014 +0200

    Verify that test classes are public.
    
    Test classes should be public in order to avoid problems with
    reflection caused by the security manager. Public classes are always
    accesible.

[33mcommit 62dd5095747494e80aa0442adeb4117401a3374c[m
Merge: 63743d52 291639e4
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Apr 21 21:56:48 2014 +0200

    Merge pull request #879 from fhuberts/implementationheaders
    
    Add the default 'Implementation-*' headers to the manifest

[33mcommit 291639e4be030f9072250dfcc128d94b373c0b4e[m
Author: Ferry Huberts <ferry.huberts@pelagic.nl>
Date:   Sat Apr 19 23:40:21 2014 +0200

    Add the default 'Implementation-*' headers to the manifest
    
    Added headers are:
    Implementation-Title:     ${project.name}
    Implementation-Version:   ${project.version}
    Implementation-Vendor-Id: ${project.groupId}
    Implementation-Vendor:    ${project.organization.name}
    
    Related to #878
    
    Signed-off-by: Ferry Huberts <ferry.huberts@pelagic.nl>

[33mcommit 63743d52743cfdb104c38aabec192c8c86fadae0[m
Merge: c399dd68 cb6abf6f
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Apr 17 17:20:19 2014 -0700

    Merge pull request #773 from stefanbirkner/parameterized-runner-factory
    
    Parameterized runner factory

[33mcommit c399dd68dc40ef387db5af94914cfc2e3e156d20[m
Merge: e65558c1 c52397d4
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Apr 15 21:21:00 2014 -0700

    Merge pull request #876 from madrob/#875
    
    Change the Timeout rule to never timeout the test if zero is passed in. Fixes #875

[33mcommit c52397d4d704a85499a17e9d3a2c1bcb8c5f0906[m
Author: Mike Drob <mdrob@cloudera.com>
Date:   Mon Apr 14 11:52:28 2014 -0400

    fixes #875
    
    Fixes https://github.com/junit-team/junit/issues/875
    
    In versions 4.7 through 4.11 setting up a Timeout @Rule with a value of
    0 would result in no timeout. In 4.12 FailOnTimeout switched to using
    FutureTask.get(timeout). That method treats non-positive timeouts to
    mean "timeout right now".
    
    This fix checks that the timeout value is positive before using it,
    and otherwise will wait indefinitely.

[33mcommit e65558c174a8f5c4c7758f0d9dd1ffe027b023d8[m
Merge: dbfd4faa 96cfed79
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Apr 11 20:11:56 2014 -0700

    Merge pull request #871 from clumsy/#177
    
    fixes #177

[33mcommit 96cfed79612de559e454a1a91724a061e8615ae4[m
Author: Alexander Jipa <alexander.jipa@gmail.com>
Date:   Tue Apr 8 23:19:46 2014 +0400

    fixes #177
    
    null check for test class in ErrorReportingRunner

[33mcommit dbfd4faa383f29fae45d265cf628cc4195169dbf[m
Merge: d1b8c04e 07447b5f
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Apr 7 20:35:01 2014 +0200

    Merge pull request #867 from dbrazhnikov/signature_fix
    
    Small fixes, mainly in throws signatures

[33mcommit 07447b5f98989e4456be8ee8acd01cfb3d20b8c0[m
Author: Brazhnikov <brazhnikov.dmitry@gmail.com>
Date:   Sun Apr 6 21:17:18 2014 +0400

    Small fixes, mainly in throws signatures

[33mcommit 745ca05dccf5cc907e43a58142bb8be97da2b78f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Apr 4 21:46:35 2014 +0200

    Delete classes that are deprecated for six years.

[33mcommit d1b8c04e54f0b9e4807fa88a2ff36ad9ba177107[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Apr 3 19:59:10 2014 +0200

    Update Surefire plugin from 2.16 to 2.17.
    
    Keep the plugin up-to-date.
    
    Plugin changes: http://jira.codehaus.org/browse/SUREFIRE/fixforversion/19536

[33mcommit e98d4352c7dee9c575ed69bee49029b8a109d60b[m
Merge: 2ec10d8a e203f4be
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sat Mar 29 10:01:08 2014 -0700

    Merge pull request #858 from AlexYursha/patch-5
    
    Fix a typo in BeforeClass

[33mcommit 2ec10d8ac7383917d3d1252f7012b30c954bc60a[m
Merge: 9c366d88 cb0c4e9f
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Mar 28 15:06:19 2014 -0700

    Merge pull request #859 from pholser/master
    
    For #855, remove FrameworkMethod.getParameterSignatures()

[33mcommit cb0c4e9f7c9be8be7c11e4934f6bd71a312102ec[m
Author: Paul Holser <pholser@alumni.rice.edu>
Date:   Fri Mar 28 15:49:42 2014 -0500

    For #855, remove FrameworkMethod.getParameterSignatures()
    
    Having this method in place made a class from the "core" of JUnit
    (org.junit.runners.model) depend on something from "experimental" --
    a dependency going in the wrong direction.

[33mcommit e203f4bef50e711b2fe974ad987a53debb304548[m
Author: Alex Yursha <alexyursha@gmail.com>
Date:   Fri Mar 28 13:12:21 2014 +0200

    Fix a typo in BeforeClass

[33mcommit 9c366d887c625b04ce7efbafa4ff42091bb343e5[m
Merge: 2cd6f108 27defc43
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Mar 21 12:00:16 2014 +0100

    Merge pull request #849 from kryger/patch-1
    
    @ displayed incorrectly in javadocs

[33mcommit 27defc432bb2c44ee77c78e27476ed87eaa9dad3[m
Author: Lukasz Kryger <lukasz.kryger@gmail.com>
Date:   Fri Mar 21 10:52:30 2014 +0000

    @ displayed incorrectly in javadocs
    
    This is how it's displayed when rendered: http://junit.org/javadoc/latest/org/junit/Assume.html
    
    Used the same escaping strategy as in RunWith's javadocs source (https://github.com/junit-team/junit/blob/master/src/main/java/org/junit/runner/RunWith.java)

[33mcommit 2cd6f108a04f782c3abcf245de85fbe4b7a5316d[m
Merge: b6145142 db17e5f2
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Mar 20 21:14:41 2014 +0100

    Merge pull request #787 from stephenc/generate-site
    
    [Issue #785] Add site configuration and reporting

[33mcommit b61451425609fcb1c7cc68d50e420bdedc461282[m
Merge: 29a1fcc7 674bb8f2
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Mar 20 21:12:57 2014 +0100

    Merge pull request #846 from AlexYursha/master
    
    Improve code readability by using the bean-like naming convention.

[33mcommit 674bb8f296b0bc7bbfbd8a1126cff2d98333bbf2[m
Author: Alex Yursha <alexyursha@gmail.com>
Date:   Thu Mar 20 16:56:24 2014 +0300

    Make code more readable

[33mcommit 29a1fcc75c65ea21d421c3876221683879dd7d29[m
Merge: 95f56b32 9a0aec8f
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Mar 20 12:15:16 2014 +0100

    Merge pull request #845 from AlexYursha/patch-1
    
    Remove redundant "extends" clause

[33mcommit db17e5f259968195deff973ba986cb93400e5cb8[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Mar 20 11:13:36 2014 +0000

    switch to version 2.5 of the release plugin to ensure compatibility with a broad range of git client versions

[33mcommit 759d24e0bdf40238d20e113eab2e610f91df5c7f[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Mar 20 11:12:26 2014 +0000

    removing redundant content

[33mcommit 9a0aec8f0f59b2e58d691ef3326f2d0e5fcee60b[m
Author: Alex Yursha <alexyursha@gmail.com>
Date:   Thu Mar 20 13:12:22 2014 +0200

    Remove redundant "extends" clause
    
    Clean up code and make it more readable by eliminating redundant information.

[33mcommit 95f56b32ef3950e83273335e1ba6c2b6cf1a5540[m
Merge: a90b5ee0 15bd929c
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Mar 6 00:14:55 2014 +0100

    Merge pull request #818 from dhasday/external-assumption-violated-exception
    
    External version of AssumptionViolatedException

[33mcommit 15bd929c08059a6c7bf83363e9b84d116ef46540[m
Author: dhasday <dhasday@gmail.com>
Date:   Wed Feb 12 00:07:06 2014 -0500

    Create AssumptionViolatedException in org.junit and deprecate the one in org.junit.internal
    
    Allows developers to write code that handles assumption violations without depending on internal classes

[33mcommit a90b5ee012b706a0c0f20b68f62a46f6118a5f3b[m
Merge: 1360f9b6 3189af00
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Mar 4 22:43:10 2014 +0100

    Merge pull request #836 from paulkrause88/patch-1
    
    Remove redundant field fCause

[33mcommit 3189af007b26d74ca459f823d57ef77b9c1697b8[m
Author: Paul Krause <paulkrause88@users.noreply.github.com>
Date:   Mon Mar 3 16:57:12 2014 -0500

    Remove redundant field fCause

[33mcommit 1360f9b696f2fb1bc32b16b070ffb3363a88864f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Feb 28 23:53:43 2014 +0100

    Update Maven GPG plugin from 1.4 to 1.5.
    
    Just to keep up-to-date. Release notes: http://jira.codehaus.org/browse/MGPG/fixforversion/17635

[33mcommit 8f2dd0038a88d5f7054ef39ce029cd1cf862bac2[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Feb 27 09:48:33 2014 +0000

    Remove inkscape and sodipodi tags and namespace

[33mcommit 0b3bcf3aa152ae82c0d23b56106781e3376615be[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Feb 27 09:46:20 2014 +0000

    Remove author tag left in from copy&paste

[33mcommit ba05e19d797bfbeb81b70dc6221216c543036c3f[m
Merge: 8a63df4c a490b635
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Feb 26 21:27:25 2014 +0100

    Merge pull request #819 from josephw/master
    
    Remove obsolete list of done items.

[33mcommit cb6abf6fc729f07c5d60b0756e91af444400b4b5[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Nov 25 22:37:12 2013 +0100

    Use a ParametersRunnerFactory for creating the test for a set of parameters.
    
    There's now an explicit component for creating the runner of a single set of parameters. IMHO this is a better extension point than overriding a method.
    
    The factory can be specified by the @UseParametersRunnerFactory
    annotation or you can subclass the Parameterized class and provide
    the factory to its constructor.

[33mcommit dca4a949f93bb85cc8ee0eb8789979a18aa3ffc7[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Nov 22 09:40:06 2013 +0100

    Extract BlockJUnit4ClassRunnerWithParameters.
    
    Separate the class from the Parameterized runner. Makes it clear, that it is designed for reuse.

[33mcommit 3e08f69912d69189e895c279b1bece0c7c0840f4[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Nov 21 08:45:04 2013 +0100

    Create a class TestWithParameters.
    
    This class keeps the data together that are needed for creating a runner for a single data set of a parameterized test. This makes it also clear, that the computation of the name is not the responsibility of the runner but of the Parameterized class.

[33mcommit 8a63df4c826ea1f0faae0d50958c330dd88d3651[m
Merge: fe64a2f9 b064a274
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Feb 26 13:41:32 2014 +0100

    Merge pull request #834 from mallamanis/master
    
    Renaming variables for codebase consistency

[33mcommit b064a274adb12c6e866cb08dedc70534237330b2[m
Author: Miltos Allamanis <m.allamanis@ed.ac.uk>
Date:   Tue Feb 25 18:24:04 2014 +0000

    Renamed all Throwables "t" to "e" for naming consistency.

[33mcommit 2745d016f648e783360bd076f23b36908f8125b0[m
Author: Miltos Allamanis <m.allamanis@ed.ac.uk>
Date:   Tue Feb 25 18:04:10 2014 +0000

    Renamed "oldPrintStream" to "oldOut" to make the naming slightly
    more consistent.

[33mcommit 41092ce4e01cc57d8aa1911e2f1169e0f355b1ae[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Oct 31 23:54:25 2013 +0100

    Move TestClassTest to package org.junit.runners.model.
    
    It is common to add tests to the same package as the class under test.

[33mcommit d70ca7f71cad6282d389e1703e47b6b0639cde9e[m
Author: Miltos Allamanis <m.allamanis@ed.ac.uk>
Date:   Tue Feb 25 10:20:08 2014 +0000

    Renamed "result" (18.69%) to "suite" (81.31%). The naturalize tool detected
    that using "suite" is more consistent with the current codebase state.

[33mcommit fe64a2f9588814e44dff66e47d8ab32634704d5b[m
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Mon Feb 24 08:12:04 2014 -0800

    Update CONTRIBUTING.md
    
    Minor reformatting. Add clarification on reformatting. Discuss fixing bugs.

[33mcommit 6f23cbe260f93c800eba567790560ba0f3cbdc57[m
Merge: bd6b059e 039329fa
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Feb 21 10:54:45 2014 -0700

    Merge pull request #831 from vbauer/final-fields
    
    Close possibility to make reassignment for some constant-fields

[33mcommit 039329fa41a35b9c313cdcdd6ec868c9a920dd5a[m
Author: Vladislav Bauer <bauer.vlad@gmail.com>
Date:   Fri Feb 21 21:35:50 2014 +0700

    Close possibility to make reassignment for some constant-fields

[33mcommit bd6b059e5e34084870729e1111faa3ea19c06f94[m
Merge: 1077e632 74fa3d09
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Feb 21 14:59:54 2014 +0100

    Merge pull request #828 from vbauer/npe-param-assert-error
    
    Fix possible NPE in method equals (ParameterizedAssertionError)

[33mcommit 74fa3d0957e59a3f1122ed8eb69b9e65ef924252[m
Author: Vladislav Bauer <bauer.vlad@gmail.com>
Date:   Thu Feb 20 18:59:02 2014 +0700

    Fix possible NPE in method equals (ParameterizedAssertionError)

[33mcommit 1077e63243f2e754ca6a2a690e8bc6e3e37f4d52[m
Merge: 970f20cf 288f606a
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Feb 20 20:19:06 2014 +0100

    Merge pull request #829 from seize-the-dave/master
    
    Java syntax highlighting in markdown-formatted release notes.

[33mcommit 288f606a5f03102fc49683b9f62be48b52e55895[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 19:10:26 2014 +0000

    Highlight java syntax

[33mcommit f93e04cb2ee214c8f700c326ad68a9c1aea8f05f[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 19:09:03 2014 +0000

    Highlight java syntax

[33mcommit 7185638bd5046f2fdbe845c73df03d2e2f1ae546[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 19:07:02 2014 +0000

    Highlight java syntax

[33mcommit 460b5e7ae52d347a94b74975eeda50f30bd6ea6b[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 19:01:46 2014 +0000

    Highlight java syntax

[33mcommit 6a89eb6dc62093d8f6d41d54152da5592808c38e[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 18:59:14 2014 +0000

    Highlight java syntax

[33mcommit 888a35c0d980c0f1fd5f64f4c2e32a21e5d1a512[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 18:54:09 2014 +0000

    Highlight java syntax

[33mcommit 970f20cf3b947fbf681220b9bfe051b5381fb4e9[m
Merge: cfa4583f 2ceb3f3e
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Feb 20 17:40:08 2014 +0100

    Merge pull request #827 from seize-the-dave/master
    
    Highlight Java code in 4.11 release notes

[33mcommit 2ceb3f3e30ed89dc80f17d82105ee35f974494dd[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 16:33:31 2014 +0000

    Fixed whitespace issue.

[33mcommit 30a42c9ecbd84bc3ae48ed45632a2b54147ea28a[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 16:30:42 2014 +0000

    Removed additional indenting.

[33mcommit 0ec8d579016420f5d05e1bfff68174124bc589e4[m
Author: Dave Grant <david@grant.org.uk>
Date:   Thu Feb 20 15:54:36 2014 +0000

    Highlight Java code in 4.11 release notes

[33mcommit cfa4583f9fe7a00a28d1948137cd5c4812791da2[m
Merge: 161f656f 8a6ada28
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Feb 19 09:26:13 2014 +0100

    Merge pull request #824 from vbauer/remove-string-buffers
    
    Replace StringBuffer to StringBuilder

[33mcommit 8a6ada28b1b763d1eecb009716e8c75660271565[m
Author: Vladislav Bauer <bauer.vlad@gmail.com>
Date:   Wed Feb 19 00:48:14 2014 +0700

    Remove unnecessary usage of StringBuilder class (Java compiler will do it)

[33mcommit 2859b41ad921d7f525c8dff5a3a9a5a0eb8d68b9[m
Author: Vladislav Bauer <bauer.vlad@gmail.com>
Date:   Sun Feb 16 20:57:23 2014 +0700

    Replace StringBuffer to StringBuilder. Rename "buffer" to "sb" (in case of usage StringBuilder)

[33mcommit 161f656f9a792628971a59b60f6c23c72a5b4582[m
Merge: eb8b5ee1 baf1ea01
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Feb 18 09:27:18 2014 -0800

    Merge pull request #823 from askoog/timedoutexception
    
    Throw TestFailedOnTimeoutException instead of plain Exception on timeout. Fixes #771

[33mcommit baf1ea01ec9c1ca2ba3091c493f0aedeab725560[m
Merge: f03bc79e eb8b5ee1
Author: Andreas Skoog <github@locha.se>
Date:   Sat Feb 15 13:59:58 2014 +0100

    Merge branch 'master' of https://github.com/junit-team/junit into timedoutexception
    
    Conflicts:
            src/test/java/org/junit/tests/AllTests.java

[33mcommit eb8b5ee18ac02eb345ac54cc5bb15d4d3afc4fd4[m
Merge: c8b0f351 4802748c
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Feb 14 20:04:41 2014 -0800

    Merge pull request #820 from vbauer/asserts-memory-consumption
    
    Optimize memory consumption in junit.framework.Assert

[33mcommit 4802748c44552f844a8ccec16ba0cda2765db0f6[m
Author: Vladislav Bauer <bauer.vlad@gmail.com>
Date:   Fri Feb 14 17:28:38 2014 +0700

    assertEquals: use old behavior (new Double, new Float)

[33mcommit c8b0f3510d4de4843b9b080e116df63ee36279d2[m
Merge: 6dd24ff4 f4682ce2
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Feb 13 09:39:49 2014 -0800

    Merge pull request #769 from reinholdfuereder/fix-warnings
    
    Fix many warnings (Eclipse 4.2/Juno based)

[33mcommit be322bce19656224268c0c4401792ab65e1db54f[m
Author: Vladislav Bauer <bauer.vlad@gmail.com>
Date:   Fri Feb 14 00:05:25 2014 +0700

    Optimize memory consumption in deprecated junit.framework.Assert

[33mcommit f4682ce2558cdca60d12fbef39e9ca0370eba592[m
Merge: ae1ffc9b 6dd24ff4
Author: reinholdfuereder <reinholdfuereder@gmx.at>
Date:   Thu Feb 13 11:15:27 2014 +0100

    Merge branch 'master' into fix-warnings
    
    Conflicts:
            src/test/java/org/junit/tests/running/classes/ParentRunnerTest.java
            src/test/java/org/junit/tests/running/classes/TestClassTest.java

[33mcommit ae1ffc9b47480383c541c9434463e3468b1b7168[m
Author: Reinhold Füreder <reinholdfuereder@gmx.at>
Date:   Thu Feb 13 00:43:55 2014 -0800

    Revert on request of kcooney:
    #769 Fix many warnings (Eclipse 4.2/Juno based)
    - Enh: add new "staticondemandthreshold" setting to eclipse project jdt.ui preference settings file (although this is in fact not related to kcooney's import ordering change comment)

[33mcommit a490b635abd4d49d85ce2a2c057988c64efead8a[m
Author: Joseph Walton <joe@kafsemo.org>
Date:   Wed Feb 12 23:21:43 2014 +1100

    Remove obsolete list of done items.
    
    - Remove the unmaintained list of completed items; new work
       is recorded in the release notes.
    - Remove completed or obsolete items from to-do.txt.

[33mcommit ecd5f06988192bffed1ea4c94691e5f42347bfd9[m
Author: Reinhold Füreder <reinholdfuereder@gmx.at>
Date:   Wed Feb 12 02:41:13 2014 -0800

    #769 Fix many warnings (Eclipse 4.2/Juno based)
    - Ref: According to kcooney's comment change the signature of CategoryFilterFactory.createFilter() to take in a List<Class<?>> instead

[33mcommit 0733bbffdadf05a6ebe0c38942904071a4060af4[m
Author: Reinhold Füreder <reinholdfuereder@gmx.at>
Date:   Wed Feb 12 02:26:05 2014 -0800

    #769 Fix many warnings (Eclipse 4.2/Juno based)
    - Enh: add new "staticondemandthreshold" setting to eclipse project jdt.ui preference settings file (although this is in fact not related to kcooney's import ordering change comment)

[33mcommit 6dd24ff4c2b18160ee770b5baa08f4de7056eef1[m
Merge: 274041d2 c9ce4263
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Wed Feb 5 00:28:16 2014 -0800

    Merge pull request #811 from stefanbirkner/maven-migration
    
    Maven migration

[33mcommit c9ce426393f2e91735c12b418311f8066bc7cc0e[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Feb 4 22:44:05 2014 +0100

    Delete all Ant releated files.
    
    Part of the migration from Ant to Maven.

[33mcommit 30b54b485a46911360d5fe6f1fb4316a1a2a2dc0[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Feb 4 22:42:22 2014 +0100

    Tell the people to use Maven instead of Ant.
    
    Part of the migration from Ant to Maven.

[33mcommit 274041d233beb9d4e79e954c7fbaa0711bae58f6[m
Merge: c9ceb59d 84dcb64c
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Mon Feb 3 16:53:57 2014 -0800

    Merge pull request #808 from stefanbirkner/exception-testing
    
    Add reference to ExpectedException. Fixes #806.

[33mcommit c9ceb59d9d459183154fe6e357bee6cb0f504d19[m
Merge: e792dc49 1a5eb104
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Mon Feb 3 16:52:45 2014 -0800

    Merge pull request #810 from stefanbirkner/parameterized-docs
    
    Mention required modifiers of @Parameters method. Fixes #809.

[33mcommit 1a5eb10451f2cc6fdc1666739c14507790137841[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Feb 3 23:46:57 2014 +0100

    Mention required modifiers of @Parameters method. Fixes #809.

[33mcommit 84dcb64cf07eba08fd7ef4de3a6aaf21f4944157[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jan 29 01:07:02 2014 +0100

    Add reference to ExpectedException. Fixes #806.
    
    The ExpectedException can be used for better exception testing. The
    reference should guide the reader to its documentation.

[33mcommit e792dc49f28bdd4cdc3bcc9898bbb9d49f25e0d3[m
Merge: 15566c4b 9d3821f6
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Jan 23 22:30:52 2014 -0800

    Merge pull request #753 from stefanbirkner/modularize-validator
    
    Extract annotations validation to a single class.

[33mcommit 9d3821f6411ad85a683b8d38e4d42411229f2eec[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Sep 27 01:13:22 2013 +0200

    Extract annotations validation to a single class.
    
    The AnnotationsValidator can be used by any runner now. TestClass
    does not provide access to the internal maps of fields and methods
    anymore.

[33mcommit 15566c4b6633db5cc84cae78088b36346b7d42f4[m
Merge: 1c6c1616 0abc0207
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sun Jan 19 19:44:08 2014 -0800

    Merge pull request #798 from btakashi/master
    
    Fix sample ListTest comments, testing ArrayList not Vector

[33mcommit a231c3e176d16f298b75ec78f5088d078e4ad4cf[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Wed Jan 15 14:29:16 2014 +0000

    Firefox has issues if a javascript: link does not return 'undefined'

[33mcommit afb3eec9ac27b55faae4b7d4f562d9f1ce514293[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Fri Jan 10 20:13:51 2014 +0000

    fix js link

[33mcommit 8f98c584dff59b52958af026cfc27fdf031fca52[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Fri Jan 10 14:41:44 2014 +0000

    fix metadata

[33mcommit a664c207facb1cddcd5ab130fc14edbae3f33d30[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Fri Jan 10 14:08:02 2014 +0000

    Fix distribution management

[33mcommit 79a71342a43577380e038611349df16554d9faee[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Fri Jan 10 14:00:09 2014 +0000

    Add multi-markdown style metadata now that doxia-module-markdown is 1.5

[33mcommit 75cce069e369c553e5d7690b601c06f08b74edca[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Fri Jan 10 13:58:23 2014 +0000

    doxia-module-markdown 1.5 supports page titles

[33mcommit 0abc020742dd0be0e6f5729b17cad2a0df73d671[m
Author: Brian Takashi Hooper <b-hooper@m3.com>
Date:   Thu Jan 9 23:04:06 2014 +0900

    ListTest for List, not Vector

[33mcommit f03bc79e913f70a6efd4e05e26436a6942efc53f[m
Author: Andreas Skoog <github@locha.se>
Date:   Tue Jan 7 09:22:19 2014 +0100

    minor javadoc change

[33mcommit a4f088dcc647409c3612a55480a9908755b52f31[m
Author: Andreas Skoog <github@locha.se>
Date:   Tue Jan 7 09:13:16 2014 +0100

    minor formatting change

[33mcommit 1c6c16160c572c6d6f38a7b2b11cb23bb1dd2575[m
Merge: 34a2e246 9fcdd99b
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Jan 7 00:00:45 2014 -0800

    Merge pull request #795 from btakashi/patch-1
    
    Update CODING_STYLE

[33mcommit 34a2e246efe2d9513f95ebbc873b2e8f1e1fc230[m
Merge: 9052793a fb7925bf
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 6 17:25:35 2014 -0800

    Merge pull request #796 from based2/patch-1
    
    surefire and javadoc maven plugin updates

[33mcommit 9052793aa79711fd71d05ac5a902fc1eb4ce4b14[m
Merge: 13b33278 4512777f
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 6 17:25:22 2014 -0800

    Merge pull request #780 from pimterry/paramAssertionError
    
    Make parameterized assertion error extend assertion error

[33mcommit 13b33278b42f3f4bfa37c88795b60b4e842da976[m
Merge: 21898b1b fbb1efed
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sun Jan 5 19:06:09 2014 -0800

    Merge pull request #791 from stefanbirkner/member-improvement
    
    Improve FrameworkMember, FrameworkMethod and FrameworkField

[33mcommit fb7925bf75ffe9f802f54e2d717af11b58c75725[m
Author: based2 <based2@users.noreply.github.com>
Date:   Sat Jan 4 22:19:07 2014 +0100

    surefire and javadoc maven plugin updates

[33mcommit 9fcdd99b191f4330a0ab6694a72ff2a6701f9a6e[m
Author: Brian Takashi Hooper <b.takashi@gmail.com>
Date:   Sat Jan 4 23:41:11 2014 +0900

    Update CODING_STYLE
    
    Fixed misspelling: paramater -> parameter

[33mcommit fbb1efed56f2b495d68a598d5345cbc95b118d35[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Dec 23 00:02:07 2013 +0100

    Remove duplicate code.

[33mcommit 52e93b4fe3c4133118f33635ea8517a13ff05321[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Dec 22 23:40:55 2013 +0100

    Change visibility of field fMethod to private.
    
    There is a getter method for this field. Users should use this method.

[33mcommit 0e1a559e1371aa9929ca4f61f87cf8f9a5923ce7[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Dec 22 23:23:17 2013 +0100

    Override toString() with meaningful implementation.
    
    The new implementation provides more useful information.

[33mcommit 4e9f1a65ca8d794db54260b4f2e5b078d949fdda[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Dec 22 23:05:06 2013 +0100

    Prevent creation of FrameworkMethod or FrameworkField without underlying member.
    
    The classes are relying on an underlying member. Fail early, because this makes it easier to find mistakes.

[33mcommit 26c25f3dbf524f4efd90e97f41c6df10345e78a9[m
Author: Andreas Skoog <github@locha.se>
Date:   Wed Dec 25 15:21:10 2013 +0100

    Rename TestFailedOnTimeoutException -> TestTimedOutException

[33mcommit 9c5a2f28935a2d816ac14894d6c7cfb3c32a98f6[m
Merge: 66bfb24d 21898b1b
Author: Andreas Skoog <github@locha.se>
Date:   Wed Dec 25 15:12:01 2013 +0100

    Merge remote-tracking branch 'upstream/master'

[33mcommit 21898b1b9fd784d9e9f519814ad0b2026049a1c1[m
Merge: 86fbf456 c1895d12
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Dec 24 09:56:56 2013 -0800

    Merge pull request #765 from adam-beneschan/742
    
    changes to address kcooney's concerns about thread safety on issue #742

[33mcommit 86fbf456ccd60760a9f1d553fb957141d2e82e0c[m
Merge: 00dadffa 6f817017
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Tue Dec 24 09:32:23 2013 -0800

    Merge pull request #790 from PissedCapslock/master
    
    Added missing javadoc for delta parameter

[33mcommit 6f817017ec28e93d83bd75aa052a8b24cf3be473[m
Author: Robin Stevens <stevensro@gmail.com>
Date:   Sat Dec 21 18:49:53 2013 +0100

    Added missing javadoc for delta parameter in the assertArrayEquals methods

[33mcommit 00dadffa6e556ab82219c7b576139ad4371a39dd[m
Merge: c6ab1aff 967438d4
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Fri Dec 20 11:16:06 2013 -0800

    Merge pull request #789 from PissedCapslock/master
    
    Fixed typo and added link to the RuleChain class

[33mcommit 967438d490ac741cd188999946b51d6b5b348acf[m
Author: Robin Stevens <stevensro@gmail.com>
Date:   Thu Dec 19 18:40:50 2013 +0100

    Fixed typo and added link to the RuleChain class

[33mcommit 690a4c01e128e9abe1becbe296ac044e508184f7[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Tue Dec 17 09:40:58 2013 +0000

    Linked-in's hopscotch is much better at intros... and ASL license to boot

[33mcommit b11e20e92b2bb1d11c8832db0a96566d09885fc0[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Mon Dec 16 14:07:46 2013 +0000

    [Issue #785] Add site configuration and reporting

[33mcommit c6ab1aff3076a4335554699ec64f5b02ff1f654c[m
Merge: 1029290b 26e5df2e
Author: David Saff <saff+aa@google.com>
Date:   Fri Dec 13 17:31:04 2013 -0800

    Merge pull request #776 from stefanbirkner/travis
    
    Add support for Travis CI (http://travis-ci.org).

[33mcommit 26e5df2e229663ede614933ede8ad955bf7150c5[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Nov 26 03:46:38 2013 +0100

    Add support for Travis CI (http://travis-ci.org).
    
    Simple CI for branches of JUnit forks. Now everybody can easily use CI for own branches. Pull requests are automatically build by the CI and the build result is visible on Github.

[33mcommit 66bfb24d328bd480e31c3834cfdfdca53173c62a[m
Author: askoog <github@locha.se>
Date:   Wed Dec 4 15:32:54 2013 +0100

    Refactor test, replace matcher with try catch

[33mcommit 4512777f2f994283323a2d1d253386c8c797f701[m
Author: pimterry <pimterry@gmail.com>
Date:   Mon Dec 2 02:57:24 2013 +0000

    Make parameterized assertion error extend assertion error

[33mcommit 6a302a675232ebb78ed51ed0bb33681f4797c81f[m
Author: Andreas Skoog <github@locha.se>
Date:   Mon Dec 2 13:53:02 2013 +0100

    minor code review changes

[33mcommit bf2f922c9445e6ee24891f64a5a7ca0e68f7f786[m
Author: Andreas Skoog <github@locha.se>
Date:   Mon Dec 2 13:52:00 2013 +0100

    Add second test verifying the time unit and timeout value fields of the
    thrown exception

[33mcommit b645d2b5055f8eb96cf8511e15c3eb5edf5e4dc9[m
Author: Andreas Skoog <github@locha.se>
Date:   Fri Nov 29 12:31:04 2013 +0100

    Use TestFailedOnTimeoutException when test times out

[33mcommit 619f4ff569542e0d03787bdb76ad3d4e3ec3e423[m
Author: Andreas Skoog <github@locha.se>
Date:   Fri Nov 29 12:30:28 2013 +0100

    Improvements after code review. Move Exception to non internal package
    and provide getters for timeout and time unit

[33mcommit dcc298cf98108fde395495e78ac4f28a9cdc496e[m
Author: Andreas Skoog <github@locha.se>
Date:   Thu Nov 28 18:51:06 2013 +0100

    Throw TestFailedOnTimeoutException instead of plain Exception on
    timeout. Fixes #771

[33mcommit cf870c0bebf6ca9631594845cd558e1f4fb78b29[m
Author: reinholdfuereder <reinholdfuereder@gmx.at>
Date:   Thu Nov 21 22:18:44 2013 -0800

    Fix many warnings (Eclipse 4.2/Juno based)

[33mcommit 1029290bc93463782a8642006b61f78a6c35c225[m
Merge: 0cc40391 9fbafd6a
Author: David Saff <saff+aa@google.com>
Date:   Wed Nov 20 15:04:57 2013 -0800

    Merge pull request #764 from ferstl/classrule-in-public-class
    
    Verify that all (base-) classes declaring @ClassRules are public

[33mcommit 9fbafd6a2e90dc2cd04ae71597cd5a56b96cc403[m
Author: Stefan Ferstl <st.ferstl@gmail.com>
Date:   Thu Nov 14 18:11:13 2013 +0100

    Verify that all (base-) classes declaring @ClassRules are public
    - Add the new method getDeclaringClass() to FrameworkMember
      - FrameworkMethod will return the class where the method is actually
        declared
      - FrameworkField will return the class where the field is actually
        declared
    - Add validation logic to RuleFieldValidator
    - Add test for validation logic

[33mcommit 0cc40391bc3ed026b1c436375c31a2614c883cdf[m
Merge: a14fc5f1 dc5f4661
Author: David Saff <saff+aa@google.com>
Date:   Fri Nov 15 19:07:12 2013 -0800

    Merge pull request #763 from motlin/master
    
    Allow custom test runners to create their own TestClasses and customize the scanning of annotations.

[33mcommit c1895d120e68c17d6dd4378884e53be0cc351369[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Fri Nov 15 12:06:50 2013 -0800

    changes to address kcooney's concerns about thread safety on issue #742

[33mcommit dc5f4661240f98469f498e6ab69a1512c8b39d0c[m
Author: Craig P. Motlin <craig@motlin.com>
Date:   Wed Nov 13 22:08:16 2013 -0500

    Allow custom test runners to create their own TestClasses and customize the scanning of annotations.

[33mcommit a14fc5f174c08a9ff6e97b266ae3d84efcbd84e6[m
Merge: 105c6a1e 34883d6e
Author: David Saff <saff+aa@google.com>
Date:   Tue Nov 12 14:29:45 2013 -0800

    Merge pull request #752 from flpa/380
    
    Proposed fix for #380: @BeforeClass and @AfterClass methods are still run even if no tests will be run.

[33mcommit 34883d6e3b40704365d67c43af063ccdfa6a4828[m
Author: flpa <flpa.dev@zoho.com>
Date:   Tue Nov 12 21:47:51 2013 +0100

    Formatting changes
    
    Space between 'if' and '(', '!expression' instead of 'expression ==
    false'

[33mcommit 105c6a1eba0f9de6c8bde0cd8250455042c40d47[m
Author: David Saff <saff+aa@google.com>
Date:   Mon Nov 11 16:46:23 2013 -0500

    Make numbered list format correctly in markdown

[33mcommit 6d572661eee611a1db7161e14b535b01d2c320ca[m
Merge: 0c6f4dc0 d24f6393
Author: David Saff <saff+aa@google.com>
Date:   Mon Nov 11 13:45:35 2013 -0800

    Merge pull request #762 from stefanbirkner/contributing
    
    Add contributing guidelines.

[33mcommit d24f63930fca2b94db3ed5fcf994f61fe562ed96[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Nov 10 13:01:09 2013 +0100

    Add contributing guidelines.
    
    Hopefully this is helpful to new contributors. Github displays these guidelines when a new issue or pull request is created (https://github.com/blog/1184-contributing-guidelines).

[33mcommit f925a047a6e8e6c6f6996dc19a4ab9b3fc35a3ba[m
Author: flpa <flpa.dev@zoho.com>
Date:   Sat Nov 9 22:16:31 2013 +0100

    Re-worked ParentRunner changes
    
    Re-worked changes in ParentRunner for not executing
    BeforeClass/AfterClass/ClassRules when all tests are ignored. The class
    now determines whether any runnable children remain by calling
    isIgnored/1 on each child returned by getFilteredChildren/0.
    Because of this simplification, this changeset resets many parts of the
    class to their state on the current master branch.

[33mcommit 0c6f4dc02e93f5ceb83a5f2b14d89f2bff201be2[m
Merge: 1bb6d041 13ff0f99
Author: David Saff <saff+aa@google.com>
Date:   Tue Nov 5 04:37:36 2013 -0800

    Merge pull request #759 from adam-beneschan/master
    
    replaced use of Arrays.copyOf for Java 1.5 compatibility

[33mcommit 13ff0f993803b7df6d155e95495410e7290da732[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Thu Oct 31 13:24:26 2013 -0700

    replaced use of Arrays.copyOf for Java 1.5 compatibility

[33mcommit 1bb6d041ca237475ca600248b60654a74e437968[m
Merge: a8767914 6a756d53
Author: David Saff <saff+aa@google.com>
Date:   Thu Oct 31 12:11:28 2013 -0700

    Merge pull request #742 from adam-beneschan/master
    
    #727 Fail on timeout displays stack of stuck thread

[33mcommit 6a756d53f90fe0765ce1adbf1203cc0acbc618b9[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Thu Oct 31 11:45:56 2013 -0700

    restored .gitignore to make git happy

[33mcommit d317f01b947cbef518aeae1bbb92c95aec918253[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Thu Oct 31 09:24:49 2013 -0700

    restored settings files to try to make git happy

[33mcommit a8767914d0ff31415f7b2740c8c5fbc3f1fabd08[m
Merge: eaa2799d d8cd6390
Author: David Saff <saff+aa@google.com>
Date:   Wed Oct 30 18:19:11 2013 -0700

    Merge pull request #756 from stefanbirkner/code-style
    
    Insert space before assigment operator according to CODING_STYLE.

[33mcommit d8cd6390a328c801cd5259125c5d5ee48e8cb6d3[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Oct 29 21:16:55 2013 +0100

    Insert space before assigment operator according to CODING_STYLE.

[33mcommit eaa2799d6c25950b38f76efe05a17eed077e6776[m
Merge: 192920c1 51f22b5c
Author: David Saff <saff+aa@google.com>
Date:   Mon Oct 28 10:36:01 2013 -0700

    Merge pull request #723 from brettchabot/master
    
    Properly handle case where filter removes all JUnit3 tests in suite.

[33mcommit 192920c16666f2ef9ec3955b513ce7e2a7001d40[m
Merge: da0a727e b560fce6
Author: David Saff <saff+aa@google.com>
Date:   Fri Oct 25 17:39:38 2013 -0700

    Merge pull request #754 from codingricky/release-notes
    
    added ReleaseNotes for 4.5

[33mcommit b560fce6b4323e1fd4d37c703d7123f1508643cb[m
Author: Ricky <ricky@dius.com.au>
Date:   Fri Oct 25 15:59:44 2013 +1100

    added ReleaseNotes for 4.5

[33mcommit da0a727ebfcfee036d760d52f574f7b07aba7df2[m
Merge: a71f8c16 d9054149
Author: David Saff <saff+aa@google.com>
Date:   Wed Oct 23 17:38:22 2013 -0700

    Merge pull request #684 from codingricky/annotation-validators
    
    Add AnnotationValidator, and validation checks for Category (fix for issue #93)

[33mcommit 0956a4e6a236e9414c0d19a349206f3350501c60[m
Author: flpa <flpa.dev@zoho.com>
Date:   Thu Oct 24 00:12:42 2013 +0200

    Draft: Changed implementation for detecting when a class has no tests to
    run: Replaced special case object by an abstract Statement that is aware
    of the children it will run. This allows us to evaluate whether a
    statement has any tests to run using the isIgnored(T) method added in
    the previous commit - any further handling of ignored tests will be done
    by the actual implementation. ParentRunner just takes care of not
    executing the BeforeClass/AfterClass methods and ClassRules if no tests
    are remaining.

[33mcommit 5cdd702717c5ca7dd3002e95847232681c445127[m
Author: flpa <flpa.dev@zoho.com>
Date:   Wed Oct 23 23:16:10 2013 +0200

    Moved isIgnored-check from FrameworkMethod to BlockJUnit4ClassRunner -
    the method overrides an empty default implementation in ParentRunner.

[33mcommit f521f9003ac3629373e3dee5112b50e098db4a36[m
Author: flpa <florian-p@gmx.net>
Date:   Tue Oct 22 01:16:10 2013 +0200

    final cleanup in ParentRunner

[33mcommit 445ea85dd748e4e83cf7be5940b41df95b3ffa8d[m
Author: flpa <florian-p@gmx.net>
Date:   Tue Oct 22 01:03:06 2013 +0200

    minor changes in test

[33mcommit 706c38a81f4ebb142855ee3be27e88fa8eca18e9[m
Author: flpa <florian-p@gmx.net>
Date:   Tue Oct 22 01:01:28 2013 +0200

    cleanup and javadoc adaptions in ParentRunner

[33mcommit e9b0dda59f37f491052e3c6f71c7f1c281492a9f[m
Author: flpa <florian-p@gmx.net>
Date:   Tue Oct 22 00:20:58 2013 +0200

    organized imports in framework method

[33mcommit d0642128fec2d0abad53131f32b0d8e86035ef50[m
Author: flpa <florian-p@gmx.net>
Date:   Tue Oct 22 00:19:53 2013 +0200

    test cleanup

[33mcommit 17b56df85a6c055bb937e16fe1f2ad9d3e49f18c[m
Author: flpa <florian-p@gmx.net>
Date:   Tue Oct 22 00:07:50 2013 +0200

    moved new test to 'running' subpackage

[33mcommit 4df71abb70690c98d42787bfe9f098f9fff01946[m
Author: flpa <florian-p@gmx.net>
Date:   Tue Oct 22 00:06:36 2013 +0200

    test restructuring - back to one class, again

[33mcommit ce9bc582a64e3ec1364621b4971e22d584c8d992[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 23:09:51 2013 +0200

    minor test refactoring

[33mcommit e70ed85b5732a42791fd5f8df0acd411f223abab[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 22:40:57 2013 +0200

    ParentRunner: replaced special case class by static special case object,
    minor method name change

[33mcommit 7566c1da93069c00c961e37979db44ce6aa00830[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 22:04:47 2013 +0200

    test polishing

[33mcommit fd1ef3ca8069bd149ca63c9660587918aa28c7cd[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 19:03:33 2013 +0200

    minor ParentRunner refactoring

[33mcommit 224098471a55701c40ab5a49888d93d8ff304164[m
Author: “flpa” <“florian-p@gmx.net”>
Date:   Sun Oct 20 18:58:12 2013 +0200

    minor ParentRunner refactoring in new code

[33mcommit 734b6ba797026c223aa686496581f7124249be9a[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 16:47:46 2013 +0200

    fixed bug in changes in ParentRunner, all tests are succeeding now

[33mcommit 4f7ed2bdf1856b0582e9b982aa0ba594498c6b45[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 16:47:02 2013 +0200

    simplified isIgnored check in Framework, using it in
    BlockJUnit4ClassRuner

[33mcommit d517352c4b06fee4d5dfddfc69c86514d09eddc3[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 16:26:10 2013 +0200

    draft changes in ParentRunner for #380; currently some ignore counts are
    doubled

[33mcommit 81bb4fe24756a6a21b57975cac9eda4ce2304308[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 16:24:40 2013 +0200

    Added test for issue #380 to AllTests

[33mcommit 91b2d357c370519e052fdb386b664f0ac1d52628[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 16:14:18 2013 +0200

    Added isIgnored() to FrameworkMethod.

[33mcommit bfa4cea92005b0272e44cd245308dc4f4abaa4cf[m
Author: flpa <florian-p@gmx.net>
Date:   Sun Oct 20 16:00:15 2013 +0200

    drafts for tests for issue #380

[33mcommit dd395b49be740e7c57ffe06fc6db07625c1e1d26[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Fri Oct 18 19:02:19 2013 -0700

    added note that feature is experimental

[33mcommit a71f8c16ea97fceb1aaa84bcf7a99435a0c2d426[m
Merge: 0f623cd1 f40f106b
Author: David Saff <saff+aa@google.com>
Date:   Fri Oct 18 15:32:01 2013 -0700

    Merge pull request #750 from stefanbirkner/expected-exception
    
    Allow expectation as parameter of custom message.

[33mcommit f40f106b3721c9b3f9a7d535df1027588d64dcaf[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Oct 18 01:13:22 2013 +0200

    Allow expectation as parameter of custom message.
    
    Simplifies the code, because custom and default message use the same code.

[33mcommit 0f623cd1b1309e8b687aa5055d2b5c672be2a0d5[m
Merge: 5e6cb8dd 8b35f0c0
Author: David Saff <saff+aa@google.com>
Date:   Wed Oct 16 15:32:17 2013 -0700

    Merge pull request #720 from stefanbirkner/expected-exception
    
    Extend ExpectedException's documentation and fix #687.

[33mcommit 8b35f0c0a07b80f068d78bf03025bcebef760a1e[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Sep 4 01:43:27 2013 +0200

    Extract isAnyExceptionExpected().
    
    Improve readability and avoid duplicate code.

[33mcommit bb13b318cd79a68470e93c79635090c7bb565475[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Sep 4 01:39:32 2013 +0200

    Revert changes of 128553f. Fixes #687.
    
    Still fixes #121, but the original fix was superfluous. Added documentation
    about handling assumes and asserts in conjunction with the
    ExpectedException rule.

[33mcommit 41f96743522db61b14ef2c8ca7d719a226b9f153[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Aug 6 22:10:12 2013 +0200

    Rewrite parts of the documentation.
    
    Describe every expect method with a single test.

[33mcommit 3e8e865039fe6531666afb860961d787065b589e[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Fri Oct 11 16:58:18 2013 -0700

    Check for stuck threads now must be enabled in a Rule

[33mcommit 5e6cb8dd0fc0f52f801445290a5d94d7c15cbd5c[m
Merge: 9917b9fe 9ac4cc84
Author: David Saff <saff+aa@google.com>
Date:   Fri Oct 11 12:18:12 2013 -0700

    Merge pull request #745 from peter-lawrey/master
    
    Minimise object creation without a failure.

[33mcommit 9ac4cc842d70dc7ef266f4d677d90d9b177e4be6[m
Author: Peter Lawrey <peter.lawrey@gmail.com>
Date:   Fri Oct 11 10:18:58 2013 +0100

    Use explicit auto-boxing.

[33mcommit 51f22b5c68e8da3f5b46a4c48a1d4a0451ad6fe3[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Tue Oct 8 17:18:05 2013 -0700

    Fix code review comments: Rename to RejectAllTestsFilter and use description.isSuite()

[33mcommit 063004dca462777a969ab1e0002dd3053014381c[m
Author: Peter Lawrey <peter.lawrey@gmail.com>
Date:   Tue Oct 8 17:40:46 2013 +0100

    Don't create objects without a failure.

[33mcommit d9054149988487750679e35a349df7e0e2df5870[m
Author: Ricky <ricky@dius.com.au>
Date:   Wed Sep 25 10:04:04 2013 +1000

    changed arguments to validate methods to use JUnit classes as opposed to java.lang.reflect

[33mcommit fe5d86eba71a1f59dbbed09de4add01cc20420c0[m
Author: Ricky <ricky@dius.com.au>
Date:   Tue Sep 24 12:51:40 2013 +1000

    - statically imported Collections where appropriate
    - refactored the construction of the incompatiable annotations of CategoryValidator to be initialized immediately

[33mcommit f5e7e1ff180bb17e4f9df702a038e06a974f78f6[m
Author: Ricky <ricky@dius.com.au>
Date:   Sun Oct 6 14:39:02 2013 +1100

    added the since 4.12 where appropriate

[33mcommit 862f41cbc1757a4783b725c23588d41219735b72[m
Author: Ricky <ricky@dius.com.au>
Date:   Thu Sep 19 18:12:41 2013 +1000

    refactored copying of maps to unmodfiableMaps in TestClass

[33mcommit df88873d5013e400489550cf15e9b51dc438eb4b[m
Author: Ricky <ricky@dius.com.au>
Date:   Thu Sep 19 09:33:37 2013 +1000

    - replaced null object pattern with null check in ParentRunner for validators
    - added a comment regarding sorting of declared fields
    - iterated over map using entry sets and not key sets in TestClass

[33mcommit e02beea07c6d3798e2db532d6c7cebe6cc21f30d[m
Author: Ricky <ricky@dius.com.au>
Date:   Wed Sep 18 11:30:58 2013 +1000

    - Moved validator package to org.junit.validator
    - Fixed up some imports

[33mcommit c75dcc28810aeb1c918ee7430981b31f41742ea7[m
Author: Ricky <ricky@dius.com.au>
Date:   Tue Sep 17 07:03:16 2013 +1000

    - Sorted fields before iterating through them for annotations in TestClass
    - Removed redundant wrapping of unmodifiableMap in getters of annotationToFields/Methods

[33mcommit 88e2a7611e0c9e93aefca75056ac52c46fb5799b[m
Author: Ricky <ricky@dius.com.au>
Date:   Mon Sep 16 18:27:10 2013 +1000

    - Moved expect in tests to be right before test method is called
    - Fixed javadoc comment in map getAnnotationToMethods/getAnnotationToFields methods
    - Fixed duplicate test for annotationToMethods

[33mcommit 1b138aa257ea2439c7010776feac06f9dd5fde66[m
Author: Ricky <ricky@dius.com.au>
Date:   Mon Sep 16 14:30:17 2013 +1000

    spacing

[33mcommit d3ee5d06c0b797ce812cbfe35addc6146d5f07cb[m
Author: Ricky <ricky@dius.com.au>
Date:   Mon Sep 16 14:27:47 2013 +1000

    More changes after feedback
    - ParentRunner now has null object pattern for null annotation validators
    - unmodifiableLists are now inserted into the maps of fMethodsForAnnotations and fFieldsForAnnotations
    - null value check has been added to the AnnotationValidatorFactory

[33mcommit 1273a35689bdcb3304f6634cdc3889c61f9b1b1f[m
Author: Ricky <ricky@dius.com.au>
Date:   Mon Sep 16 12:13:48 2013 +1000

    More changes after feedback.
    Moved validator to category packages.
    Changes around unmodifiable maps.
    Made AnnotationValidator abstract.

[33mcommit 5e71994e865d0e2ac23885a11444cda91b3bba76[m
Author: Ricky <ricky@dius.com.au>
Date:   Mon Sep 16 07:25:22 2013 +1000

    documentation added for AnnotationValidatorFactory

[33mcommit 52889f2aa64d7070b6f369c064f8b65f2de1666c[m
Author: Ricky <ricky@dius.com.au>
Date:   Mon Sep 16 06:53:24 2013 +1000

    added missing documentation

[33mcommit bae4bd80513360c5e884e760447000d9c96ffd72[m
Author: Ricky <ricky@dius.com.au>
Date:   Thu Aug 29 16:57:37 2013 +1000

    Changes from more feedback
    - extracted creation of annotation validator into a factory
    - added thread saftey around collections

[33mcommit 9cf5b64d8dbbb064fed3d4ee88eced2b6a7d50fe[m
Author: Ricky <ricky@dius.com.au>
Date:   Tue Jul 2 21:23:20 2013 +1000

    More changes after feedback
    
    - Fixed indentation
    - Simplified hasValidatorAnnotation method
    - Deleted test that was covered elsewhere

[33mcommit 85f9d8397bfd96261c3214284672180c522e2d38[m
Author: Ricky <ricky@dius.com.au>
Date:   Mon Jun 3 22:27:53 2013 +1000

    changes after feedback

[33mcommit 48af7e797dbefa1fc47e80394c7f74ef87c3c7ab[m
Author: Ricky <ricky@dius.com.au>
Date:   Tue May 28 15:36:45 2013 +1000

    adding annotation validators functionality

[33mcommit 35b428a24bdd2eddd9653189632896d4f5b1ce42[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Thu Oct 3 18:11:14 2013 -0700

    style improvements

[33mcommit 7eef2314cb78d41def996cdd80c5a56c94a993f3[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Wed Oct 2 10:40:24 2013 -0700

    fixed logic of self-test

[33mcommit fba19ba73a93dcc2d18942b3cf4992ce010afdb2[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Wed Oct 2 10:32:27 2013 -0700

    improvements suggested by dsaff, and added self-test

[33mcommit 5ca9da987a7d4dc00e082aaf552cbd8ee8c7bd33[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Mon Sep 30 16:29:13 2013 -0700

    improvements suggested by David Saff

[33mcommit 9917b9fe95fd237b824b0bb6a3f9ef9efedd2b3b[m
Merge: 9e071a41 3bbf8298
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Sep 26 16:52:18 2013 -0700

    Merge pull request #743 from stefanbirkner/tabulation-char
    
    Indent with spaces (not tabs).

[33mcommit 3bbf82985fd32ba49e617c3e4c0c09dfa6acc960[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Sep 27 01:50:08 2013 +0200

    Indent with spaces (not tabs).

[33mcommit 1768d08d029dc3bf1ab88e26df0a9b40ae61227f[m
Author: Adam Beneschan <adambeneschan@aol.com>
Date:   Tue Sep 24 15:34:27 2013 -0700

    fail on timeout displays stack of stuck thread (Issue #727)

[33mcommit 9b9d86d7e11ba518a826ce35784857d2c1428f38[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Thu Sep 19 18:59:52 2013 -0700

    Change RejectAllTestsFilter to only reject atomic tests.

[33mcommit 9e071a41086acf72230e8ccd4fc0970e6bd8ef75[m
Merge: 6047232d a2a0b1a6
Author: David Saff <saff+aa@google.com>
Date:   Mon Sep 16 15:11:09 2013 -0700

    Merge pull request #735 from kcooney/multiple-failure-exception-throws
    
    Change signature of MultipleFailureException.assertEmpty() to throw Exception

[33mcommit a2a0b1a6403cd049b18ffcab1cebca545aa52fe9[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Sep 13 18:02:58 2013 -0700

    Fix typo in Javadoc

[33mcommit 73f85f59ea686adb8f05a294ffc114b9ec20f2ba[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Fri Sep 13 11:56:24 2013 -0700

    Address code review comments

[33mcommit af73a48fe7d8e3886dbe45ba65844d833d58c89d[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Sep 13 10:32:27 2013 -0700

    Add back @Test tags accidentially removed in the previous commit

[33mcommit cb818f191ea2b9fe563aa20c581b16f3f23b7c4c[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Thu Sep 12 22:01:56 2013 -0700

    Change signature of MultipleFailureException.assertEmpty() to throw Exception.

[33mcommit 6047232d493a8c9cfe162b27a754638ec88cce45[m
Merge: 91a7ff28 9d9019ed
Author: David Saff <saff+aa@google.com>
Date:   Fri Sep 6 13:52:54 2013 -0700

    Merge pull request #730 from stefanbirkner/issue-729
    
    Always close stream in readPreferences(). Fixes #729.

[33mcommit 9d9019edd68b50dab6070117d48d8c093352d651[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Sep 3 00:59:03 2013 +0200

    Always close stream in readPreferences(). Fixes #729.

[33mcommit 91a7ff28a3879d4a409176e092887924700d08b6[m
Merge: 53e940c3 aa828f4a
Author: Kevin Cooney <kcooney@google.com>
Date:   Sun Aug 25 17:05:21 2013 -0700

    Merge pull request #724 from avandeursen/testclass
    
    Refactoring of TestClassTest, and adding 2 new test cases.

[33mcommit aa828f4a087e2ccdc172bf4c22377893cde3e44e[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Fri Aug 23 17:27:52 2013 +0200

    Taking hasItem from CoreMatchers API, instead of from hamcrest.core

[33mcommit 0beb67934c5ca6d3f7e1feb9e102ac0d04186475[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Aug 10 13:57:03 2013 +0200

    Added 2 tests for methodValues and fieldValues functionality.
    
    The tests cover both the matching case (field/method is of
    expected type) as well as the non matching case.
    
    Removed static class ManyMethod (an unused fixture).

[33mcommit 3f2d6f8f974560f970bc0f021c13224122d9ab2d[m
Merge: d56c7296 55d591ea
Author: Brett Chabot <brettchabot@google.com>
Date:   Wed Aug 21 11:55:55 2013 -0700

    Merge branch 'master' of https://github.com/brettchabot/junit
    
    Conflicts:
            src/test/java/org/junit/tests/junit3compatibility/JUnit38ClassRunnerTest.java

[33mcommit d56c7296efd21e517c2c5bead01021f8796b31a7[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Wed Aug 21 11:47:49 2013 -0700

    Properly handle case where filter removes all JUnit3 tests in suite.

[33mcommit 55d591ea589e080a89f6a25b6d5d752cb4e18e96[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Wed Aug 21 11:47:49 2013 -0700

    Properly handle case where filter removes all JUnit3 tests in suite.

[33mcommit 53e940c3a1eafc32996135025655d3c91d0dcf5e[m
Merge: db32e531 81053692
Author: David Saff <saff+aa@google.com>
Date:   Tue Aug 20 15:16:21 2013 -0700

    Merge pull request #716 from brettchabot/master
    
    Fix annotation collection from super classes of JUnit3 tests.

[33mcommit db32e5315d73491b66e5e1e6333d759058699af1[m
Merge: d919bb6d fa35d6d8
Author: David Saff <saff+aa@google.com>
Date:   Mon Aug 19 17:08:05 2013 -0700

    Merge pull request #721 from stefanbirkner/cvsignore
    
    Delete .cvsignore files, because we're using Git now.

[33mcommit fa35d6d84a0b2c59254cb479633d0e20bc6e12e9[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Aug 18 22:30:32 2013 +0200

    Delete .cvsignore files, because we're using Git now.

[33mcommit 810536929044271a608e019255e87c756235bb97[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Wed Aug 14 18:25:20 2013 -0700

    Fix annotation collection from super classes of JUnit3 tests.

[33mcommit d919bb6d28105c3f03217813963ecab8ea38897e[m
Merge: bc2a68c9 879ab235
Author: David Saff <saff+aa@google.com>
Date:   Mon Aug 12 17:06:12 2013 -0700

    Merge pull request #715 from russellsantos/issue686
    
    Re #686: Added thread safety warnings to @Test javadoc.

[33mcommit 879ab235ef1f7b4e529a3a1fd8faa862dc399d9b[m
Author: Russell Santos <russell.santos@gmail.com>
Date:   Sat Aug 10 07:49:11 2013 +0800

    Re #686: Added thread safety warnings to @Test javadoc.

[33mcommit bc2a68c9bb6091cdfd9a950058f2c609e239fa84[m
Merge: 42e46515 5a6d47ca
Author: David Saff <saff+aa@google.com>
Date:   Wed Aug 7 16:05:43 2013 -0700

    Merge pull request #710 from stefanbirkner/javadoc
    
    Fix JavaDoc errors and warnings.

[33mcommit 5a6d47cac587286a8d5a1266bcded6ec67cd539f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Aug 6 22:35:40 2013 +0200

    Clean up JavaDoc of JUnit38ClassRunner.getAnnotations(...).
    
    Remove empty return and add description of the parameter.

[33mcommit 0fac8c9bba348bb894ffa548c75f0e02380e24bf[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jul 29 21:44:40 2013 +0200

    Remove JavaDoc reference to test class.
    
    The test class is no available by JavaDoc.

[33mcommit e0726d382256f25c0ce981cbe4f55a2b938742d0[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Aug 7 12:47:31 2013 +0200

    Simplify JavaDoc of RunNotifier.fireTestFinished(...).

[33mcommit 1064471b0be1d001265ae5a688f0b80e460d6154[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Aug 6 22:28:20 2013 +0200

    Rewrite JavaDoc of IncludeCategories.createFilter(Class<?>...).
    
    Remove internal details of the created filter and describe its behaviour instead.

[33mcommit 31c422f63b1b6b930ad4df7a2372a2576cc12094[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Aug 6 22:45:03 2013 +0200

    Rewrite JavaDoc of ExcludeCategories.createFilter(Class<?>...).
    
    Remove internal details of the created filter and describe its behaviour instead.

[33mcommit 2d8f404b1bd566fd39a06a34ec2f96e79ed7431b[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Aug 7 12:40:10 2013 +0200

    Fix path to JavaDoc style sheet.

[33mcommit 42e4651517abf251c0b455726d4c8da04f1182bf[m
Merge: 2a010a89 5a439ed6
Author: David Saff <saff+aa@google.com>
Date:   Wed Jul 31 16:36:42 2013 -0700

    Merge pull request #709 from stefanbirkner/junitcore
    
    JUnitCore

[33mcommit 5a439ed68829d8d839ef21268656e1c7041adc8e[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jul 29 20:54:19 2013 +0200

    Fix JavaDoc.

[33mcommit fc2d506725525f81ba61c1cd1bd830d7cf246b36[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Jul 29 20:28:45 2013 +0200

    Merge main(...) and runMainAndExit(...).
    
    Commit 917a88fad06ce108a596a8fdb4607b1a2fbb3f3e changed the
    visibility of runMainAndExit from public to private. The method
    is only called by main and therefore runMainAndExit is not needed
    anymore.

[33mcommit 2a010a89464d9879a740fc611a004a6c15ae6ed1[m
Merge: e1bf14b4 f6a3d740
Author: David Saff <saff+aa@google.com>
Date:   Mon Jul 15 17:34:30 2013 -0700

    Merge pull request #702 from stefanbirkner/parameterized-with-one-arg
    
    Support more return types for the @Parameters method. Fixes #700.

[33mcommit f6a3d7405b72966d3714355804e1b3c14b1425cb[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jul 2 00:23:02 2013 +0200

    Support more return types for the @Parameters method. Fixes #700.
    
    Support the return types Iterator<? extends Object>, Object[] and Object[][]. You don't have to wrap arrays with Iterables and single parameters with Object arrays.

[33mcommit e1bf14b4d5b7aecf4611fd400417359424121544[m
Merge: a714989b d0cd805d
Author: David Saff <saff+aa@google.com>
Date:   Mon Jul 8 17:00:26 2013 -0700

    Merge pull request #666 from Tibor17/junit.fix
    
    Treatments for parallel execution

[33mcommit a714989bdb2b49070788555bd1b4985346b94316[m
Merge: 90013d44 bce37741
Author: David Saff <saff+aa@google.com>
Date:   Mon Jul 8 16:59:09 2013 -0700

    Merge pull request #149 from awreece/timeout-docs
    
    Timeout non-deterministic

[33mcommit d0cd805df54673c2d1376c58bcee23b6e32fb4ee[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Jul 3 23:23:05 2013 +0200

    renamed parameter to "fillIfAbsent"

[33mcommit cc6e2c090f1b5c294b7aca4ee8252c6db2347eca[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Jul 3 00:19:18 2013 +0200

    Guarded by fChildrenLock

[33mcommit 334bd9ce923cf0293cbca49be4ae5947abf51897[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jul 2 22:13:09 2013 +0200

    fChildrenLock, filter(Filter filter), fRunners

[33mcommit 90013d4457618e8f8cbf093f521d4329b7745403[m
Merge: f4d4a0a9 3cd86b70
Author: David Saff <saff+aa@google.com>
Date:   Thu Jun 20 08:37:28 2013 -0700

    Merge pull request #697 from Tibor17/junit.new
    
    Unnecessary array in varargs in AnnotatedBuildrer

[33mcommit 68e59d6de3c48be43bfe2d6104fdb6e8280b1232[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Jun 20 00:21:48 2013 +0200

    getAnnotatedMethodValues/Field return modifiable collection: no internal data to protect

[33mcommit 3cd86b7018f2c57f10d671d007d08caa74463c09[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Jun 19 23:45:36 2013 +0200

    Unnecessary array in varargs in AnnotatedBuildrer: Constructor#newInstance(Object ... initargs)

[33mcommit 68b4e393388627201265eb3924f3628b1c27e6ff[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Jun 8 11:24:09 2013 +0200

    shorten line, renamed var, removed unnecessary empty array in varargs.

[33mcommit f4d4a0a9f11656625aabbb2a4b3b1164a8722f1c[m
Merge: 262e81ef 185dd23d
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Jun 5 22:22:55 2013 -0700

    Merge pull request #691 from noel-yap/filter-option
    
    Make compilable under Java 1.5.

[33mcommit 185dd23d960efc6630989c411935f2d18b17e09c[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Wed Jun 5 15:28:02 2013 -0700

    Make compilable under Java 1.5.

[33mcommit 262e81ef672c4851372057766fe83ffd7a412385[m
Merge: aeaecd2e c86a84d3
Author: David Saff <saff+aa@google.com>
Date:   Wed Jun 5 13:34:37 2013 -0700

    Merge pull request #690 from noel-yap/filter-option
    
    Make compilable under Java 1.5.

[33mcommit c86a84d3beed29c4f8389b1172fde95f72d2d6ed[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Wed Jun 5 12:59:24 2013 -0700

    Make compilable under Java 1.5.

[33mcommit bce37741338625944a6e5589e130b8a4bae8151d[m
Author: Alex Reece <awreece@gmail.com>
Date:   Tue Jun 4 21:09:53 2013 -0400

    add disclaimer and example

[33mcommit aeaecd2e8bb022049ed89021df1ec6c4dbb15f77[m
Merge: 238eaa76 b026c088
Author: David Saff <saff+aa@google.com>
Date:   Tue Jun 4 17:42:11 2013 -0700

    Merge pull request #647 from noel-yap/filter-option
    
    --filter option implemented.

[33mcommit ede492496de0f3c0872216ac9c9b88a00fdef09e[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jun 4 02:19:13 2013 +0200

    changes with unmodifiable collections

[33mcommit 238eaa7617d3e53a47ef00cd91fc43c1ed918113[m
Author: David Saff <saff+aa@google.com>
Date:   Mon Jun 3 13:53:21 2013 -0300

    Clarify deprecations in BlockJUnit4ClassRunner

[33mcommit d090e923aa5b4f73cb27acbde84272686eaf36c9[m
Merge: 4dd14be2 90b53f36
Author: David Saff <saff+aa@google.com>
Date:   Tue May 28 11:56:13 2013 -0700

    Merge pull request #659 from brettchabot/master
    
    Collect annotations for JUnit3 test methods.

[33mcommit b026c088d800013fa73ffb9647c13d3a87cdf55d[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Mon May 27 11:01:55 2013 -0700

    Responses to code review from @dsaff.

[33mcommit fa5df4e972db64249046b789b3dc730657f11c58[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Mon May 27 09:36:07 2013 -0700

    Responses to code review from @dsaff.

[33mcommit 4dd14be2eb4e12a8f5c2150a80bdded5f12ad5e7[m
Merge: 768a7141 3171c4b2
Author: David Saff <saff+aa@google.com>
Date:   Fri May 24 12:34:58 2013 -0700

    Merge pull request #678 from marschall/epl
    
    Relicense JUnit from CPL to EPL

[33mcommit 90b53f3683af074aa7aa982821219338053b0345[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Fri May 24 11:41:47 2013 -0700

    Addressed code review comments in JUnit38ClassRunnerTest

[33mcommit 768a71413d52ee0a7bcefa204d582e7c08f1c19e[m
Merge: 1ef54a1e d45ae50b
Author: David Saff <saff+aa@google.com>
Date:   Thu May 23 07:52:52 2013 -0700

    Merge pull request #680 from UrsMetz/fix-typo-in-method-rule-javadoc
    
    fix typo in javadoc for MethodRule

[33mcommit d45ae50b94e9473ad34d51be69ad4e7972fdbe44[m
Author: Urs Metz <urs.metz@gmx.de>
Date:   Wed May 22 22:05:58 2013 +0200

    fix typo in javadoc

[33mcommit 3171c4b29cb207e71fc2f752f0fbcb235bc8e784[m
Author: Philippe Marschall <philippe.marschall@gmail.com>
Date:   Sat May 18 13:16:59 2013 +0200

    Relicense JUnit from CPL to EPL
    
    EPL is the successor version of the CPL this makes re-licensing
    possible without seeking the approval of all contributors.
    
    CPL is actively hurting JUnit adaptation, it the following cases the
    deciding factor against JUnit was CPL. In both cases EPL would have
    been fine.
    * Netbeans can't ship JUnit [4]
    * OpenJDK uses TestNG instead of JUnit [5]
    
    Mike Milinkovich from the Eclipse Foundation wrote [1]
    
    > Back in 2009, the CPL was superseded by the EPL. This means that the
    > EPL is the successor version of the CPL. It also means that using the
    > CPL is the licensing equivalent of using deprecated code.
    >
    > Because the EPL is the successor version to the CPL, the "new version
    > re-licensing" clause in Section 7 of the CPL applies. In other words,
    > you can re-license your project without seeking the approval of all
    > of your contributors.
    > The CPL and EPL basically differ by about one sentence, which you can
    > see here. The difference relates to the scope of patent licenses
    > terminated should someone sue another party for patent infringement.
    > This is the kind of stuff that lawyers love, but most developers
    > don't really care about.
    
    On the migration from CPL to EPL Mike Milinkovich wrote [2]
    
    > There was a two step process that was followed to make this happen.
    > First, following the terms of the CPL, IBM assigned the
    > responsibility to serve as the Agreement Steward of the CPL to the
    > Eclipse Foundation. Second, the Eclipse Foundation officially
    > recognized the EPL 1.0 as the new version of the CPL 1.0. In OSI
    > license terminology, the EPL now supersedes the CPL.
    >
    > A quick read of the two licenses will quickly show that they are very
    > very close. Other than their names and (previously) their Agreement
    > Stewards, the only substantive difference is the breadth of the
    > patent license termination in the event of a patent law suit. (See
    > the second paragraph of Section 7.) For more information on the
    > relationship between the CPL and the EPL see the EPL FAQ.
    
    You can find more information about the difference at [3].
    
    The new `LICENSE.txt` is based on a plain text version of the EPL with
    formatted so that the diff is a clean as possible.
    
    I'll submit another pull request for the gh-pages branch.
    
     [1] http://mmilinkov.wordpress.com/2013/02/13/jruby-moves-to-the-epl/
     [2] http://mmilinkov.wordpress.com/2009/04/16/one-small-step-towards-reducing-license-proliferation/
     [3] http://www.eclipse.org/legal/eplfaq.php#EPLDIFFER
     [4] https://netbeans.org/community/releases/70/relnotes.html#deprecated
     [5] http://openjdk.java.net/jtreg/build.html

[33mcommit 163f503af57d91f60c6b57d4c9afa768b7c04df0[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat May 11 21:08:24 2013 +0200

    // Guarded by fLock

[33mcommit 1ef54a1e2a883ba3eda2e8d257d1bb8f8f14fba7[m
Merge: beb1f4a8 dc730e3c
Author: David Saff <saff+aa@google.com>
Date:   Thu May 9 09:01:18 2013 -0700

    Merge pull request #675 from avandeursen/compactfailuretest
    
    Test class for String Comparison Compactors, and off-by-one refactoring of compactor.

[33mcommit dc730e3cfd2c567f7f28060920c275db68a1230d[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Thu May 9 11:30:00 2013 +0200

    Reworded postfix to suffix.

[33mcommit 4c1758d3b8003d4b3589fe80af16f590c2e6abe8[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Mon May 6 15:51:17 2013 +0200

    Refactoring ensuring fSuffix is equal to length of suffix.
    
    While fPrefix was equal to length of prefix, in old code
    fSuffix was equal to length of suffix + 1.
    
    Made the two consistent, resulting in simplification of suffix
    computation (removed "+ 1" four times, added "- 1" once).
    
    Found inconsistency through branch coverage analysis, which
    suggested that condition "fSuffix > 0" could never be false.

[33mcommit f4327736c972fedab912ea5508095e312f1f79e1[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sun May 5 22:26:56 2013 +0200

    Switching to a Parameterized test class.
    
    Added long pre/postfix test cases.
    
    All relevant test cases for message compacting included.
    
    Included tests cases from (old) ComparisonCompactorTest
    that are still relevant for current ComparisonFailure class.
    
    Added empty string boundary cases.
    
    Branch coverage back to normal.

[33mcommit a19cd9db1a4280037f0d2264e45af06eaa9f8023[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Wed May 8 23:24:14 2013 +0200

    Created an initial test case for ComparisonFailures
    
    Partly Taken from the old junit.framework.ComparisonCompactorTest.
    
    Also added test cases for strings with common suffix/prefix.

[33mcommit cfaceb6d34390d999ff238d53fcb73898b32f98f[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Mon May 6 15:16:49 2013 -0700

    Changes due to code review from @dsaff.

[33mcommit ae1fc256c8a56f0bd4ad88acd1190503002726f7[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu May 2 09:56:19 2013 -0700

    Javadoc removed. Comments to be created by @kcooney.

[33mcommit c85a267605d4484121afeccef972a7266481ee7c[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu May 2 09:06:44 2013 -0700

    Changes due to code review from @dsaff.

[33mcommit c6e3d2cf121ce6e371bafefa59f216054167845b[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Wed May 1 19:06:57 2013 -0700

    Cleaned up whitespace in JUnit38ClassRunner.
    Added a unit test.

[33mcommit 0ce71108da6f487d76c0f4dc46cde41e11dd3daa[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed May 1 23:11:59 2013 +0200

    requested improvements in ParentRunner, + DCL in ClassRequest

[33mcommit b5084eb51ffdb2a3bd9bed7294afc941a733a693[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Tue Apr 30 15:55:14 2013 -0700

    JavaDoc fixed.

[33mcommit b0c0aafae2f3008c27ba06babd2b2dec15af53e8[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Tue Apr 30 09:27:16 2013 -0700

    Further changes due to code review from @kcooney.

[33mcommit 826529633261161edd2d9dc0f866b2c3c0420514[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Mon Apr 29 12:20:26 2013 -0700

    Changes in response to code review from @kcooney.

[33mcommit 96af9a2a520a40404971968ee14a183d0aed1c4b[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Apr 18 22:49:21 2013 +0200

    Description#getChildren() JavaDoc

[33mcommit 6faa0075887c8b51a46b347dab54bbd37ece362d[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Apr 18 22:34:59 2013 +0200

    simplified ClassRequest

[33mcommit 84d8eddd970e46894d471cd2dd17ae8d86fb05db[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Apr 18 21:56:24 2013 +0200

    synchronized filtered children in ParentRunner

[33mcommit 83a25d440d118b7d10779a884d35f31045949e27[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Apr 12 01:11:44 2013 +0200

    Treatments for parallel execution

[33mcommit beb1f4a80f7fa20523d40535fb81c1b8a7a9e638[m
Merge: 56604415 4baf1fdc
Author: David Saff <saff+aa@google.com>
Date:   Mon Apr 8 12:12:39 2013 -0700

    Merge pull request #660 from Tibor17/junit.tests
    
    Too short timeout in TimeoutRuleTest.

[33mcommit 5660441529c9d0f096e3bf390f9e4b71642f8b04[m
Merge: 7ab49f9d 09ab7dec
Author: David Saff <saff+aa@google.com>
Date:   Mon Apr 8 12:10:47 2013 -0700

    Merge pull request #661 from Tibor17/junit.mavenize3
    
    Wrong href link for Java API in JUnit Javadoc.

[33mcommit 7ab49f9d8995c4b7d3a7cff6e01498c5907b360d[m
Merge: b4b1b31c 26ae50e4
Author: David Saff <saff+aa@google.com>
Date:   Mon Apr 8 12:09:24 2013 -0700

    Merge pull request #662 from pimterry/theory-javadoc
    
    JavaDoc for TestedOn and ParametersSuppliedBy

[33mcommit 26ae50e44f114dcdc6aa031917be6484681a546a[m
Author: pimterry <pimterry@gmail.com>
Date:   Fri Mar 29 01:07:53 2013 +0000

    Added documentation to TestedOn and ParametersSuppliedBy

[33mcommit 09ab7decf0c8d3ce8ed8c165465f68e7ebe7af51[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Apr 7 12:08:39 2013 +0200

    Wrong href link for Java API in JUnit Javadoc

[33mcommit 4baf1fdc292ea5d11fbd2e11998603e2bf0310f8[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Apr 6 02:26:55 2013 +0200

    Too short timeout in TimeoutRuleTest.

[33mcommit 0fa3f12d9b69cb8c97021507bce367be386be338[m
Author: Brett Chabot <brettchabot@google.com>
Date:   Tue Apr 2 11:44:10 2013 -0700

    Collect annotations for JUnit3 tests.
    
    Necessary to support test filtering by annotation.

[33mcommit b4b1b31cdbab780ba3021a296f95356b0636ff1c[m
Merge: 540fa757 b4b20702
Author: David Saff <saff+aa@google.com>
Date:   Tue Apr 2 07:56:45 2013 -0700

    Merge pull request #658 from pimterry/iterable-datapoints
    
    Added support for iterable datapoints

[33mcommit 56193048f411846a58c0e0377a5f1ccfecd3d2f9[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Mon Apr 1 14:53:38 2013 -0700

    Command parsing errors internalized such that JUnitCore doesn't have to know about them.

[33mcommit b4b20702ea37f5a13750a899eac015c115cc73f0[m
Author: pimterry <pimterry@gmail.com>
Date:   Mon Apr 1 20:03:02 2013 +0100

    Updated DataPoints documentation for the new iterable datapoints

[33mcommit b421d0ebd66701187c10c2b0c7f519dc435531ae[m
Author: Tim Perry <pimterry@gmail.com>
Date:   Sun Mar 31 23:52:41 2013 +0100

    Added support for iterable datapoints

[33mcommit 540fa757f7a9d86eea9b38e9920eec9bcee3afca[m
Merge: 34e66740 85b7c26e
Author: David Saff <saff+aa@google.com>
Date:   Mon Apr 1 10:11:08 2013 -0700

    Merge pull request #657 from kcooney/simplify-fail-on-timeout
    
    Simplify FailOnTimeout by using FutureTask

[33mcommit 85b7c26e63f851004ce20d4a00fbf1b46607ab0c[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Mar 30 23:30:21 2013 -0700

    Simplify FailOnTimeout by using FutureTask

[33mcommit b1cf4b5bc6ead8c3dfcbbb9ebe69be85f5e53cb8[m
Merge: 114025fc 34e66740
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Wed Mar 27 15:48:03 2013 -0700

    Merge branch 'master' into filter-option
    
    Conflicts:
            src/test/java/org/junit/tests/AllTests.java

[33mcommit 114025fce0f28c5d7daa2204c7b91537c62f9f09[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Wed Mar 27 15:41:13 2013 -0700

    public keyword removed from methods of interface.

[33mcommit b01900fddca5ff54258e621025ccdbbc75f880f1[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Wed Mar 27 13:35:40 2013 -0700

    FilterFactoryFactory renamed to FilterFactories and its methods made static.
    ClassUtil renamed to Classes for consistency.

[33mcommit 34e66740b9117ce85cfd416f9e931b2e533ab16e[m
Merge: 8d7f5cc1 dbe77112
Author: David Saff <saff+aa@google.com>
Date:   Tue Mar 26 10:27:28 2013 -0700

    Merge pull request #639 from pimterry/datapoints-exceptions-#449
    
    Fixes #449, stopping AllMembersSupplier & Theories hiding DataPoints method exceptions

[33mcommit dbe771125873b707dfbc95f066649b4be8f247b2[m
Author: pimterry <pimterry@gmail.com>
Date:   Fri Mar 22 15:14:16 2013 +0000

    Refactored out ignorable exception type-matching to minimise duplicating
    of that logic

[33mcommit 93d773835c0c6f70bc89bbf5e4d273c289423a64[m
Merge: 8d7f5cc1 38d91308
Author: pimterry <pimterry@gmail.com>
Date:   Thu Mar 21 22:55:04 2013 +0000

    Merge branch 'master' into datapoints-exceptions-#449

[33mcommit 40b8761099da900ad219fe9b06060cda1e212f83[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu Mar 21 13:44:27 2013 -0700

    JavaDoc added.

[33mcommit aa7c75db0608e8ce9e76ee60c70ba429c7260fba[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu Mar 21 13:00:57 2013 -0700

    Test added.

[33mcommit 9d9899bce3506e7d87ebc6352a3cf3d25ea20f54[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu Mar 21 09:35:25 2013 -0700

    Responses to code review from @dsaff.

[33mcommit 8d7f5cc1d267cbc77b20fa17324350b5859d701e[m
Merge: e0a2efcf 7e971401
Author: David Saff <saff+aa@google.com>
Date:   Thu Mar 21 06:56:11 2013 -0700

    Merge pull request #653 from pimterry/datapoint-doc
    
    Added javadoc to the DataPoint annotation

[33mcommit 5820172f30e56e9b0bc8feca6d7b3be58b7ee0ee[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Wed Mar 20 15:04:26 2013 -0700

    API simplified. FilterFactory.parseArgs() removed. FilterFactoryParams made final.

[33mcommit 7e97140108f06260bd8ae027db2c019abb8ceee7[m
Author: pimterry <pimterry@gmail.com>
Date:   Tue Mar 19 15:00:56 2013 +0000

    Tweaked DataPoint javadoc to depluralise references to datapoints where
    possible
    
    This should add some clarity, since do have both DataPoint and
    DataPoints annotations.

[33mcommit e0a2efcfa8ba07b932eae0b3bbacd440b52d04d6[m
Merge: c7b1880c af692868
Author: David Saff <saff+aa@google.com>
Date:   Tue Mar 19 07:59:21 2013 -0700

    Merge pull request #654 from pimterry/autodatapoints-#109
    
    Autogenerated datapoints for boolean and enum parameters

[33mcommit c7b1880cea0f817f170986cfc190e23b289a3827[m
Merge: e012e06d c60d087c
Author: David Saff <saff+aa@google.com>
Date:   Tue Mar 19 07:56:07 2013 -0700

    Merge pull request #651 from pimterry/datapoint-result-reuse-#638
    
    Fixes for #637, making theory parameters assignment more consistent across sources

[33mcommit c60d087c2064f5903086e95906e6bc636e3fa083[m
Author: pimterry <pimterry@gmail.com>
Date:   Mon Mar 18 21:25:48 2013 +0000

    Tiny whitespace fix

[33mcommit 74cab2dc9b8c32482d2c86a66a0dd9318930b4bc[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Mon Mar 18 09:02:55 2013 -0700

    crlf fixed.

[33mcommit 38d91308c302eb4f0b5ed24e064ee56395f9fc01[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Mar 17 12:26:09 2013 +0000

    Failing single-datapoint methods keep their original stack trace

[33mcommit af692868db814126bbac29a1f28f5adf30c6ce1c[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Mar 17 01:14:17 2013 +0000

    DataPoints are now autogenerated for boolean and enum parameters, if no sources are otherwise specified

[33mcommit 50e3d1bc87b4b16f0617b6212252363f499397ab[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Mar 17 00:30:46 2013 +0000

    Added parameter to annotation to mark exceptions in datapoint methods as ignorable.

[33mcommit 0a9761833834ff96d8079e01dc010050ba4cfea2[m
Author: pimterry <pimterry@gmail.com>
Date:   Sat Mar 16 23:18:22 2013 +0000

    Added javadoc to the DataPoint annotation

[33mcommit 5c2070d7cf981e2e103aef6fd0ef64c473331325[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Feb 17 14:23:26 2013 +0000

    Fixes #449, stopping AllMembersSupplier hiding DataPoint method exceptions
    
    Also includes a rewrite of the Theory nullsAccepted code, since that relied on the previous behaviour of this.

[33mcommit ccf0c0af551df541e40edb07d19a57072a8b14b1[m
Author: pimterry <pimterry@gmail.com>
Date:   Sat Mar 16 22:35:49 2013 +0000

    Changed single-valued datapoints back to deferred execution

[33mcommit 15c6048229bd16c4bfdd80b23f37357a58226d20[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Fri Mar 15 16:26:32 2013 -0700

    More tests added.

[33mcommit 3209ce6e2d1b84ae2493a7906eecd76dfff1a8af[m
Author: pimterry <pimterry@gmail.com>
Date:   Thu Mar 14 21:05:00 2013 +0000

    Minor tweak to improve symmetric set up of convertable types in ParameterSignature

[33mcommit 34336085d5aba69c997f8e6b244531561afebcd4[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu Mar 14 13:51:37 2013 -0700

    Modification in response to code review from @kcooney and @dsaff.

[33mcommit b1832b23b6260561467a277d492b0db16f5ecd25[m
Author: pimterry <pimterry@gmail.com>
Date:   Thu Mar 14 11:04:12 2013 +0000

    Moved instance initialisation for type conversion map into static method

[33mcommit 278d76f285c4729700276e875ff8d69ea2ecfbc2[m
Author: pimterry <pimterry@gmail.com>
Date:   Wed Mar 13 23:24:01 2013 +0000

    Further theory optimisation to avoid calling datapoint methods for multi-valued datapoints

[33mcommit e9d4de8e15255b03b60e935390e517d4de90a73b[m
Author: pimterry <pimterry@gmail.com>
Date:   Wed Mar 13 23:13:10 2013 +0000

    Single-datapoint methods are now only called if the return types could be relevant, and theory parameter signatures are compared with types via a prebuilt map rather than reflection.

[33mcommit cc8497f28e1d5a46d7940a0b36556154c83d6f7a[m
Author: pimterry <pimterry@gmail.com>
Date:   Mon Mar 11 01:17:00 2013 +0000

    Parameters are now matched on value, not defined type, for array and single-valued methods and fields.

[33mcommit 2ade5fd3aad123d6507b59ed5d48c8f030314f00[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Mar 10 20:37:48 2013 +0000

    Changed AllMembersSupplier to call single-valued methods at parameter assignment time, not parameter use time.

[33mcommit 5edfb4447b609c178d63a3d991172861076d143b[m
Merge: 318adee4 e012e06d
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu Mar 7 13:21:14 2013 -0800

    Merge branch 'master' into filter-option
    
    Conflicts:
            src/test/java/org/junit/tests/AllTests.java

[33mcommit e012e06dc326394a3a834d974e9af3fea0e6df91[m
Merge: 72af03c4 bf985739
Author: David Saff <saff+aa@google.com>
Date:   Thu Mar 7 09:03:56 2013 -0800

    Merge pull request #648 from dlam/master
    
    Fix inconsistencies in javadocs.

[33mcommit bf985739143186aa34729a16c50e2db71ab9c741[m
Author: Dustin Lam <mynameisdustinlam@gmail.com>
Date:   Thu Mar 7 11:55:14 2013 -0500

    Fix more inconsistencies in javadocs.
    
    These changes were made with consistency with the rest of the project, and with Oracle's Java code conventions in mind:
     - <p> tags are now on their own new line, separating paragraphs, and without empty new lines above and/or below them.

[33mcommit 5887ca08ddf687e35c2974fd08b7bc63fcc1abaf[m
Merge: a254e9c8 72af03c4
Author: Dustin Lam <mynameisdustinlam@gmail.com>
Date:   Thu Mar 7 11:53:42 2013 -0500

    Merge remote-tracking branch 'upstream/master'
    
    Conflicts:
            src/main/java/org/junit/runner/notification/RunListener.java

[33mcommit 72af03c49fdad5f10e36c7eb4e7045feb971d253[m
Author: David Saff <saff@google.com>
Date:   Wed Mar 6 07:33:22 2013 -0800

    Make RunNotifier code concurrent.
    
    Squashed commit of the following commits from https://github.com/junit-team/junit/pull/625:
    
    commit a400a3a06d1acc00c1b168af38b84a39f31f2bb3
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Sat Mar 2 08:49:39 2013 -0800
    
        Move wrapIfNotThreadSafe() to RunNotifier
    
    commit 38ac72efad6c60b82bc628497921d9fd88bf694f
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 28 22:37:29 2013 -0800
    
        Revert changes to build.xml
    
    commit e1172af553d3883bf103a5ee9d0fce711acd5f7b
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 28 22:13:52 2013 -0800
    
        minor cleanup
    
    commit b11b5aa0803ec0d54c6f1acda0d92899cf772fe2
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Mon Feb 25 17:09:10 2013 -0800
    
        Undo changes to notice
    
    commit a85566fd2b4ad12530b95f443f4175f0e4e683a6
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Mon Feb 25 17:08:11 2013 -0800
    
        Make code style consistent
    
    commit 4b8efa1dbf09ae426694fdf9e486f6c125aa24ee
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Sun Feb 24 17:45:23 2013 -0800
    
        Update in response to code review commends by dsaff and Tibor17
    
    commit a6fb342a9eb214734957691a91bfa699e05e29bf
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Sun Feb 24 17:44:29 2013 -0800
    
        Make RunNotifierTest a JUnit4-style test again
    
    commit 6b39220b7265cb8812773bc3aa1aab4d3ff1deca
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Fri Feb 15 08:38:43 2013 -0800
    
        Remove copyright
    
    commit 6a65cd9e8f77d6e09f6c968abb01081e91aa3b95
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 14 17:50:25 2013 -0800
    
        Remove unrelated changes
    
    commit 39978162479b0788629a8df52dbf89332c15fdc1
    Merge: 10c5130 dbe8a97
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 14 17:40:40 2013 -0800
    
        Merge branch 'master' into concurrent-run-listeners
    
    commit 10c5130de13f0e1b8dad924ee9af0ab238bb7863
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 14 11:03:39 2013 -0800
    
        Remove mention of jcip-annotations from NOTICE.txt
        Reduce diffs
    
    commit 2873269517f19fa2b8dde849308b8083399d3c4a
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 14 10:46:09 2013 -0800
    
        Replace Concurrent annotation with RunNotifier.ThreadSafe
        Update Javadoc
        Delete AddRemoveListenerTest (functionality covered by RunNotifierTest)
    
    commit 58a5a92caa9110f6c348de44f94c74715d9eb263
    Merge: 02f1486 cc7d45b
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 7 08:56:08 2013 -0800
    
        Remove dependency on jcip-annotations
    
    commit cc7d45b26ba6962fb1945b2045c7750a71e9b18a
    Merge: 789c302 02f1486
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 7 08:55:24 2013 -0800
    
        Merge branch 'concurrent-run-listeners' into concurrent-run-listeners_remove-jcip-deps
    
        Conflicts:
            src/test/java/org/junit/runner/notification/SynchronizedRunListenerTest.java
    
    commit 789c3021b48a5fa48a49057e9d616d8792ecf120
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 7 08:53:11 2013 -0800
    
        Remove tabs
    
    commit 02f14867526142e729a85652907b59528e7a25fc
    Merge: a04aae1 708d972
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Thu Feb 7 08:47:40 2013 -0800
    
        Merge branch 'Tibor17-junit.issues' into concurrent-run-listeners
    
        Conflicts:
            src/test/java/org/junit/runner/notification/SynchronizedRunListenerTest.java
            src/test/java/org/junit/tests/AllTests.java
    
    commit 708d972c904310a65fcf812c343fb9639d29776d
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Thu Feb 7 01:07:10 2013 +0100
    
        threadsafe annotation
    
    commit 796801e640cf2bae2a65c81c58f057bf5a9aba1e
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Mon Feb 4 17:17:16 2013 -0800
    
        Remove jcip-annotations dependency; add @Concurrent annotation
    
    commit e30fe38bf6bb7adbfd51ca78474f4762e82cc337
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Tue Feb 5 01:18:13 2013 +0100
    
        AllTests run SynchronizedRunListenerTest
    
    commit 0c358514b816a34f55310f36150c14292cd784f2
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Tue Feb 5 01:11:43 2013 +0100
    
        clarified the purpose of SynchronizedRunListener
    
    commit f8016a41eaa7183d4364a7dd1aa6b5a93aef225b
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Tue Feb 5 01:09:25 2013 +0100
    
        merged from https://github.com/kcooney/junit/blob/c099a99b76ccd985639882369652dfcadb3722b4/.classpath
    
    commit a5e8a7115ae17949d05d6a07fd39fedb24e623db
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Tue Feb 5 01:03:44 2013 +0100
    
        merged from https://github.com/kcooney/junit/blob/41626fd3022c0d73d6f02807be0344a9cf6acafa/src/test/java/org/junit/runner/notification/SynchronizedRunListenerTest.java
    
    commit a04aae196c957241c36019938a95c85417bbb21d
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Mon Feb 4 13:31:29 2013 -0800
    
        Add tests in AddRemoveTestListenerTest to RunNotifierTest
    
    commit 5112c1a5c3dd92f3d38de4f83edc910eb7e6dd04
    Merge: 41626fd c220ad7
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Mon Feb 4 13:07:37 2013 -0800
    
        Merge branch 'Tibor17-junit.issues' into concurrent-run-listeners
    
        Conflicts:
            build.xml
            src/main/java/org/junit/runner/notification/RunNotifier.java
            src/main/java/org/junit/runner/notification/SynchronizedRunListener.java
            src/test/java/org/junit/tests/AllTests.java
    
    commit c220ad7a8824c8a73cd8bdf88cbbd1ae3de3b021
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Mon Feb 4 00:42:22 2013 +0100
    
        using COWAL + backward compatible + SynchronizedRunListener
    
    commit 41626fd3022c0d73d6f02807be0344a9cf6acafa
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Sun Feb 3 09:54:24 2013 -0800
    
        Cleanup implementation and tests
    
    commit c099a99b76ccd985639882369652dfcadb3722b4
    Author: Kevin Cooney <kcooney@google.com>
    Date:   Sat Feb 2 17:26:39 2013 -0800
    
        Fix equals method for SynchronizedRunListener
    
    commit 1d6914b1fb211febb68b4713d40c46d3c6c1cca6
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Fri Feb 1 00:42:38 2013 +0100
    
        backward compatible, SynchronizedRunListener, removed EqualRunListener
    
    commit 21a926e47461f01fdfecfc45c0b5cc0f61b7d8d5
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Wed Jan 30 20:01:55 2013 +0100
    
        problem to remove synchronized listener
    
    commit 20c6b53e0ff2625fa6b82d3984d869b6bcfb1e55
    Merge: 573828c 27ba66f
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Tue Jan 29 19:37:25 2013 +0100
    
        Merge branch 'master' of git://github.com/KentBeck/junit into junit.issues
    
    commit 573828cb296a6d4e8d9b9b12c0af836e856b61d9
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Sun Jan 20 22:38:12 2013 +0100
    
        AllTests
    
    commit 497e6ca82bdf80ed4c327a840593c40112adcfcc
    Merge: a691962 3aca014
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Sun Jan 20 22:29:44 2013 +0100
    
        Merge branch 'master' of git://github.com/KentBeck/junit into junit.issues
    
    commit a69196297ed7d1a3725e85714942deac199d9602
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Sun Jan 20 22:28:12 2013 +0100
    
        #realUsage test, simplified
    
    commit d2f1710bcf7e1b2f1949372318ac4bb1b90a8c49
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Thu Dec 20 16:06:19 2012 +0100
    
        1E3 -> 1000, 1E2 -> 100
    
    commit 4df3e8119adce8a50d66d6d91c83dbdd045095ed
    Author: Tibor Digana <tibor17@lycos.com>
    Date:   Wed Dec 19 19:41:23 2012 +0100
    
        synchronized substituted by thread safe collection

[33mcommit 6fd44daf9ecd93d78372c4a37c4d54bc3c3577d8[m
Merge: dce07cd9 2918286b
Author: David Saff <saff+aa@google.com>
Date:   Tue Mar 5 14:43:20 2013 -0800

    Merge pull request #640 from coreyjv/issue162
    
    Issue #162 Implementation

[33mcommit 318adee43493447e22bbea89e0f17260e0186a14[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Tue Mar 5 09:04:19 2013 -0800

    JavaDoc added.
    "--filter arg" support added (as opposed to "--filter=arg").
    Command line parser factored into JUnitCommandLineParser class.
    Unit tests added.

[33mcommit a254e9c8379cb021d1b85c49b2c0cdbd9b5d4e1d[m
Author: Dustin Lam <mynameisdustinlam@gmail.com>
Date:   Sun Mar 3 01:27:40 2013 -0500

    Fix inconsistencies in javadocs.
    
    These changes were made with consistency with the rest of the project, and with Oracle's Java code conventions in mind:
     - <p> tags are now on their own new line, separating paragraphs, and without empty new lines above and/or below them.
     - Remove unnecessary new lines separating lists and <pre> tags.
     - Remove unnecessary <p> tags for leading paragraphs.
     - Add missing <p> tags.
     - Remove white space immediately following <p> tags.
     - Remove all unnecesary closing </p> tags.
    
    Souyrce for Oracle's Javadoc conventions:
    http://www.oracle.com/technetwork/java/javase/documentation/index-137868.html

[33mcommit 0a9a389570a171b67c3155d312f2e90bdab5aaaf[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Fri Mar 1 14:22:47 2013 -0800

    Changes due to suggestions from @kcooney.

[33mcommit 196c4ed79cbaca37709643b54913b361b677ae04[m
Author: Noel Yap <noel.yap+github.com@gmail.com>
Date:   Thu Feb 28 15:43:28 2013 -0800

    --filter option implemented.

[33mcommit 2918286bf4a010c9ac8eadffb958ff10fb41ad62[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Mon Feb 18 19:14:51 2013 -0500

    Issue #162 Adjustments
    
    - Modified fMethodDescriptions to be final
    - Changed from put to putIfAbsent

[33mcommit dce07cd9a6da881ff3fbbce84069cbedb9e53f1a[m
Merge: dbe8a972 8f11e709
Author: David Saff <saff+aa@google.com>
Date:   Mon Feb 18 11:20:52 2013 -0800

    Merge pull request #636 from kcooney/remove-copyrights
    
    Remove incorrect copyrights

[33mcommit 08719e9b61d07c17b6a4f599ecd2cd1a1519120a[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Sun Feb 17 13:21:33 2013 -0500

    Issue #162 Implementation
    
    Added ConcurrentHashMap to improve performance.

[33mcommit 8f11e709cd7dc7207002b3cf31c6da9462da1a1e[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Feb 15 08:40:14 2013 -0800

    Remove incorrect copyrights

[33mcommit dbe8a972fadaed5d2b88f4dfa44328fa323b59a2[m
Merge: 63acecdd 45524a9d
Author: David Saff <saff+aa@google.com>
Date:   Tue Feb 12 07:17:20 2013 -0800

    Merge pull request #621 from pimterry/named-datapoints-#65
    
    Added named datapoint(s) support to theories, fixing #65.

[33mcommit 63acecdd64e13efbdce32588ca43d85ae989c7c8[m
Merge: 1b68fdb5 02371d11
Author: David Saff <saff+aa@google.com>
Date:   Tue Feb 12 07:02:37 2013 -0800

    Merge pull request #632 from pimterry/booleanArrayEq-#86
    
    Added boolean assertArrayEquals to Assert, fixing #86

[33mcommit 45524a9ddcd387fde3a20740e9c9c90ed71fec3a[m
Author: pimterry <pimterry@gmail.com>
Date:   Tue Feb 12 00:48:33 2013 +0000

    Changed exception signature for assignments reflective methods to support older Java versions

[33mcommit 02371d1154f29f894cd2c7f83ce6743f4abbe76a[m
Author: pimterry <pimterry@gmail.com>
Date:   Tue Feb 12 00:16:40 2013 +0000

    Added two simple tests for boolean assertArrayEquals

[33mcommit 26d34db6c2c12b0fee9ae3d307b3f18fe0ee62da[m
Author: pimterry <pimterry@gmail.com>
Date:   Sat Feb 9 21:44:21 2013 +0000

    Added boolean assertArrayEquals

[33mcommit 62c0364775d3c7d3c0b9f7532f0b16b1537cf6fa[m
Author: pimterry <pimterry@gmail.com>
Date:   Sat Feb 9 20:57:33 2013 +0000

    Improvements to DataPoints/FromDatapoints annotation javadoc

[33mcommit 1b68fdb5f9183d45407e7d39e1f271e0452a7185[m
Merge: 2a6813aa 72af29d7
Author: David Saff <saff+aa@google.com>
Date:   Thu Feb 7 07:36:12 2013 -0800

    Merge pull request #631 from pimterry/add-target-to-datapoints
    
    Added specific targetting for the various theory annotations

[33mcommit 72af29d7f52e6f3029fe8464c2b0bb63efab2fab[m
Author: pimterry <pimterry@gmail.com>
Date:   Wed Feb 6 23:50:18 2013 +0000

    Added specific targetting for the various theory annotations

[33mcommit 2a6813aa3a5ce24b2c28d96768d8106e62844531[m
Merge: b8adef37 718bcbf3
Author: David Saff <saff+aa@google.com>
Date:   Wed Feb 6 09:57:46 2013 -0800

    Merge pull request #629 from nhajratw/master
    
    Updated to reference new github account

[33mcommit 718bcbf31260c9be513c39485475d6d1156ce59a[m
Author: Nayan Hajratwala <nayan@chikli.com>
Date:   Wed Feb 6 11:58:48 2013 -0500

    updated references from KentBeck github account to junit-team

[33mcommit 9b81f967ab997fa980c2eb1461c8ad4338c9a0b1[m
Author: pimterry <pimterry@gmail.com>
Date:   Wed Feb 6 00:09:38 2013 +0000

    Added JavaDoc to DataPoints and FromDataPoints

[33mcommit 3375d1c3f489fc5d2b5c6629c55867bbfe2a033f[m
Author: pimterry <pimterry@gmail.com>
Date:   Fri Feb 1 01:32:42 2013 +0000

    Various improvements to named datapoint support after review.
    
    Mostly revolves around validation of theory class configuration and some reorganising and tidy up of bits of testing code.

[33mcommit 0030e51f286ed52ad4c2c44857c4a28525c83f93[m
Author: pimterry <pimterry@gmail.com>
Date:   Tue Jan 29 01:26:10 2013 +0000

    Minor further refactoring of Theory ParameterSupplier setup

[33mcommit 1963b424c176742b711fb4226ce8f314d431813c[m
Author: pimterry <pimterry@gmail.com>
Date:   Tue Jan 29 01:11:47 2013 +0000

    Refactored FromDataPoints functionality to use SpecificDataPointsSupplier as a normal ParameterSupplier, by allowing ParameterSuppliers to take TestClasses in their constructors.
    
    Also added a simple parameter supplier test case, since it appears there weren't any at all until now.

[33mcommit 043e82844ef2c3c0961d98a34771c84f7a950d1a[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Jan 27 18:42:21 2013 +0000

    Added named datapoint(s) support to theories, for #65.
    
    Also refactored tests for internal elements of theory code into a matching internal test package en route, to make the two package heirarchies correspond properly.

[33mcommit b8adef37033aa4177453362d24b3f2ecb7031c59[m
Merge: 6133ac8b dd297dd9
Author: David Saff <saff+aa@google.com>
Date:   Tue Feb 5 10:52:15 2013 -0800

    Merge pull request #626 from Jire/patch-3
    
    Documentation fix: 'iff' becomes 'if and only if'

[33mcommit dd297dd9cb1436ac4464dacae9b43ab69aa47fc1[m
Author: Thomas Nappo <technology@live.com>
Date:   Tue Feb 5 12:50:21 2013 -0500

    Documentation fix: 'iff' becomes 'if and only if'
    
    While clever jargon is always appreciated documentation should be understood by all audiences. This fix changes the questionable "iff" into its explicit value, "if and only if."

[33mcommit 6133ac8b7695b60583e852548c7e1b9cbfc1b626[m
Merge: 27ba66f2 05d81436
Author: David Saff <saff+aa@google.com>
Date:   Thu Jan 31 08:08:54 2013 -0800

    Merge pull request #624 from romerosilva/master
    
    Fix for issue #587. Simple javadoc correction.

[33mcommit 05d81436e99447f08bf1537ea60b5f11ebda2107[m
Author: Romero Silva <romero@linux-workstation.(none)>
Date:   Thu Jan 31 05:52:53 2013 -0500

    Fix for issue #587. Wrong use of round brackets on first line of code sample.

[33mcommit 27ba66f2da17ec2580dc8289b68c29365a872a1a[m
Merge: 2903ff09 2c6c142a
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 28 16:11:09 2013 -0800

    Merge pull request #623 from pimterry/errors-on-non-static-datapoints-#125
    
    Added validation that all datapoint methods and fields are public and static to theory initialization

[33mcommit 2c6c142aa801cef3520ca668e75a670a32b4859a[m
Author: pimterry <pimterry@gmail.com>
Date:   Mon Jan 28 23:06:29 2013 +0000

    Added error validation to check that datapoints array fields are all static and public too, fixing #125

[33mcommit 2903ff09a196761c9a6596b8f46ae3828a66d099[m
Merge: 3aca014a d0e050c5
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 28 14:08:00 2013 -0800

    Merge pull request #614 from stephenc/junit.reopen
    
    Tweaks on pull request https://github.com/KentBeck/junit/pull/613

[33mcommit d0e050c5ab3dc4fba6a92113668fbc799417a4b2[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Mon Jan 28 21:43:18 2013 +0000

    Add issueManagement and ciManagement

[33mcommit 3aca014a2c39723febbe7def2fd132da80c3f4a9[m
Merge: 74f32863 7a12b707
Author: David Saff <saff+aa@google.com>
Date:   Fri Jan 18 11:57:29 2013 -0800

    Merge pull request #607 from pimterry/theory-enum-failure-messages
    
    Theories failure messages describe enum arguments unhelpfully

[33mcommit 7a12b7070aaa88712ed449c0a746741fd7e0237a[m
Author: pimterry <pimterry@gmail.com>
Date:   Fri Jan 18 00:21:29 2013 +0000

    Formatting

[33mcommit 39d8b9e93ff544880f39a3497fb428c6cba5288b[m
Author: pimterry <pimterry@gmail.com>
Date:   Fri Jan 18 00:14:40 2013 +0000

    Improved PotentialAssignment description with better formatting, and handling for failed toString() calls. Refactored tests into proper unit tests closer wrapping the relevant bit of this code too.

[33mcommit e34bdc9cc05fc90400496a1f4bea18127e5a151c[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 13:39:03 2013 +0000

    Move the generating documentation to a separate profile
    
    * Given that this profile is for a specific purpose it does not need to be namespaced
    * The release profile needs namespacing as it is used from settings.xml also which
      is cross project. There should be nobody using a profile called generate-docs to
      activate their release GPG credentials

[33mcommit 56cdd8b628f590381759d646dde421eec284c381[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 13:20:39 2013 +0000

    Move javadoc:jar and source:jar to the release profile.
    
    * Only need to be generated when cutting a release or deploying a -SNAPSHOT remotely
    * In those remote deploy situations -Pjunit-release will be active anyway
    * Moving them out of the main build speeds up development for all

[33mcommit a813a86dc77dbc50a9bbc74c1e6de61446a5693b[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 13:16:48 2013 +0000

    Move the javadoc configuration to the default.
    
    * Making the configuration of javadoc tied to the execution makes it harder for
      people to tweak the javadoc configuration as they have to invoke the lifecycle
      rather than just invoke 'mvn javadoc:javadoc' to see the effects quickly

[33mcommit d40631c109d1e09d5be4e66a678f030b11362a2b[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 11:27:30 2013 +0000

    Actually allow forkers to sign their own releases
    
    * If you run an internal repo, you may be required to have signed artifacts
      So to make their life easier, use a property to define the default signing key
      Allows for others to swap in the key they use via the -Darguments=-Dgpg.keyname=
      trick

[33mcommit 34c0a1aeee1700e2dd7b173b2e3dd4841c2a0e72[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 11:17:41 2013 +0000

    update the building docs
    
    * When running  there is no need to do a  first
    
    * Add some docs for people who need to maintain an in-house fork.'

[33mcommit 4eeb323964386ed38b1d14b1a052cc9f13223e53[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 10:33:57 2013 +0000

    Allow tweaking release arguments form the CLI
    
    * We need to provide a default empty value for the 'arguments' property within the pom
      This ensures that when the property is not provided, the build can still continue
    * The `arguments` property is especially useful if you don't have the GPG key for
      signing as you can then test the release process by adding
    
        -Darguments=-Dgpg.skip=true
    
      to the command line used to prototype a release and the verification build will succeed.

[33mcommit 2b4742e3b9f794eda24294bea6e78bff0fdc7010[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 10:27:42 2013 +0000

    GPG signature should be generated prior to 'install' phase.
    
    * There can be issues for the local repository if the signature happens after the install
      to local repository cache.
    * Only people with the GPG key should be running with the 'junit-release' profile active
    * Therefore safer to move the execution to the 'verify' phase

[33mcommit 65459319a98852fbccabdcabe9470662845f06e7[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 10:14:00 2013 +0000

    Make the release plugin generate tags according to JUnit convention
    
    * JUnit has been using r4.xx as the tag format
    * Maven Release Plugin would, by default, use junit-4.xx as the tag format
    * Maven has no strong opinion on the tag, just providing a sensible default
    * The Maven way is to follow convention, JUnit has the precident convention with existing tags

[33mcommit e15b287ccec2a1f4866a8bd1cd2a313a6163163d[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 10:10:02 2013 +0000

    Only use a property where multiple entries need syncing
    
    * The hamcrest version is only used in one place, i.e. the dependency.
    * Using properties to define dependency versions can cause issues for others.
    * Using properties to define a shared version across multiple dependencies causes less issues
      when you have multiple dependencies that need to be kept in sync.
    * We only have one dependency here and it doesn't need syncing to any other dependency
    * Therefore the right thing is to just specify the version in the dependency
    * End users can still override the dependency in their poms.

[33mcommit a8542a85773d108fa7f2577a0aee8709b8de3b54[m
Author: Stephen Connolly <stephen.alan.connolly@gmail.com>
Date:   Thu Jan 17 10:06:13 2013 +0000

    Apply the canonical ordering of pom.xml elements
    
    * You are not required to use the canonical ordering, but it makes it easier if you
      follow the conventions and follow it.

[33mcommit aa707472cbdfd2f5a0025f423a2c4053549ba819[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Jan 17 10:36:17 2013 +0100

    removed "Update SNAPSHOT version in pom.xml" "Upload stuff to github (including tag)"

[33mcommit 4908f0a00860ce91cdff0bc0941bc7aa58dc7974[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Jan 17 02:13:24 2013 +0100

    -Dtag=4.12

[33mcommit a83de0f2964507e123192272674d7485788d9f42[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Jan 16 22:21:32 2013 +0100

    public GnuPG key 67893CC4

[33mcommit 59f3fa6ea11433ffd914e6c2032cdad0036f435e[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Jan 16 19:52:34 2013 +0100

    removed settings.xml, updated building-junit.txt and pom.xml

[33mcommit 57801df202ebf6926ab93611adfc0a10667346b6[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jan 15 23:24:21 2013 +0100

    promoting released artifacts and closed staging

[33mcommit 0fdec440b59be32e16a084a2ff6fd7a596da2c8f[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jan 15 18:37:52 2013 +0100

    Prepare for Maven release

[33mcommit 74f32863f4ec20f015bd3b1a4300c93a69ce98ba[m
Merge: 8afad9d0 23f84042
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 14 11:42:10 2013 -0800

    Merge pull request #609 from shirish4you/master
    
    Added cloudbees logo

[33mcommit 8afad9d0b37f5996f2aebb873b99a4f5830e7946[m
Merge: c38bdb77 4f3ca2d4
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 14 11:41:30 2013 -0800

    Merge pull request #608 from Tibor17/junit.reopen
    
    Updated build documentation in mavenization

[33mcommit c38bdb77179094662b988be3f7bfe785aa3a9d6e[m
Merge: 92a3f730 f5c7fe43
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 14 11:36:32 2013 -0800

    Merge pull request #611 from motlin/master
    
    Implement assertNotEquals() for float parameters.

[33mcommit 0ebb59e0dec269db0816c63fda6113b006b3de52[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Jan 13 20:01:45 2013 +0000

    Simplification of theory parameter names, since format automatically deals with toString() and nulls.

[33mcommit a13afe130ee61e4e1b1a7de52c7323bd699fd2e6[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Jan 13 19:52:23 2013 +0000

    Fixed two missed unit tests that were explicitly checking the previous error messages

[33mcommit f5c7fe43447b008b4db13e031b7c0c3551ae9ddd[m
Author: Craig P. Motlin <cmotlin@gmail.com>
Date:   Sun Jan 13 13:05:05 2013 -0500

    Change failure message in assertNotEquals() to show actual instead of
    unexpected, to be consistent with assertNotSame().
    
    Change the parameter names from first and second to unexpected and
    actual.

[33mcommit 78b4a8975523d0288a6f20f0ae7862b45cb55038[m
Author: Craig P. Motlin <cmotlin@gmail.com>
Date:   Sun Jan 13 12:46:31 2013 -0500

    Implement assertNotEquals() for float parameters.
    
    Fix inconsistencies between assertEquals() and assertNotEquals() for
    double parameters.

[33mcommit 4f3ca2d4bdeb34a9e9ebcb315ef22863d3775ef5[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Jan 13 13:00:15 2013 +0100

    NOTICE.txt

[33mcommit 23f8404291390e6a9d0ca33056f7a8adcab55184[m
Merge: 92a3f730 30e499dd
Author: Shirish Padalkar <shirishp@thoughtworks.com>
Date:   Sun Jan 13 15:55:29 2013 +0530

    Added cloud bees logo. Merged with master

[33mcommit 236883d575f709a6311cec6b2fa34aeabc3835c6[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Jan 13 09:33:21 2013 +0000

    Add test and check for null, to stop null datapoints failing in message creation

[33mcommit 1c9a283f2ee2cc1e03b4eeb2749752bbf956ecac[m
Author: pimterry <pimterry@gmail.com>
Date:   Sun Jan 13 09:26:11 2013 +0000

    Updated enum error message improvement to apply to all objects, and to also show variable names for these errors.

[33mcommit 4a7adb2869b2aa69d309e3cf502f7d8750b5c54c[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Jan 13 00:53:18 2013 +0100

    double http://

[33mcommit 5f74770bb3423997a62e28c106979dc0f8b24216[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Jan 13 00:34:23 2013 +0100

    Updated build documentation in mavenization

[33mcommit 8ae9a7228e772aaec9f6acdc5059ec38dda1c90d[m
Author: pimterry <pimterry@gmail.com>
Date:   Sat Jan 12 20:48:49 2013 +0000

    Improved the naming of error values in the case where they're java enums, since those already have meaningful names we can use.

[33mcommit 92a3f73089e9d4966a90f9f68dbad059732d8162[m
Merge: 89b40042 178f854e
Author: David Saff <saff+aa@google.com>
Date:   Thu Jan 10 10:05:04 2013 -0800

    Merge pull request #601 from skazzyy/master
    
    Fix for issue #499 Assumes in tests run by Theories

[33mcommit 178f854e4c7e31ece6d71f5aa4433f0432349f4f[m
Author: William Herbert Lichtenberger <skazzyy@gmail.com>
Date:   Wed Jan 9 16:35:07 2013 -0600

    Make stylistic changes
    
    Put { on first line with a space before it

[33mcommit 89b40042d2ed02806314f9d86f60667751ff7699[m
Merge: 32c60eae 561fb840
Author: David Saff <saff+aa@google.com>
Date:   Wed Jan 9 13:26:42 2013 -0800

    Merge pull request #511 from Tibor17/junit.mavenize3
    
    Maven project junit:junit:jar

[33mcommit 561fb840af9d00abab5449f704a77fd6a7f2509d[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Jan 9 00:06:41 2013 +0100

    removed spaces before period in comment

[33mcommit a7092c4f4b4a6d7a89262b8cd83712e6e1e7df3f[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jan 8 22:46:11 2013 +0100

    assignation + settings reference

[33mcommit fbcebcae05bc4aee3f8dcf24ebfcf69e6b245a0f[m
Author: William Herbert Lichtenberger <skazzyy@gmail.com>
Date:   Tue Jan 8 15:44:25 2013 -0600

    Fix for #499 Assumes in tests run by Theories
    
    Fixes an issue (#499) where Assume cannot be used in a method annotated
    by @Test if theories also exist in that test class.

[33mcommit 1a637a4b43c4ff6dca59820f39e4e266f759922d[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jan 8 22:03:29 2013 +0100

    removed odd spaces before period

[33mcommit e7ad65f149a1d9bf55dc50f69ee7f7cabe7a3ccb[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jan 8 21:56:37 2013 +0100

    Jenkins is using custom `localRepository`

[33mcommit 9eb408acdd1c07cbfc8349d4632653331ebc42b5[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Jan 8 00:39:05 2013 +0100

    removed release-plugin

[33mcommit faf9726b7dc49707827f3ca7e7fee4539556c7ba[m
Merge: b7a55bf7 32c60eae
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Jan 7 22:59:37 2013 +0100

    Merge branch 'master' of git://github.com/KentBeck/junit into junit.mavenize3

[33mcommit b7a55bf71c21c2950342c791a8d9afc43da35a54[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Jan 7 22:51:33 2013 +0100

    fixed to 4 chars indentations from tabs

[33mcommit 535ad1c6a96d338518ad5a9fd4142640cda1b931[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Jan 7 22:18:39 2013 +0100

    Version.java update - same principle like in ANT

[33mcommit 6f71f80a3f81d45a79fa646da0865990837d2ab5[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Jan 7 21:31:16 2013 +0100

    removed ZIP, refactoring, enabled snaphosts/releases Maven Central

[33mcommit 32c60eae3d1f40936ed7491da3ac31efff3478e4[m
Merge: ef820655 736c9226
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 7 09:51:42 2013 -0800

    Merge pull request #596 from Tibor17/junit.fix
    
    Sorter#NULL seems to be a constant

[33mcommit ef8206551c0ec51f70ec25e7371333dc5c8d99b1[m
Merge: b943f97e e81be453
Author: David Saff <saff+aa@google.com>
Date:   Mon Jan 7 08:35:13 2013 -0800

    Merge pull request #598 from kcooney/fix-rawtypes-warnings
    
    Fix rawtype compiler warnings found when compiling with JDK7

[33mcommit 3c282dd195d1bb8198c12508b5a7f773a4137421[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Jan 7 13:01:14 2013 +0100

    removed /stylesheet.css, and FTP deployment, updated downloadUrl

[33mcommit a1599c8209d4d7177a16745a500e34b898e49174[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Jan 7 01:58:28 2013 +0100

    LICENSE->LICENSE.txt, removed truezip-maven-plugin

[33mcommit 4dc82ecc92c2089411af471b348c5b7e738dd3ce[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Jan 7 01:49:49 2013 +0100

    deleting the sh file

[33mcommit e81be4536f5156b105fff4b7328fc3e4e7a24931[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Jan 5 10:40:59 2013 -0800

    Fix rawtype compiler warnings found when compiling with JDK7

[33mcommit 736c9226f2d963b439f38e4ad6074c4ed1dac5df[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Jan 4 23:43:10 2013 +0100

    Sorter#NULL seems to be a constant

[33mcommit b943f97e8c2108dafa66ebab73519a6bfb90db8d[m
Merge: 6d9384b1 65f6907a
Author: David Saff <saff+aa@google.com>
Date:   Fri Jan 4 07:55:50 2013 -0800

    Merge pull request #594 from shirish4you/patch-2
    
    Added build status to readme

[33mcommit 6d9384b1939f488c793c4ec9cae7bf1c84c31336[m
Merge: ad0f5056 5698cfb8
Author: David Saff <saff+aa@google.com>
Date:   Fri Jan 4 07:49:06 2013 -0800

    Merge pull request #586 from Tibor17/junit.fix
    
    Fixed formating in Enclosed Javadoc

[33mcommit 65f6907a34c721995b29ad48731e6dd101aa05d8[m
Author: Shirish Padalkar <shirish4you@gmail.com>
Date:   Fri Jan 4 09:27:01 2013 +0530

    Added link to Jenkins instance for build status

[33mcommit 30e499dde23ce68aa88a1b4f8805736d0d223a36[m
Author: Shirish Padalkar <shirish4you@gmail.com>
Date:   Fri Jan 4 09:24:10 2013 +0530

    Added link to CloudBees's "Built on DEV@cloud"

[33mcommit ad0f5056889412735690e5dbdceb80d0217779b8[m
Merge: ef6ee7fa 04218bee
Author: David Saff <saff+aa@google.com>
Date:   Thu Jan 3 13:22:42 2013 -0800

    Merge pull request #583 from UrsMetz/expected-exception-fail-when-assertion-error-expected-but-not-thown
    
    ExpectedException doesn't fail when an AssertionError is expected but not thrown

[33mcommit ce80e9abe85e83a61c4d56f98647bda2ac81f94d[m
Author: Shirish Padalkar <shirish4you@gmail.com>
Date:   Thu Jan 3 18:31:25 2013 +0530

    Added build status to readme
    
    https://junit.ci.cloudbees.com/job/JUnit/badge/icon gives latest build status icon

[33mcommit 34349080684c36bab9f82b1ff51cc3a9fb548280[m
Author: Shirish Padalkar <shirish4you@gmail.com>
Date:   Thu Jan 3 17:53:12 2013 +0530

    Added CloudBees logo
    
    Added CloudBees Built on Dev@cloud image

[33mcommit ef6ee7fa40e7f434d88c294b9fb2d24b57d5fa81[m
Merge: 9824a929 523a6731
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jan 3 04:14:46 2013 -0800

    Merge pull request #591 from shirish4you/patch-2
    
    Package README.md instead of README.html in ZIP file

[33mcommit 523a6731796ccc8baf211dbedd94bd7553f7852f[m
Author: Shirish Padalkar <shirish4you@gmail.com>
Date:   Thu Jan 3 17:04:49 2013 +0530

    Removed references to README.html
    
    Removed references to README.html and replaced with README.md

[33mcommit 9824a929ffa0e8dd5f52909faba0031cf9e79a69[m
Merge: dc2b1c93 6b97cfa7
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jan 3 02:27:17 2013 -0800

    Merge pull request #590 from shirish4you/patch-1
    
    Fix typo [WiKi -> Wiki]

[33mcommit 6b97cfa77503a00416f401ad47f375f087e8c3cb[m
Author: Shirish Padalkar <shirish4you@gmail.com>
Date:   Thu Jan 3 15:53:28 2013 +0530

    Fixed typo [WiKi -> Wiki]

[33mcommit dc2b1c93891e1d3de1a3b5348ff9d17b1dbd90ef[m
Merge: 067ed0a9 6ebeaf23
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jan 3 02:20:18 2013 -0800

    Merge pull request #581 from shirish4you/master
    
    Create README.md

[33mcommit 04218bee53cd0acf0b4ffe14d9052349900020db[m
Author: Urs Metz <urs.metz@gmx.de>
Date:   Fri Dec 28 18:40:26 2012 +0100

    correct formatting

[33mcommit 5698cfb8a603a968f7b53d14b9e691518ab84d88[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Dec 25 00:27:42 2012 +0100

    Fixed formating in Enclosed Javadoc

[33mcommit 8f7fa2a81a50c4509cfe2d89ea139fdfb91faf87[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Dec 23 23:59:51 2012 +0100

    Fix: check required maven version has unbounded max

[33mcommit aace70a912417166d5646c284d0bde5b81f504fb[m
Author: Urs Metz <urs.metz@gmx.de>
Date:   Sun Dec 23 21:10:00 2012 +0100

    assertion on complete error message

[33mcommit 6384edfffe7f8a2850d2bcde9a16a8e780734ebe[m
Author: Urs Metz <urs.metz@gmx.de>
Date:   Sun Dec 23 15:12:09 2012 +0100

    fail when AssertionError expected but not thrown
    
    When a user expected the production code to throw an AssertionError by
    using ExpectedException (together with the #handleAssertionErrors
    option) but the code under test didn't do so the test was not failing.
    This was because the ExpectedException rule caught its own
    AssertionError issued to signal that the expected exception was not
    thrown.

[33mcommit f95251a7795b10e045cf4f64a05afd1aa4343612[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Dec 23 17:04:20 2012 +0100

    Fix: renamed LICENSE->LICENSE.txt in jar/zip build files

[33mcommit a3838b9ae01a913967997712d7fa4ec2f8e80025[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Dec 23 15:17:36 2012 +0100

    removed unnecessary plugin

[33mcommit d24e5d821964508246b9670a08affab50e3ca87c[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Dec 23 09:15:31 2012 +0100

    same as ANT => excluded internal packages

[33mcommit c409227d249ece10f6634bb14860eb657cfc7560[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Dec 23 09:12:52 2012 +0100

    same as ANT => no 'Use' pages in javadoc

[33mcommit b311f2602a9cbe7947a72dc7d04ac0b4b5e596b3[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Dec 23 08:56:37 2012 +0100

    same as ANT => src/main/... not on sourceforge ftp

[33mcommit 9e09169bb275c8e5e4510011714172f6e42be09f[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Dec 22 22:52:06 2012 +0100

    removed profile 'checkSnapshot', added profile 'sign'

[33mcommit 8d8daa4f3fa0c23ef0c47ff8a97a370d3b3d63af[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Dec 22 22:08:01 2012 +0100

    version 4.12-SNAPSHOT

[33mcommit 15bef4ec10639406e419ed8732a7f82b9f8b0d13[m
Merge: 8b0d35b5 067ed0a9
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Dec 22 21:17:10 2012 +0100

    Merge branch 'master' of git://github.com/Tibor17/junit into junit.mavenize3
    
    Conflicts:
            src/main/java/junit/runner/Version.java

[33mcommit 8b0d35b5478c62d2b07a147010ab8bfaee869f3a[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Dec 22 19:40:10 2012 +0100

    fix double dashes in a comment

[33mcommit 6ebeaf23e053441523b1ced3ec8e6068c4ad7fe0[m
Author: Shirish Padalkar <shirishp@thoughtworks.com>
Date:   Sat Dec 22 10:17:20 2012 +0530

    Created a new README.md file as contents from README.html were out of date

[33mcommit 067ed0a9c50964ebaca5b413684cc56339c5c23f[m
Merge: 1b7312e9 103f204a
Author: David Saff <saff+aa@google.com>
Date:   Wed Dec 19 12:38:21 2012 -0800

    Merge pull request #576 from Tibor17/junit.tests
    
    Fix usage of actual/expected in #assertEquals

[33mcommit 103f204ada7363675fcd4a1e2e0a41030a15a9ae[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Dec 19 00:33:32 2012 +0100

    Fix usage of actual/expected in #assertEquals

[33mcommit 1b7312e99b3a273b57752132dadcdb8efdf61b51[m
Merge: 345ba453 80b7fbad
Author: David Saff <saff+aa@google.com>
Date:   Thu Dec 13 09:48:40 2012 -0800

    Merge pull request #572 from pholser/master
    
    Ensuring no-generic-type-parms validator called/tested for theories

[33mcommit 80b7fbad6e37f2b229a919f595a5263dd21da8fb[m
Author: Paul Holser <pholser@alumni.rice.edu>
Date:   Wed Dec 12 14:09:35 2012 -0600

    Ensure no-generic-type-parms validator gets executed/tested.

[33mcommit 345ba453d04c984600142185674112236ff1edbb[m
Merge: 67eaa9f1 f851c3ee
Author: David Saff <saff+aa@google.com>
Date:   Wed Dec 12 11:21:04 2012 -0800

    Merge pull request #549 from Tibor17/junit.reopen
    
    fixes for #544 and #545

[33mcommit f851c3ee43e1966903ff66ecda3fa7f66c2d2ecb[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Dec 11 17:24:29 2012 +0100

    test: no inline comment, comment space

[33mcommit 78f5fa85b492353ad062f54d1f0ceec745537761[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Dec 11 17:16:25 2012 +0100

    no #deleteOnExit, no inline comment, added space in comment

[33mcommit 7783b6af52624957599680145471fd684ad1f47a[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Dec 11 00:42:01 2012 +0100

    fRecordedStackTrace used by one thread -no volatile

[33mcommit 71a912dc0e2450ec9c5fa277ab673f47408d8baf[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Dec 11 00:33:29 2012 +0100

    why volatile and final

[33mcommit 67eaa9f1274f853323148bb0a2c6c4831addd05b[m
Merge: fa9b88f3 84e0814b
Author: David Saff <saff+aa@google.com>
Date:   Mon Dec 10 15:19:51 2012 -0800

    Merge pull request #503 from Tibor17/junit.features
    
    Configurable Categories

[33mcommit 23715924c0442850b9c9cdc8404438501977745c[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Dec 11 00:11:57 2012 +0100

    thread.setDaemon(true);//Let the process/application complete after timeout expired.

[33mcommit 84e0814b94d0509f7ed123c9976ff1d0b8abfadb[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Dec 10 19:46:26 2012 +0100

    ah

[33mcommit 298cc4459cf76298f4b790a903fbdb6e6d20887d[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Dec 10 19:41:46 2012 +0100

    small optimization if-else

[33mcommit de7f4fb2d4fedf3cfaba877b54d60ac3f3e5944a[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Dec 10 19:33:01 2012 +0100

    Merge remote-tracking branch into junit.features

[33mcommit fa9b88f335a338f65de8ded6f4b59d0123c3e6a2[m
Merge: 70fd6317 ebc674b2
Author: David Saff <saff+aa@google.com>
Date:   Mon Dec 10 08:22:28 2012 -0800

    Merge pull request #569 from Tibor17/junit.new
    
    Measure runtime in Stopwatch rule for Performace tests

[33mcommit 70fd6317336dca9e8f1d04599dd2760de0dceefc[m
Merge: cceac2d3 dda4d08f
Author: David Saff <saff+aa@google.com>
Date:   Mon Dec 10 08:16:02 2012 -0800

    Merge pull request #566 from gaffa/InheritedCategory
    
    Enables Inheritance on Category.java by adding @Inherited

[33mcommit ebc674b2536e5bda7083dfd7841cf5c3c846b274[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Dec 9 01:41:46 2012 +0100

    runtime in Stopwatch rule for Performace tests

[33mcommit cceac2d395731fd43ffcf93e1cf4fd71595784ef[m
Merge: 8505e8e6 e0c7cfbf
Author: David Saff <saff+aa@google.com>
Date:   Fri Dec 7 08:42:13 2012 -0800

    Merge pull request #555 from avandeursen/junit-coverage
    
    Fix for MethodSorterTest so that coverage can be measured (issue #551)

[33mcommit dda4d08fc64933a8e4af33b745bd8219682b7bcb[m
Author: Henning Gross <igaffai@gmail.com>
Date:   Thu Dec 6 18:29:51 2012 +0100

    Fixes imports

[33mcommit 8505e8e6107181491dba712dc7dcb866d9c83464[m
Merge: 5eceba3a 3a02b8d7
Author: David Saff <saff+aa@google.com>
Date:   Thu Dec 6 08:15:26 2012 -0800

    Merge pull request #564 from francescomari/customizable-parameterized
    
    Allow configurable creation of child runners of parameterized suites

[33mcommit 3a02b8d7fa7ef1b79c4fd4644b5383899b82ae9f[m
Author: Francesco Mari <mari@adobe.com>
Date:   Thu Dec 6 11:50:29 2012 +0100

    put name formatting logic in its own method

[33mcommit e0c7cfbf93f8c949da6294fbb4200d7e3cfb9c95[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Wed Dec 5 21:59:25 2012 +0100

    Fixed layout
    
    And eliminated unnecessary new String{..}

[33mcommit 8ea7e775addfcc44f0bd7145100cca3cb301d8e1[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Wed Dec 5 21:51:59 2012 +0100

    Included filter on synthetic methods.
    
    Methods that are synthetic are no longer taken into account
    when comparing method sorting results.
    As a result, the tests work fine both with and without
    test coverage enabled (which may generate synthetic methods).
    
    This resolves issue #551 (and simplifies the earlier fix).

[33mcommit 27f927c42f251399899b39de89936f02529dc50e[m
Author: Henning Gross <igaffai@gmail.com>
Date:   Wed Dec 5 21:47:38 2012 +0100

    Enables Inheritance on Category.java by adding @Inherited

[33mcommit 5eceba3a1041b0643c1d8b5626c0b7fe7036e15b[m
Merge: fe1117e4 afbeeb31
Author: David Saff <saff+aa@google.com>
Date:   Tue Dec 4 07:53:46 2012 -0800

    Merge pull request #456 from nicobn/master
    
    Enclosed runner should ignore abstract enclosed classes

[33mcommit 4e37cdc3ff0c46679b334f9a87f55ae00f90c864[m
Author: Francesco Mari <mari@adobe.com>
Date:   Tue Dec 4 16:35:24 2012 +0100

    fix line terminators

[33mcommit 61badf2f7f147d6e782e1700b24da4ac06ce070c[m
Author: Francesco Mari <mari@adobe.com>
Date:   Tue Dec 4 14:17:00 2012 +0100

    allow configurable creation of child runners of parameterized suites

[33mcommit afbeeb315f4a2b2d4b21bf6f38cef2b83df6b97a[m
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Mon Dec 3 11:05:03 2012 -0500

    Fixed style (annotations on a separate line)

[33mcommit fe1117e4b2adc43774ab7d3eaa342688b64a6d3e[m
Merge: d8519aa0 ecb4de6a
Author: David Saff <saff+aa@google.com>
Date:   Mon Dec 3 11:38:47 2012 -0800

    Merge pull request #552 from Tibor17/junit.new
    
    Time Watcher

[33mcommit 8675e5bf75f4865f3ff2d0f840d0d6022f1c59b6[m
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Mon Dec 3 10:25:15 2012 -0500

    Expanded tabs to spaces

[33mcommit d8519aa006c0cf11573c3f85e94868e29a95f251[m
Merge: 010f7461 5a65d170
Author: David Saff <saff+aa@google.com>
Date:   Mon Dec 3 07:05:46 2012 -0800

    Merge pull request #540 from Tibor17/junit.tests
    
    org.junit.runner.Result : Treatment Of Long Variables and thread-safe constructor for List

[33mcommit 010f7461c5e9bb4304b68b8c0eb3027b677d7f31[m
Merge: 3c1956ac 70e2f2e3
Author: David Saff <saff+aa@google.com>
Date:   Wed Nov 28 07:21:22 2012 -0800

    Merge pull request #554 from matthewfarwell/parameterized-javadoc
    
    Fixes #553, formatted sample code in javadoc

[33mcommit c861b8a24a0663b9f2496214d1a58048d80284a8[m
Merge: 181369ec 2f879b9e
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Nov 26 00:44:56 2012 +0100

    Merge remote-tracking branch 'remotes/origin/master' into junit.mavenize3
    
    Conflicts:
            src/main/java/junit/runner/Version.java

[33mcommit ecb4de6a163e83471896956e1602dd5f4235952f[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Nov 23 23:23:47 2012 +0100

    fixed grammar "own -> its own"

[33mcommit 9ec6a3fa39cb8aafe645a7f33e7da9a788679fe3[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Nov 20 20:25:16 2012 +0100

    standard JUnit class fields

[33mcommit 3c122b6a93499ee82d346c097141d2137b93c48c[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Nov 20 18:09:04 2012 +0100

    using record objects

[33mcommit 96e051b21a8f277c03158c3db32e1b4e4b0389c2[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Nov 20 10:56:55 2012 +0100

    getNanos() is a single thread confinement. Volatiles not needed!

[33mcommit cbcb29a2d80b04803566a3aaaffd9dceb53053bf[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Nov 19 23:55:49 2012 +0100

    changes

[33mcommit ac195989a03d27429047b311a397ed91cfea91eb[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Nov 19 22:18:42 2012 +0100

    fixed indentation in Javadoc code

[33mcommit c4e3854ae71d7dd8b624a977712bee3e29d5bcdd[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Nov 19 21:28:17 2012 +0100

    Added #finished(long nanos, Description description)

[33mcommit 70e2f2e369829a7443e96c29f922be9e04da93dd[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Mon Nov 19 16:24:39 2012 +0100

    Fixes #553, formatted sample code in javadoc

[33mcommit 0a2601045f101930d0ca7f31c53b416fafbbe7a7[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Nov 19 08:07:31 2012 +0100

    fixed Javadoc "its"
    micros -> toMicros, millis -> toMillis, seconds -> toSeconds
    fixed Javadoc 3 lines to tab
    startTime -> startNanos
    endTime -> endNanos
    enum SUCCEEDED - > PASSED
    equalTo -> is(equalTo)

[33mcommit 582d86c49eb8624b9db65e69ad0e404821505b3d[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Nov 19 01:51:49 2012 +0100

    Time Watcher

[33mcommit 5ea3196f1cdbc32bc3a91b96bedc1964d3bb76d1[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sun Nov 18 21:09:21 2012 +0100

    Used assertArrayEquals to avoid converting an array to a list.
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit 09dfdef6945df9166984202e737bd16d8082a54e[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sun Nov 18 19:42:37 2012 +0100

    More white space cleaning.
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit a3e01b1ebea12f5fdfb6349e9e72623ac1f3b232[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sun Nov 18 19:39:07 2012 +0100

    Cleaning up indentation
    
    The inline method refactoring conducted by eclipse introduced
    some extra tabs.
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit 0676ed6363ca9935d082d39f539b263b2c3b42f2[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sun Nov 18 19:12:39 2012 +0100

    Inlined helper method
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit 63eebcfe396b5302cd49a7dd006eecb9b929721a[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sun Nov 18 17:24:00 2012 +0100

    Deleted the old failing test cases
    
    Since new tests were added to replace all failing test cases,
    I deleted the old ones that fail with coverage analysis enabled,
    as well as the helper methods they need.
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit fa235e3520365aa9364ac16bf561e7a42524f0dc[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sun Nov 18 14:44:41 2012 +0100

    Refactoring of the test case for JVM Method sorter
    
    Removed the string based equality, and improved naming
    (in particular calling the expected result 'actual' was confusing).
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit 5976b1d40ef41cecafd9769dd8776a6e6610d0c5[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 22:12:35 2012 +0100

    Extract method refactoring on getting filtered methods
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit 99ffe0144444c0727248dad94f153b1fc91bf847[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 15:21:41 2012 +0100

    Uniform naming of Dummy classes
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit 7cec75a6e01cdf9a5320626f4ba9812b0aa8e725[m
Merge: 67663360 b04c86a5
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 15:02:29 2012 +0100

    Merge branch 'junit-coverage' of https://github.com/avandeursen/junit into junit-coverage

[33mcommit 6766336047b3e30c92e47550b47bde2a36fac533[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 14:45:19 2012 +0100

    Fixed MethodSorter test case for ascending sorter.
    
    Adjusted test of Ascending Sorter so that its equality check only
    deals with actually declared methods, fixing issue 551 for this
    test case.
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit b04c86a5896c7576ebe4171bce28c539b7f4783c[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 13:19:22 2012 +0100

    Fixed MethodSorter test case for default sorter.
    
    Adjusted test of Default Sorter so that its equality check only
    deals with actually declared methods, fixing issue 551 for this
    test case.
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit 3b00445ad1ad59323cbc1082180d84ffb8d27be4[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 13:06:12 2012 +0100

    Renamed Dummy class to ClassWithoutSorterAnnotation
    
    Incomplete - task : Issue 551: Resolve sensitive equality in
    MethodSorter test.

[33mcommit fb812b11c575fcf7bbe411a876903acd21ad04ea[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 12:25:38 2012 +0100

    Renamed getXYZ test cases to testXYZ test cases.
    
    Incomplete - task : Resolve sensitive equality in MethodSorter test.

[33mcommit 74941e1e1482016ffe705830cefb27cd376fb5ef[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Sat Nov 17 12:22:52 2012 +0100

    Extract test case refactoring for subclass NullSorter
    Created a separate test case for null sorter applied to methods from
    the *sub* class. Fixed this test case so that it still works well
    under (jacoco) coverage.
    
    Incomplete - task : Resolve sensitive equality in MethodSorter test.

[33mcommit 1c50b6cab85baea467aae117c6bd30225b314774[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Nov 16 22:42:43 2012 +0100

    TemporaryFolder instead of File.createTempFile()

[33mcommit ec534ffac48977be6b7011e4e531b83a0a767704[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Nov 16 21:52:13 2012 +0100

    A fix for semicolon.

[33mcommit 794abc271d82fa48681657b41e35eabb420e5172[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Nov 16 20:52:27 2012 +0100

    one tmp file per test, reasons for volatile and daemon thread

[33mcommit 3c1956acb629cee521549ee06d5974a1caef845b[m
Merge: 819f3712 fab28522
Author: David Saff <saff+aa@google.com>
Date:   Fri Nov 16 11:21:05 2012 -0800

    Merge pull request #550 from coreyjv/master
    
    Pull request for issue #157

[33mcommit 819f371297089b24b4b65a397f8b2ce4abc18a61[m
Merge: 7ae6e678 2ebdc48e
Author: David Saff <saff+aa@google.com>
Date:   Fri Nov 16 11:20:24 2012 -0800

    Merge pull request #547 from marcphilipp/prepare-4.12-development
    
    Prepare 4.12 development

[33mcommit fab285224794435cbb4539ba234d771855b8012d[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Thu Nov 15 19:33:02 2012 -0500

    Remove @Deprecated for issue #157
    
    Removed @Deprecated annotation for methods withBefores and withAfters in
    BlockJUnit4ClassRunner.

[33mcommit c87b2e11d9e239cc7fae658b196b9a744b208ac3[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Thu Nov 15 19:28:46 2012 -0500

    Revert "Remove @Deprecated for issue #157"
    
    This reverts commit 3cfda47c31c88ab994a7a50ed6b6d75bd6203d47.

[33mcommit 82c6d4b5f0e6c788d5326d57ea5bb5fec6cef29d[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Thu Nov 15 19:16:32 2012 -0500

    Remove @Deprecated for issue #157
    
    Removed @Deprecated annotation for methods withBefores and withAfters in
    BlockJUnit4ClassRunner.

[33mcommit 7ae6e6781075b197c4f057a3f637e55349a2db05[m
Merge: ea96d2e3 902b1569
Author: David Saff <saff+aa@google.com>
Date:   Thu Nov 15 12:39:56 2012 -0800

    Merge pull request #529 from Stephan202/null-datapoints
    
    Allow the array returned by a @DataPoints-annotated method to contain null values

[33mcommit 2ebdc48e5428da14bf35488d996aee58d16ec186[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Nov 15 20:55:04 2012 +0100

    Note and link to wiki

[33mcommit b28fe09d1a54955bed2e4db5352c14fae195a418[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Nov 15 18:39:45 2012 +0100

    fixes for #544 and #545

[33mcommit ea96d2e30b23dbcdb5959f5732f4930eb2536f37[m
Merge: c97adf91 cc87f655
Author: David Saff <saff+aa@google.com>
Date:   Thu Nov 15 07:43:38 2012 -0800

    Merge pull request #548 from coreyjv/master
    
    Fixed a JDK5 backwards compatibility issue introduced in Pull #542

[33mcommit c97adf917e0a2044cc60310f38a38a0b9eaf6a72[m
Merge: ba7e1ce1 337b6dc9
Author: David Saff <saff+aa@google.com>
Date:   Thu Nov 15 07:41:25 2012 -0800

    Merge pull request #544 from Tibor17/junit.reopen
    
    forked from #450 and improved

[33mcommit dfaf332b4df0d98293ac135e5abf9de6a2623b14[m
Author: Arie van Deursen <arie.vandeursen@tudelft.nl>
Date:   Thu Nov 15 10:23:41 2012 +0100

    Added different implementation for Null Sorter test
    
    Added an extra test case providing an alternative implementation for
    the getMethodsNullSorter test case.
    
    The new implementation passes when coverage analysis using jacoco is
    enabled, whereas the old one incorrectly fails.
    
    The new approach only checks the order of methods that are of interest
    (i.e., not looking at irrelevant extra methods that the coverage
    analyzer might generate).
    
    Furthermore the new approach avoid the 'sensitive equality' test smell
    by replacing toString-based equality by actual equality.

[33mcommit 337b6dc9bca623eab0820eab89245f42bbbb9570[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Nov 15 01:03:54 2012 +0100

    cannonical style of infinite Java loop in Javadoc, new line avoided

[33mcommit 11039f25897fe4daba274292a49a078afa87991b[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Nov 15 00:08:53 2012 +0100

    deleted 2 examples and improved javadoc, improved javadoc in constructor, added factories, prepared for 4.12

[33mcommit cc87f655c2fe666d0f4e3322f37c570449ded9ff[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Wed Nov 14 16:52:18 2012 -0500

    Fixed JDK5 backwards compatibility issue
    
    In fixing issue #144 a JDK6 API call was accidentally introduced.
    Updated to be compatible with JDK5.

[33mcommit 6bb5f09fcc165853a505ffa451c56a5e9aca56fa[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Nov 14 22:08:25 2012 +0100

    Ready to collect release notes for 4.12

[33mcommit 6d6d7a587cf2bbdf4542a4b6cedd7170e26a525f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Nov 14 22:08:00 2012 +0100

    Next version is 4.12

[33mcommit ba7e1ce168f884e2cf32817edb5a4f07b1e3bdca[m
Merge: c2e4d911 2246c5a6
Author: David Saff <saff+aa@google.com>
Date:   Wed Nov 14 12:56:36 2012 -0800

    Merge pull request #542 from coreyjv/master
    
    Pull request for issue #144

[33mcommit 2246c5a6de14ae94f3d29a82b165653e67ca93a1[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Tue Nov 13 18:50:06 2012 -0500

    Converted tab to spaces

[33mcommit 467dd0725eb20d018339ae843e895f9cabcfb988[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Tue Nov 13 18:48:31 2012 -0500

    Refactored logic out of failDueToMissingException
    
    Refactored message decision logic out of failDueToMissingException into
    its own method missingExceptionMessage.

[33mcommit c2e4d911fadfbd64444fb285342a8f1b72336169[m[33m ([m[1;33mtag: r4.11[m[33m)[m
Merge: 94aa692b 7f710b1c
Author: David Saff <saff+aa@google.com>
Date:   Tue Nov 13 12:10:09 2012 -0800

    Merge pull request #543 from marcphilipp/4.11-release-notes-additions
    
    Final version of release notes for 4.11

[33mcommit 5da2d76bcf619ac0bd8c6ff5f6fc6b807978da8a[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Tue Nov 13 20:53:00 2012 +0100

    param=millis in old constructor, original units, added infinite loop test

[33mcommit 544e5ba3a3034932879604b72fb6f8526d27eb50[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Nov 12 23:33:29 2012 +0100

    forked from #450 and improved

[33mcommit b521f0caadb99cab821730ad5d451e826d38e0a9[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Mon Nov 12 04:59:41 2012 -0500

    Fixed reportMissingExceptionWithMessage Javadoc

[33mcommit 3791a960b08c0f14e2d6cb1c72b243f97d0a28e6[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Sun Nov 11 21:31:01 2012 -0500

    Removed redundant phrase from parameter name

[33mcommit bcf2c17851197328bb7bc008f916a6648de193aa[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Sun Nov 11 21:29:12 2012 -0500

    Converted tabs to spaces
    
    Converted tabs to spaces for newly added code to be in line with
    guidelines.

[33mcommit a2ca18438f84e16d5dc1e456dcd9ec6be0cd4b7a[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Sun Nov 11 21:24:34 2012 -0500

    Changed exception message method name
    
    Changed method name from setMissingExceptionMessage to
    reportMissingExceptionWithMessage to be more consistent with the
    existing API.

[33mcommit 7f710b1cc303b187393a53674d095cb98385a127[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Nov 11 19:37:30 2012 +0100

    Final version, includes changes from #519

[33mcommit 3efad73fc5f34d7d860a8653e91d93c8539ac7bd[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Fri Nov 9 23:06:39 2012 -0500

    Modified test method name to be consistent
    
    The test method name was never updated. Updated the test method name to
    be consistent with what the test was executing.

[33mcommit bb13feee21bc4a77513d50d6855c4396db9f0609[m
Merge: 872aba62 94aa692b
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Fri Nov 9 23:03:20 2012 -0500

    Merge branch 'master' of https://github.com/KentBeck/junit
    
    Conflicts:
            src/main/java/org/junit/experimental/runners/Enclosed.java
            src/test/java/org/junit/tests/running/classes/EnclosedTest.java

[33mcommit 8f0902e5503f4b2fd5a7317ae954a136aa8af94b[m
Author: Corey Vaillancourt <coreyjv@gmail.com>
Date:   Fri Nov 9 23:03:25 2012 -0500

    Implementation for issue #144
    
    Added additional public method, setMissingExceptionMessage, to allow a
    user to specify a custom message that would be thrown in the event a
    test did not throw the expected exception. If one is not provided the
    class falls back to the previous behavior.

[33mcommit 5a65d17014d44850d4e19ac3cdd667985a00e1c5[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Nov 7 03:20:02 2012 +0100

    Treatment Of Long Variables and thread-safe constructor for List

[33mcommit 94aa692b0489d1fabd31c779c1a700a3b0890a24[m
Merge: 35505c4c be612377
Author: David Saff <saff+aa@google.com>
Date:   Tue Nov 6 15:45:01 2012 -0800

    Merge pull request #521 from mmichaelis/adjust-testwatcher-skipped
    
    Adjust testwatcher skipped to handle failures correctly

[33mcommit 35505c4c2ab02b32a94062426949a123e848af6e[m
Merge: 2f879b9e b1db2bb4
Author: David Saff <saff+aa@google.com>
Date:   Mon Oct 29 12:03:40 2012 -0700

    Merge pull request #519 from kcooney/undeprecate
    
    Remove @Deprecated from MethodRule and related methods.

[33mcommit be6123772ffa7bc580ea44c2db488852255c401f[m
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Wed Oct 24 23:10:24 2012 +0200

    Readjust due to Issue KentBeck/junit#426 coding style.

[33mcommit 6bc83a0d3a67e36adc2733a125bf928c49f702f9[m
Merge: 6fb53a7e 2f879b9e
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Wed Oct 24 22:45:46 2012 +0200

    Merge Master to complete KentBeck/junit#521

[33mcommit 6fb53a7e272a6ecc232840c96b4cfe5235a8f823[m
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Wed Oct 24 22:30:54 2012 +0200

    Rename variable name for exception from "t" to "e"
    
    Changed the catched throwable name accordingly.

[33mcommit b1db2bb47b95aced929b7f801c9185045481da05[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Oct 24 12:34:27 2012 -0700

    Remove tabs

[33mcommit bb91daf8e0939d787ffb5a3eda05c2d626cd9851[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Oct 24 12:31:00 2012 -0700

    Fix formatting

[33mcommit dc44abf520611a8722e75ba1d32df6a28183e4e3[m
Merge: bbacbd93 2f879b9e
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Oct 24 11:58:14 2012 -0700

    Merge branch 'master' into undeprecate
    
    Conflicts:
            src/main/java/org/junit/ClassRule.java
            src/main/java/org/junit/Rule.java
            src/main/java/org/junit/rules/MethodRule.java
            src/main/java/org/junit/rules/TestWatchman.java
            src/main/java/org/junit/runners/BlockJUnit4ClassRunner.java

[33mcommit 2f879b9eea5a3242527ea85764d1d90e58ac3d87[m
Merge: e7090d13 c09de4df
Author: David Saff <saff+aa@google.com>
Date:   Mon Oct 22 12:14:02 2012 -0700

    Merge pull request #526 from marcphilipp/release-notes-file-extension
    
    Change to Markdown extension for ease of viewing

[33mcommit e7090d13e64086749f3dbf90959bc449618bb426[m
Merge: 32e64642 5627d209
Author: David Saff <saff+aa@google.com>
Date:   Mon Oct 22 09:58:26 2012 -0700

    Merge pull request #533 from marcphilipp/fix-531
    
    Use TimeUnit.NANOSECONDS for JDK 5 compatibility

[33mcommit 181369ec84ff3f2903db5a4c6c35679363919163[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Oct 22 00:14:02 2012 +0200

    removed license in POM

[33mcommit 8bd54949b75f95130fd87a77563d3a32e4c832dc[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Oct 22 00:11:12 2012 +0200

    updated JUnit description

[33mcommit 7321e5a8281be863250b9e35804920debe29f44d[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Oct 22 00:06:16 2012 +0200

    changed password for deployment to ftp://upload.sourceforge.net/incoming

[33mcommit 0d508269ec972c3ac22e265bc0d9d8305f2afb8b[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Oct 21 23:57:12 2012 +0200

    fixed indentation in Version.java

[33mcommit 5627d209836c904bb308a353e7c69cafc3a428b7[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 21 13:20:10 2012 +0200

    Use TimeUnit.NANOSECONDS for JDK 5 compatibility
    
    Fixes #531.

[33mcommit c09de4dfb0d5d7b6261c8a2c80dfdb10724cab52[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 21 12:46:21 2012 +0200

    Ant target 'release-notes' uses .md extension

[33mcommit ed01efa75f5975779efc686dfa5fae52096482b2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 21 12:38:36 2012 +0200

    Change extension to .md for all release note files
    
    Because we do not want to break any URLs pointing to the .txt files,
    we keep them around but they contain nothing more but a short hint
    to look at the .md ones.

[33mcommit 902b15698809cab28c24bf7f834b6f6b2796705c[m
Author: sschroevers <sschroevers@fredhopper.com>
Date:   Tue Oct 16 22:10:33 2012 +0200

    Issue #529: fix test case.
    
    (Forgot to modify the class after copying, yielding essentially identical
    tests.)

[33mcommit 32e64642722d15d7a1a1e271693d32a57a1efca5[m
Merge: 88c28a42 50bbb648
Author: David Saff <saff+aa@google.com>
Date:   Tue Oct 16 06:55:19 2012 -0700

    Merge pull request #520 from kcooney/ant-test-rule
    
    Add 'test' rule to build.xml

[33mcommit 4e8b0282c72c5da53b68d012e57ac41f36c73a68[m
Author: sschroevers <sschroevers@fredhopper.com>
Date:   Tue Oct 16 11:05:51 2012 +0200

    Allow the array returned by a @DataPoints-annotated method to contain null values.

[33mcommit 7bd6fa1d9b34af6fcfcc063eb5de237cfb325931[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Oct 15 22:47:40 2012 +0200

    Change to Markdown extension for ease of viewing

[33mcommit 88c28a42a6fb7dc462c4bc504189a76a815fc265[m[33m ([m[1;33mtag: r4.11-beta-1[m[33m)[m
Merge: 50d45885 778e0357
Author: David Saff <saff+aa@google.com>
Date:   Mon Oct 15 08:55:45 2012 -0700

    Merge pull request #524 from marcphilipp/4.11-release-notes
    
    JUnit 4.11 release notes

[33mcommit 50d458851abde8fbe6800f0db85a90ab639e2f15[m
Merge: 30f2b165 cb6115e9
Author: David Saff <saff+aa@google.com>
Date:   Mon Oct 15 08:38:04 2012 -0700

    Merge pull request #525 from marcphilipp/mvn-staging-adjustments
    
    Adjustments for deploying releases to Maven central

[33mcommit cb6115e94213118d38c6068330f614974f668245[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Oct 15 09:56:43 2012 +0200

    Adjustments for deploying releases to Mvn central
    
    - Packaging-type POM
    - message for relocation
    - project description and meta data
    
    See https://issues.sonatype.org/browse/OSSRH-4501 for rationale.

[33mcommit 778e03578ab4c41f40c25dee5c2cf4a28b2c4726[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Oct 11 10:27:09 2012 +0200

    First draft of 4.11 release notes

[33mcommit 872aba6255a0ddcc02bd88418ea8b6b2a70fdb54[m
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Fri Oct 5 11:02:01 2012 -0400

    Added abstract-avoiding behavior to the javadoc.

[33mcommit 30f2b16525dabb477373be9ed3e76bb98b200806[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Thu Oct 4 22:16:45 2012 +0200

    Issue #426 Applied new coding style
    
    Applied the new coding style to the code base for issue #426.

[33mcommit 68cc61e2b6ae43f3ab6ef9a54e16b9318d3d038f[m
Merge: 0f9517b6 2ac2500c
Author: David Saff <saff+aa@google.com>
Date:   Thu Oct 4 07:52:47 2012 -0700

    Merge pull request #502 from awulder/issue-426
    
    issue #426 Description of the coding style

[33mcommit 0f9517b679bbd951a325b69988c500017401d470[m
Merge: 129a5f76 e8f86f3e
Author: David Saff <saff+aa@google.com>
Date:   Tue Oct 2 08:52:36 2012 -0700

    Merge pull request #498 from jglick/DescriptionTest.roundTripsClassObject
    
    Description.getTestClass() will now return the same Class instance passed to the creational method

[33mcommit c63e0913154a8f01e9f78fef9de23fffd7a1a717[m
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Mon Oct 1 08:57:53 2012 +0200

    TestWatcher.skipped(): Make test pass
    
    Now skipped() is handled comparable to failed() statement. Thus failures in skipped() method will raise an extra exception.
    Otherwise just the AssumptionViolatedException is thrown.

[33mcommit a982920ee8036d001aa4a223a2521be28681ec27[m
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Mon Oct 1 08:50:14 2012 +0200

    TestWatcher.skipped(): Make test fail
    
    To show problem of skipped not ignoring failures in skipped-method here is the test - which fails.

[33mcommit 50bbb648b4a1096ccb7d7c3e37da5e0d4a071614[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 29 13:02:48 2012 -0700

    Add 'test' rule to build.xml

[33mcommit bbacbd93334540a5054bb50488f662c3f81a9c00[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Sat Sep 29 12:12:35 2012 -0700

    Remove @Deprecated from MethodRule and related methods.

[33mcommit ab70e74a08da3d7773723187bfef806250c9da80[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Sep 28 23:14:22 2012 +0200

    signing all project artifacts before deployment

[33mcommit 36101e7ea3e3952fcecae2cb9563040a5b24cabf[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Sep 28 03:22:29 2012 +0200

    added documentation + improvements

[33mcommit 2ac2500c963028d85918d5f823e706549ac5b805[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Thu Sep 27 21:19:22 2012 +0200

    Issue #426 Added suggestions by dsaff
    
    - Do not align JavaDoc parameter description
    - Removed "Keep empty .. JavaDoc tag"
    - corrected typp

[33mcommit 129a5f762b4fb97503801a229061479355c0347a[m
Merge: 532428d1 f71a2d4c
Author: David Saff <saff+aa@google.com>
Date:   Thu Sep 27 11:00:34 2012 -0700

    Merge pull request #508 from Tibor17/junit.issues
    
    Improved Test: ParallelMethodTest fails few times

[33mcommit 4dc40a200ef47ca0cbed7a73a8c468ce00464ed0[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Sep 27 01:36:20 2012 +0200

    deleted **/junit/runner/LICENSE

[33mcommit a0f325eeea15dbacdf6ba923b0d746df1f82ff8f[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Wed Sep 26 22:28:49 2012 +0200

    type "make" helps you to build without studying a config of IDE for Maven

[33mcommit 532428d1014f56e85a2cf559b133460cb5278411[m
Merge: 5849b6b4 44b42679
Author: David Saff <saff+aa@google.com>
Date:   Tue Sep 25 13:14:49 2012 -0700

    Merge pull request #509 from Tibor17/junit.improvements
    
    Improved Test: ParallelClassTest

[33mcommit 5849b6b4bbbd8e278f33312b292f774ac2c0e9fe[m
Merge: 30bc68c6 ecaf3723
Author: David Saff <saff+aa@google.com>
Date:   Tue Sep 25 12:28:35 2012 -0700

    Merge pull request #514 from Tibor17/junit.bugs
    
    TextListenerTest failed with unexpected elapsed time

[33mcommit 30bc68c6877a8f3daa160b2c32bab107dae44154[m
Merge: d48bf973 7898dd86
Author: David Saff <saff+aa@google.com>
Date:   Tue Sep 25 07:54:21 2012 -0700

    Merge pull request #510 from Tibor17/junit.tests
    
    Improved implementation of ParallelComputer

[33mcommit ecaf372366ec1b9a3ffc3b3e9961d769bb8013cc[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Mon Sep 24 22:29:57 2012 +0200

    TextListenerTest failed with unexpected elapsed time

[33mcommit 66745341338ec90f36258aa9a50f142d195d99eb[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Sep 23 15:56:16 2012 +0200

    completed deployment Sourcefore and Maven central: verified OK

[33mcommit f71a2d4c61beedd2bc027d525c633dd9f4413ba2[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Sep 23 11:57:24 2012 +0200

    synchronizer attempts to trigger different threads within timeout

[33mcommit 44b426792863f5fdc8cbedfc201a0a8ba0fe83dd[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Sep 23 11:49:36 2012 +0200

    synchronizer attempts to trigger different threads within timeout

[33mcommit 32b5270071e08297f167a1785fd71b92ab6d7c1b[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sun Sep 23 00:56:15 2012 +0200

    Maven project junit:junit artifact

[33mcommit 7898dd861deabd8afca60614f4bb546828c28d70[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Sep 22 01:32:30 2012 +0200

    import

[33mcommit 41e5c7ed5f82b5a588828584c3ac765b40a76cea[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Sat Sep 22 01:26:43 2012 +0200

    improved implementation using Executors

[33mcommit 7602636601a8e024f27157cdbabee6de7e269d80[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Sep 21 18:38:22 2012 +0200

    avoids reusing Executor's Thread instances

[33mcommit 623bd92d37786cdc869b219569740f96869f5b9d[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Sep 21 18:36:41 2012 +0200

    avoids reusing Executor's Thread instances

[33mcommit 24cbcbc12fdd2afb7d52ff354e08213db8a62edd[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Sep 21 13:18:58 2012 +0200

    cleanup thread references

[33mcommit e48f6d40bf755dba2da4c29a4b7e763637b61738[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Fri Sep 21 13:11:03 2012 +0200

    cleanup thread references

[33mcommit d48bf9735b916e7f2c06575970f90dff6f512822[m
Merge: b9e14f64 ec9bccf9
Author: David Saff <saff+aa@google.com>
Date:   Thu Sep 20 10:31:53 2012 -0700

    Merge pull request #504 from amalakar/master
    
    [Issue #394] Added javadoc mentioning special case when subclass overrides/shadows superclass methods

[33mcommit 865e00b45a166466b614a1dbcb8440e19453c58e[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Sep 20 03:44:50 2012 +0200

    Improved Test: ParallelClassTest

[33mcommit c236a9e019a814b3542dcfe3a3a61b036c14d252[m
Author: Tibor Digana <tibor17@lycos.com>
Date:   Thu Sep 20 02:40:46 2012 +0200

    Improved Test: ParallelMethodTest fails few times

[33mcommit ec9bccf9521a6ccdd074f2618626507528a43bc9[m
Author: Arup Malakar <amalakar@gmail.com>
Date:   Wed Sep 19 11:44:09 2012 -0700

    Removed the unnecessary Note: block in javadoc

[33mcommit de15ca2183f9955be7644c59d19aa3e4931a02d8[m
Author: Arup Malakar <amalakar@gmail.com>
Date:   Mon Sep 17 13:39:07 2012 -0700

    [Issue #394] [review incorporated] Added javadoc mentioning special case when subclass overrides/shadows superclass methods

[33mcommit 6adb3ad892ed858849f4a80cd051441e8024226e[m
Author: Arup Malakar <amalakar@gmail.com>
Date:   Fri Sep 14 13:39:32 2012 -0700

    [Issue #394] Added javadoc mentioning special case when subclass overrides/shadows superclass methods

[33mcommit ab1eb66505631ec2ad8010cc071e0f625b2ad95d[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Thu Sep 13 21:30:02 2012 +0200

    Issue #426 Added suggestions by dsaff
    
    Removed the Markdown syntax, changed import order and removed confusing
    Maximum Blank Lines section.

[33mcommit 3dbb0b35894c9291645370312a0262bec2f67db5[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Wed Sep 12 22:38:12 2012 +0200

    Issue #426 Removed confusing whitespaces
    
    Issue #426 Removed confusing whitespaces.

[33mcommit dc3d4d4b7c3a0f6f9c8b576530e2cc14db4117f6[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Sat Sep 8 22:58:11 2012 +0200

    issue #426 Description of the coding style
    
    Issue #426 Description of the coding style

[33mcommit b9e14f64327e052e161c451bc2eaa854c9adcea4[m
Merge: a01caefa dde798f8
Author: David Saff <saff+aa@google.com>
Date:   Fri Sep 7 07:57:17 2012 -0700

    Merge pull request #500 from awulder/issue-473
    
    Issue #473 Implemented suggestions by kcooney

[33mcommit dde798f89fbd1295bf7345ccfab17242ae9d01c0[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Fri Sep 7 00:26:06 2012 +0200

    Issue #473 Implemented suggestions by kcooney
    
    Issue #473 Implemented suggestions by kcooney and added consistent code
    formatting.

[33mcommit e8f86f3e2660804adca60d739e5794862ce01c02[m
Author: Jesse Glick <jglick@cloudbees.com>
Date:   Thu Sep 6 17:17:49 2012 -0400

    Avoiding use of return value of assignment operator.

[33mcommit 390d5e365ab47c770c36cbee45f282d5a0d62f26[m
Author: Jesse Glick <jglick@cloudbees.com>
Date:   Thu Sep 6 13:45:00 2012 -0400

    Make getClassName more reliable when fTestClass defined.

[33mcommit 65f717ed35a698239d4a75960b4f6de2f7cce225[m
Author: Jesse Glick <jglick@cloudbees.com>
Date:   Thu Sep 6 13:36:16 2012 -0400

    Varargs makes test slightly shorter.

[33mcommit 23e6e92b774e1e3910acc6a903293972bc562500[m
Author: Jesse Glick <jglick@cloudbees.com>
Date:   Thu Sep 6 10:02:33 2012 -0400

    Reorder assignments to match order of parameters.

[33mcommit 785c7859cd87dc5cb3872fef476ce2f86c9259dd[m
Author: Jesse Glick <jglick@cloudbees.com>
Date:   Thu Sep 6 09:57:55 2012 -0400

    https://github.com/KentBeck/junit/pull/498 review comments.

[33mcommit 8134371705a43fa2b2a8913678d4336d867f6647[m
Author: Jesse Glick <jglick@cloudbees.com>
Date:   Wed Sep 5 20:36:30 2012 -0400

    Description.getTestClass() did not work reliably.
    Was assuming that the ClassLoader used for JUnit could also load test classes.
    While this may be true in a simple test runner based on a flat classpath, it is not true in all test runners.
    When we are given a Class object, keep it—do not try to reconstruct it from its name alone.

[33mcommit a01caefa33a7f18356d916bbee4f02e6081d0485[m
Merge: 899527e3 00d830f2
Author: David Saff <saff+aa@google.com>
Date:   Tue Sep 4 13:13:47 2012 -0700

    Merge pull request #457 from mmichaelis/master
    
    Add trace method "skipped" to TestWatcher

[33mcommit 899527e3749661128ebbadbcefb40c49d866facf[m
Merge: 9dd0494f 1827bfd9
Author: David Saff <saff+aa@google.com>
Date:   Tue Sep 4 11:52:05 2012 -0700

    Merge pull request #491 from marcphilipp/fix-issue-474
    
    Workaround for compilation problem on non-recent JDKs

[33mcommit 9dd0494f224bdb721d1e5facae0d1ee687380d9a[m
Merge: 51350c37 46040089
Author: David Saff <saff+aa@google.com>
Date:   Fri Aug 31 10:49:08 2012 -0700

    Merge pull request #490 from marcphilipp/remove-usage-of-old-assert
    
    Use org.junit.Assert instead of junit.framework.Assert

[33mcommit 51350c377bdaaece72dc7975fab6da35e649183e[m
Merge: 2e53904a 3bb48f0a
Author: David Saff <saff+aa@google.com>
Date:   Tue Aug 28 09:51:07 2012 -0700

    Merge pull request #489 from matthewfarwell/assume-message
    
    Fixes #355 Improve Assume to allow custom message

[33mcommit 00d830f2172d81c024249d6b28fa297c5c17878e[m
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Mon Aug 27 02:01:46 2012 +0200

    Adjust dependencies as retrieved from KentBeck / junit : master

[33mcommit 6caeeb1e1579cae1cd9ede58f38186e07da7f295[m
Merge: be8d4ee1 2e53904a
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Mon Aug 27 01:50:22 2012 +0200

    Merge remote branch 'remotes/upstream/master'
    
    Conflicts:
            src/test/java/org/junit/tests/experimental/rules/TestRuleTest.java

[33mcommit 4604008957de5f2dca07666c5c52092983b08853[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 22 13:31:36 2012 +0200

    Use org.junit.Assert instead of junit.framework.Assert

[33mcommit 1827bfd929d49e0f397b425e8d681c18a3518196[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Aug 22 13:28:37 2012 +0200

    Workaround for compilation problem on non-recent JDKs.
    
    Fixes #474.

[33mcommit 3bb48f0a58eb44f36b6e03538a7db05b6c6da335[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Tue Aug 21 18:15:02 2012 +0200

    Fixes #355 Improve Assume to allow custom message

[33mcommit 2e53904ae22336000cdf8e12166436e18e538b87[m
Merge: f9ec0474 def7dc5f
Author: David Saff <saff+aa@google.com>
Date:   Tue Aug 21 10:22:21 2012 -0700

    Merge pull request #484 from jherault/feature
    
    [Enhancement] for parameterized JUnit test, Parameter annotation - V3

[33mcommit def7dc5f79e99b11425ab36b51bdaa9ff735bc9b[m
Author: Jeremy Herault <jeremy.herault@gmail.com>
Date:   Tue Aug 21 08:28:44 2012 +0200

    fixing weird indent

[33mcommit f9ec0474bb646a2751f1f2c73f3fee524dbb4b52[m
Merge: 87fe5054 61326c93
Author: David Saff <saff+aa@google.com>
Date:   Mon Aug 20 14:47:33 2012 -0700

    Merge pull request #485 from awulder/issue-55
    
    Fix for issue #55

[33mcommit 87fe5054ec0d03bb4f828f836a64ea9140b6818e[m
Merge: 6a8215ab b6980373
Author: David Saff <saff+aa@google.com>
Date:   Mon Aug 20 13:39:11 2012 -0700

    Merge pull request #488 from awulder/issue-487
    
    Fix for issue #487

[33mcommit 61326c93276d31e249e57815edf93b695df5669d[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Mon Aug 20 21:11:43 2012 +0200

    Changed variable name and removed the space before the equal sign

[33mcommit 56b5463c6adf89a03f489f3525a9a343bc43d960[m
Author: Jeremy Herault <jeremy.herault@gmail.com>
Date:   Mon Aug 20 08:50:01 2012 +0200

    'each' instead of 'f' for the variable name

[33mcommit 0215c66179ed2c04da2e53f67aefc97b6db5782a[m
Author: Jeremy Herault <jeremy.herault@gmail.com>
Date:   Mon Aug 20 08:47:01 2012 +0200

    refactoring for better readability

[33mcommit 8672a83f51b183c756649a423b908271c894b8df[m
Author: Jeremy Herault <jeremy.herault@gmail.com>
Date:   Mon Aug 20 08:43:29 2012 +0200

    Spelling

[33mcommit b698037332edb5028ba75b8a354714189b8c634c[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Sat Aug 18 21:41:07 2012 +0200

    Fix for issue #487
    
    The wrong Harmcrest jar was used in the build.xml for generating the
    javadoc.

[33mcommit 48aabe1b16bd288f74ac4ff92e3a38792533be39[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Fri Aug 17 23:57:54 2012 +0200

    Fix for issue #55
    
    Added Type check for MultiPointsMethod

[33mcommit 1fa373f01d126d437f08a57a7b5e7a7ec0a01b85[m
Author: Jeremy Herault <jeremy.herault@gmail.com>
Date:   Fri Aug 17 16:55:38 2012 +0200

    Couple of nitpicks ;-)

[33mcommit cbf46b88c2937aece7018fa50ba4dbb133e03d06[m
Author: Jeremy Herault <jeremy.herault@gmail.com>
Date:   Fri Aug 17 14:56:22 2012 +0200

    Pull request #182 && #483: Adding Parameter annotation for field parameters

[33mcommit 6a8215ab69317916807f246daef80a9d4cf5dc8e[m
Merge: 6dbbd791 b5648949
Author: David Saff <saff+aa@google.com>
Date:   Tue Aug 14 12:07:19 2012 -0700

    Merge pull request #451 from pettermahlen/cucumber-jvm-322
    
    Making it possible to instantiate Descriptions for individual tests without an actual Java class

[33mcommit 6dbbd791e3f3ef1114486b52fdf058c6272faddb[m
Merge: 26caa86a 2568203b
Author: David Saff <saff+aa@google.com>
Date:   Mon Aug 13 12:03:13 2012 -0700

    Merge pull request #479 from awulder/issue-478
    
    Issue 478: Throw an IllegalArgumentException when the folder already exists

[33mcommit b564894980310e40f4c21006ff0c2346c4fc71f6[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Mon Aug 13 17:41:13 2012 +0200

    shortened some lines that were too long

[33mcommit 2568203bdebd5a4a4ad9aa74b1d8369d22f668a3[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Mon Aug 13 07:38:45 2012 +0200

    Replaced IllegalArgumentException for IOException
    
    It's more consistent to throw an IOException instead of an
    IllegalArgumentException

[33mcommit 59e5333b24d0e433de10d74c69e5de7700c6b744[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Sun Aug 12 20:22:55 2012 +0200

    Fixed indenting on several lines
    
    After solving #479 also fixed the indenting

[33mcommit 6b822aa3037d731669ace4a4bb6b859bf9986def[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Sun Aug 12 20:19:05 2012 +0200

    Changes suggested by kcooney
    
    kcooney suggested some changes for #479

[33mcommit 6012fa3b4fe4e924311d42e05e216092e425cbf9[m
Author: Arjan Wulder <awulder@xebia.com>
Date:   Sun Aug 12 09:26:57 2012 +0200

    Issue 478: Throw an IllegalStateException when the folder already exists
    
    Changed the code so it behaves like it is described in the
    documentation.

[33mcommit 09f3e35b7f006006d44de0daccd1b4cf2c500be1[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Fri Aug 10 09:21:42 2012 +0200

    improved the javadoc description of the added factory method

[33mcommit 303d2e64aa53a6563e57ecb3d1a6e84bdcfb28c3[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Fri Aug 3 10:11:50 2012 +0200

    re-added createTestDescription(Class, String), and fixed javadoc comment that had ended up in the wrong place

[33mcommit 26caa86a40a6643d836e6939186e14145174df12[m
Merge: eaa8d51a ab9caa36
Author: David Saff <saff+aa@google.com>
Date:   Thu Aug 2 19:13:12 2012 -0700

    Merge pull request #470 from marcphilipp/fix-javac-build
    
    Fix javac build

[33mcommit ab9caa3650a262ef4399cfd7f0d7fdc366d6e327[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Aug 2 23:36:12 2012 +0200

    Fix javac build
    
    Replace both() with allOf()

[33mcommit eaa8d51a642df066faaa8f3c33020889fd0b758c[m
Merge: 185a2191 30ecbbc0
Author: David Saff <saff+aa@google.com>
Date:   Thu Aug 2 14:04:10 2012 -0700

    Merge pull request #436 from matthewfarwell/testrule-javadoc
    
    Fixes #427 inconsistent javadoc for test rules

[33mcommit 185a219148564ff905fc8d5d721115313d431c9f[m
Merge: fbdf7936 fe10c8a2
Author: David Saff <saff+aa@google.com>
Date:   Thu Aug 2 13:11:27 2012 -0700

    Merge pull request #404 from marcphilipp/hamcrest-1.3
    
    Upgrade to Hamcrest 1.3

[33mcommit fbdf79366c3e23e19f17b89093aaa54442802edf[m
Merge: daeda1ad 2162def2
Author: David Saff <saff+aa@google.com>
Date:   Thu Aug 2 11:57:30 2012 -0700

    Merge pull request #452 from davidhart82/issue433
    
    TestWatcher exceptions hide test exceptions

[33mcommit 1c545fd83cc7a59a9062828a3277a578d9150904[m
Merge: cfeb6042 daeda1ad
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Thu Aug 2 10:08:15 2012 +0200

    Merge remote-tracking branch 'remotes/kentbeck/master' into cucumber-jvm-322

[33mcommit cfeb6042db521ba752ab379b2340ae6c79005986[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Thu Aug 2 10:08:00 2012 +0200

    reformatted a comment as per code review

[33mcommit daeda1ad9472f75898202e2b08cfc06d7a806bbe[m
Merge: 436e0eaf 8874fb8d
Author: David Saff <saff+aa@google.com>
Date:   Fri Jul 20 09:39:48 2012 -0700

    Merge pull request #447 from shirish4you/patch-2
    
    Removed "GENERATOR" meta for "Microsoft FrontPage 4.0" from index.html

[33mcommit fe10c8a264e6585d9d8a92e5d5fa9a6e10aa298f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Jul 20 14:21:51 2012 +0200

    Fix typo in test name

[33mcommit e77e1c45e873aa9bc1e15db632180eb81d62d5e2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Jul 20 14:18:42 2012 +0200

    Linear control flow in ExpectedExceptionStatement (refactoring)

[33mcommit ec1a5c3ffcc4b9b0dda6e9a683ea51103f55853e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Jul 20 14:13:12 2012 +0200

    ExpectedException uses builder instead of custom matcher

[33mcommit a7c4d033c831765b5e651f2c7c4ce69c2b60ce4a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Jul 20 14:01:06 2012 +0200

    Extract matchers to separate classes (refactoring)

[33mcommit 5e9467c59b235ce84e7c7753c43609dea069e932[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Jul 20 13:54:02 2012 +0200

    Both hasCause() and hasMessage() describe mismatches

[33mcommit a37fd9ac8b2afc54384fd32f470b54aa69dc620a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Jul 20 11:42:16 2012 +0200

    Rename withStacktrace() to isException()/isThrowable()
    
    Following suggestion by @sf105

[33mcommit 872faeab15115635b3260001979ae036e64e29bf[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 19 21:58:39 2012 +0200

    Rename `and` methods to `andAlso`

[33mcommit 6bea82df32f687d636f1b843a1918a3a1ff22a6e[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 19 21:54:04 2012 +0200

    Lazy init for composite matcher

[33mcommit 2d886e29734f9f55b75db91095880c5d109ff678[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 19 20:52:39 2012 +0200

    Use allOf() instead of both() to avoid type parameter

[33mcommit 1489b8e7d87f6948f8c5c95487bdd1d8377232c0[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 19 20:51:42 2012 +0200

    Fix javac compile error

[33mcommit 436e0eaf5f7aaf6f200fe4ee23cd00fbb5769d35[m
Merge: cac8c34a 7496008e
Author: David Saff <saff+aa@google.com>
Date:   Thu Jul 19 10:54:18 2012 -0700

    Merge pull request #448 from davidhart82/publicdatapoints
    
    DataPoints need to be Public

[33mcommit 7496008e2c712a908edce40496624e6e49ffed8f[m
Author: David Hart <davidhart82@gmail.com>
Date:   Thu Jul 19 16:08:10 2012 +0200

    Move brace (code review)

[33mcommit f1be7f250156ecc0e6b6c9d7005abb53359fe2fe[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 19 14:38:43 2012 +0200

    Introduce withStacktrace() matcher
    
    StacktracePrintingMatcher delegates to a Matcher<Throwable> and in
    addition appends the stacktrace of the actual item in case of a
    mismatch.
    
    It is used inside ExpectedExceptionMatcher and can also be used
    separately when matching Throwables by calling `assertThat(actual,
    withStacktrace(throwableMatcher)`.
    
    assertThat no longer sets the cause of the AssertionError. CauseMatcher
    has been removed.

[33mcommit 6e6a6e47f15e3de1fac90ecb9e3dbdb180f3a88b[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 19 13:08:53 2012 +0200

    Add Hamcrest source JAR for easy reference

[33mcommit 23793cd92c4c0f8449e2edaec745437c5ebbd619[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Jul 19 13:07:43 2012 +0200

    Custom matcher for ExpectedException (refactoring)
    
    ExpectedExceptionMatcher now collects all the matchers and internally
    provides custom matchers for checking the message and the cause of an
    exception.

[33mcommit cac8c34ac61668aa269366408e613ac0ed5db729[m
Merge: 28938e9c 014f2410
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sun Jul 15 14:32:58 2012 -0700

    Merge pull request #462 from marcphilipp/fix-method-sorter-warnings
    
    Fix compiler warnings in MethodSorterTest

[33mcommit 014f2410e81ed3ecc6b82fbac49ab345aab6e90f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 15 14:19:20 2012 +0200

    Fix warnings in MethodSorterTest
    
    There were several compiler warnings due to seemingly unused members of
    private classes that were only used via reflection.

[33mcommit a68b42cafad9f55f8296a2540f7aa93378ec1c40[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 15 14:11:17 2012 +0200

    Replace JUnitMatchers with CoreMatchers

[33mcommit 620ccfdd8b06dfa1fc5b4c3d3f014a45caeebccb[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 15 14:10:46 2012 +0200

    Remove unused import

[33mcommit 40375ef1fc08b1f666b21d299d8b52b10a53e6fb[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 15 14:03:49 2012 +0200

    Update Hamcrest from 1.3.RC2 to 1.3

[33mcommit ee037247a9a03d8ac2e584d52a544b9733f2c016[m
Merge: 8d783ef4 28938e9c
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Jul 15 13:53:54 2012 +0200

    Merge remote-tracking branch 'KentBeck/master' into hamcrest-1.3
    
    Conflicts:
            src/main/java/org/junit/Assert.java
            src/main/java/org/junit/matchers/JUnitMatchers.java
            src/main/java/org/junit/rules/ExpectedException.java
            src/test/java/org/junit/tests/experimental/rules/ExpectedExceptionTest.java

[33mcommit be8d4ee17541876e139d1b1319ac5101bf055c8c[m
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Sat Jun 30 12:33:24 2012 +0200

    Remove wildcard imports.

[33mcommit 08c3b3aa633385373b08285225e58c6ee0ab8092[m
Author: Mark Michaelis <mark.michaelis@coremedia.com>
Date:   Mon Jun 25 19:54:41 2012 +0200

    Continues Issue 296: TestWatchman.failed should not be invoked for AssumptionViolatedExceptions
    see https://github.com/KentBeck/junit/issues/296
    
    The solution introduced breaks with the general concept of the TestWatcher which is to call a
    tracing method for any state the test reaches.
    
    This commit introduces a new method skipped() to the TestWatcher. Quirk: The AssumptionViolatedException
    is in package "internal".

[33mcommit 45aed05bb9e75bc8228af8ffbb44d39626d02dd5[m
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Sun Jun 24 22:27:18 2012 -0400

    Implemented the changes proposed by kcooney:
    
    1) Now passing classes.length to the constructor of ArrayList
    2) Code style adjustment (no spaces before the = in an assignment)

[33mcommit 2162def2d4eefae0c5668586b837af4ecd4aed91[m
Author: davidhart82 <davidhart82@gmail.com>
Date:   Sun Jun 24 16:41:43 2012 +0100

    More tests; fix case if failed and finished throw exceptions

[33mcommit 8c1c0e7ee79860a603b68d8a9335ce0bce966160[m
Author: davidhart82 <davidhart82@gmail.com>
Date:   Sun Jun 24 16:02:03 2012 +0100

    Throw MulitpleFailureException

[33mcommit c07b3e7ea1b23d84590c2781b978f15e40c94703[m
Author: davidhart82 <davidhart82@gmail.com>
Date:   Sun Jun 24 16:01:53 2012 +0100

    Throw MulitpleFailureException

[33mcommit 229490bbf8731ec07fd7ce6d68f0e22b502b9caf[m
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Sat Jun 23 13:52:48 2012 -0400

    Changed the filtered collection to an ArrayList from an HashSet to avoid re-ordering of
    existing order-dependant test suites, as per the comments of kcooney.

[33mcommit 28938e9c677dd4cf343ec4fcca9a668b5e930324[m
Merge: e8b91fa9 67e43ab8
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Sat Jun 23 09:17:04 2012 -0700

    Merge pull request #454 from matthewfarwell/fix-441-recursive-temp-folders
    
    Fixes #441 fix for issue 283 (recursive temp folders) caused incompatibility

[33mcommit ebb9d7f536a5b1be8364c6cb7367cac8c3849caa[m
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Thu Jun 21 13:39:39 2012 -0400

    Implemented the changes proposed davidhart82

[33mcommit 0c458a8796cc5ffcda5286ee4a367c8e31ae7c88[m
Author: Nicolas A. Bérard-Nault <nicobn@gmail.com>
Date:   Wed Jun 20 17:45:28 2012 -0400

    Changed Enclosed runner to ignore abstract classes. Before this change, an abstract enclosed class caused jUnit to throw an exception.

[33mcommit 67e43ab827da24baa6477e33e4e883a36dfcf645[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Tue Jun 19 13:58:32 2012 +0200

    Fixes #441 fix for issue 283 (recursive temp folders) caused incompatibility
    Put back in the method folder.newFolder(String) that
    was removed in #283. Tests that the method is there using
    reflection.

[33mcommit 2e699926f4e8c79407338e5973ec198bd3844212[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Fri Jun 15 14:51:13 2012 +0200

    changed back to using Serializable as the necessary Gherkin change has been made

[33mcommit accece2b35f804f86f47ff7d6a76cdb296b76e34[m
Merge: 14f98689 e8b91fa9
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Fri Jun 15 14:28:30 2012 +0200

    Merge remote-tracking branch 'kentbeck/master'

[33mcommit e8b91fa9f797dfe16aff66ed6ad5d6104e5133fe[m
Merge: c2288813 caefa620
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu Jun 7 23:21:32 2012 -0700

    Merge pull request #445 from matthewfarwell/67-since2
    
    Fixes #67 no since javadoc

[33mcommit 14f9868962aee5bcba8a7595287be1d5fed54b7d[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Mon Jun 4 14:35:20 2012 +0200

    cucumber-jvm issue #322, added a new Description factory method and temporarily changed from Serializable back to Object for the unique id; this needs a change to Gherkin

[33mcommit 0deeda931d45a23413e1c84a1966469deadfdb83[m
Author: davidhart82 <davidhart82@gmail.com>
Date:   Sun Jun 3 11:38:01 2012 +0100

    DataPoints need to be Public

[33mcommit 8874fb8d1382edecea0883938f52442ee8ea1564[m
Author: Shirish Padalkar <shirish4you@gmail.com>
Date:   Sun Jun 3 10:11:12 2012 +0530

    Do we really need to have "GENERATOR" meta for "Microsoft FrontPage 4.0"?

[33mcommit caefa620d3a82613461420987fe8a88fc1e6f988[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri Jun 1 21:20:25 2012 +0200

    Fixes #67 no since javadoc

[33mcommit 0e1aca2c28858ac1ad77ef40f704ec1b610c9d65[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri Jun 1 20:55:02 2012 +0200

    Fixes #67 no since javadoc

[33mcommit c228881359e2a4ccd0d5972c646f043ec42d62e0[m
Merge: 6f74b197 8424e265
Author: Kevin Cooney <kcooney+github@gmail.com>
Date:   Thu May 31 22:12:24 2012 -0700

    Merge pull request #440 from ibeauregard/testNameAsc
    
    Make MethodSorters deterministic in JDK 7

[33mcommit 8424e265a3f96bebb2ee4dbced7c3e3e128f91f5[m
Author: Ian Beauregard <ian.beauregard@gmail.com>
Date:   Thu May 31 09:09:24 2012 -0400

    changes as suggested by kcooney

[33mcommit ec7fd69b48a677123c32a630d45518f3cfb0fce9[m
Author: Ian Beauregard <ian.beauregard@gmail.com>
Date:   Wed May 30 22:41:04 2012 -0400

    NAME_ASCENDING comparator is now more clear, DEFAULT delegates to
    NAME_ASCENDING in case the hash codes are equal. no more private compare
    method

[33mcommit d76010fde880fa836fab88e00b603552ab9aa838[m
Author: Ian Beauregard <ian.beauregard@gmail.com>
Date:   Wed May 30 07:44:47 2012 -0400

    remove unused imports in MethodSorterTest

[33mcommit 32330b13f2ded8603665264f8400ddf1f6dd969a[m
Author: Ian Beauregard <ian.beauregard@gmail.com>
Date:   Wed May 30 07:38:31 2012 -0400

    make MethodSorter.NAME_ASCENDING a deterministic comparator, with Method.toString used as a tiebreaker

[33mcommit b508fe73c26345550b13bc8ee131090f7a27b534[m
Author: Ian Beauregard <ian.beauregard@gmail.com>
Date:   Wed May 30 06:50:09 2012 -0400

    make the comments phrasing consistent in MethodSorters

[33mcommit c360ca09cd3305eaf6e3f3026a6ee96d7e1ba65d[m
Author: Ian Beauregard <ian.beauregard@gmail.com>
Date:   Tue May 29 01:54:37 2012 -0400

    Changed incorrect comments in MethodSorter and MethodSorters.
    
    In MethodSorterTest, I took into account the fact that the getDeclaredMethods
    method from Class returns methods in an arbitrary order. We can therefore
    expect 2 possible outcomes for the output of declaredMethods.
    
    I adapted the test to this reality.

[33mcommit 6f74b19789ee42cc51193315e16a632fadc0a903[m
Merge: 688854ba aff46c49
Author: David Saff <saff@google.com>
Date:   Sun May 27 12:09:15 2012 -0700

    Merge pull request #439 from plasticle/patch-1
    
    closed method assertEquals with }

[33mcommit aff46c491d590ff2fcc43d0eaa0049593f6169b4[m
Author: plasticle <plasticle@gmail.com>
Date:   Sun May 27 15:56:07 2012 -0300

    closed method assertEquals with }

[33mcommit 688854ba468c53884b74952f4daf938a99c44e8c[m
Merge: 2e460f84 0c387501
Author: David Saff <saff@google.com>
Date:   Fri May 25 14:48:29 2012 -0700

    Merge pull request #416 from jcortez/master
    
    Fixed issue #219 (rebased)

[33mcommit 2e460f845c4198a0d12c010b3e478be61f480bcd[m
Merge: 1081d896 4311a624
Author: David Saff <saff@google.com>
Date:   Fri May 25 14:29:17 2012 -0700

    Merge pull request #435 from matthewfarwell/result-javadoc
    
    Fixes #295 clarify javadoc for Result

[33mcommit 1081d8964ee521042a0bf4db9f33be33b3f99991[m
Merge: 99c4e59a 80d4bc36
Author: David Saff <saff@google.com>
Date:   Fri May 25 14:25:46 2012 -0700

    Merge pull request #437 from matthewfarwell/verifier-abstract
    
    Fixes #51 Verifier is abstract to indicate that it should be extended

[33mcommit 80d4bc3616b1024b627a968b18d03b86516de69b[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri May 25 15:06:56 2012 +0200

    Fixes #51 Verifier is abstract to indicate that it should be extended

[33mcommit 30ecbbc0ae0006da8b42468173bd9d95741982aa[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri May 25 14:29:19 2012 +0200

    Fixes #427 inconsistent javadoc for test rules
    The examples for some test rules used
    
    public TestRule chain= RuleChain...
    
    whereas others did not refer to TestRule, they used the class name.
    Changed all of those who refered to TestRule to use the class name.

[33mcommit 4311a62451755c3bb0a2c9c8cb737bda9d09d4c7[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri May 25 12:45:01 2012 +0200

    Fixes #295 clarify javadoc for Result

[33mcommit 0c38750119accdea92004723c8c177d7cc65b16c[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Thu May 24 23:17:34 2012 -0700

    Fixed merge artifacts

[33mcommit 2238ad20fefadf546a71725f46a6dc463c9d58ad[m
Merge: 72e10d3c d4755d0d
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Thu May 24 23:07:09 2012 -0700

    Rebased changes

[33mcommit 99c4e59a2c01c215c9c1fe26a5b1a80f429d8ba1[m
Merge: 3f6e3ef5 17f7dfc7
Author: David Saff <saff@google.com>
Date:   Thu May 24 13:27:39 2012 -0700

    Merge pull request #369 from arjenw/master
    
    Improved information with failed ExpectedException assertion

[33mcommit 17f7dfc72624253461022acff1d3aa6b9c4056cf[m
Merge: e381886b 3f6e3ef5
Author: arjenw <arjenwisse@gmail.com>
Date:   Thu May 24 21:57:26 2012 +0200

    Merge branch 'master' of git://github.com/KentBeck/junit
    
    Conflicts:
            src/test/java/org/junit/tests/AllTests.java
            src/test/java/org/junit/tests/experimental/rules/ExpectedExceptionRuleTest.java
    
    Merged changes from the HEAD branch
    
    Besides the merged changes also the approach to test for the failure has
    been changed to comply to the new way of testing in
    ExpectedExceptionTest. That no longer required the changes in
    ResultMatchers (with their accompanying tests)

[33mcommit e381886b42fb190e3ebb82503330e8ca2788a929[m
Author: arjenw <arjenwisse@gmail.com>
Date:   Thu May 24 17:05:26 2012 +0200

    Files referring to the new CauseMatcher including the CauseMatcher itself

[33mcommit 07045d97024b77023df481f808ea687e006fb338[m
Author: arjenw <arjenwisse@gmail.com>
Date:   Thu May 24 17:00:18 2012 +0200

    Renamed ThrowableMatcher to CauseMatcher (including accompanying test) and fixed the oddly indented brace

[33mcommit 3f6e3ef57491e06f3e05dbb1032f031868913005[m
Merge: 67ccd71d f62f6998
Author: David Saff <saff@google.com>
Date:   Thu May 24 05:28:05 2012 -0700

    Merge pull request #434 from matthewfarwell/testwatcher-description
    
    TestWatcher javadoc was not correct for example method names

[33mcommit f62f699850e96b31b46cc6241f10ce0e90637cf1[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Thu May 24 12:47:52 2012 +0200

    TestWatcher javadoc was not correct for example method names

[33mcommit 67ccd71d8c044ccadd1079b8cebf2756b460c6d4[m
Merge: c77cf4d7 c16abda4
Author: David Saff <saff@google.com>
Date:   Tue May 22 10:25:38 2012 -0700

    Merge pull request #377 from pettermahlen/master
    
    Enable ExpectedException to match causes more easily

[33mcommit c77cf4d7c203e9a393434db31206adffe836429a[m
Merge: 1e391af3 ecf0ea11
Author: David Saff <saff@google.com>
Date:   Tue May 22 10:00:33 2012 -0700

    Merge pull request #428 from shs96c/master
    
    Allow users to define the parent directory used by the TemporaryFolder

[33mcommit ecf0ea118c97bcf43ebe8bf3fd65794ca6c0301b[m
Author: Simon Stewart <shs@google.com>
Date:   Tue May 22 17:25:57 2012 +0100

    Responding to review comment

[33mcommit bd8b2df76a813d8b16242500b54d662e3e427a64[m
Author: Simon Stewart <shs@google.com>
Date:   Tue May 22 13:52:56 2012 +0100

    Responding to review comment

[33mcommit c16abda4e0ae1704eff3ec8f893519770b97beba[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Tue May 22 09:27:39 2012 +0200

    more indentation fixes

[33mcommit 1e391af3840911fb8b3345afb58871debf0be3bc[m
Merge: 07de0739 24da9244
Author: David Saff <saff@google.com>
Date:   Mon May 21 13:02:17 2012 -0700

    Merge pull request #431 from sl4mmy/issue-429
    
    Restore deterministic test ordering.

[33mcommit 24da9244b61f2dce4664a602e73ad060a4f68ce7[m
Author: Kent R. Spillner <kspillner@acm.org>
Date:   Mon May 21 14:27:03 2012 -0500

    Restore deterministic test ordering.
    
    Pull patch from Kevin Cooney in https://github.com/KentBeck/junit/issues/429#issuecomment-5815166

[33mcommit 4845736a4bc4c076cd676137407c55d63da8da4d[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Mon May 21 13:31:54 2012 +0200

    switched to using tabs instead of spaces for indentation

[33mcommit 347c60e3dc0120029e2a3ad566b1ad2b0aac411f[m
Author: Simon Stewart <shs@google.com>
Date:   Fri May 18 11:50:52 2012 +0100

    Add the ability to define the root directory for the temporary folder

[33mcommit 07de07397d0960bf0c0e8c5ca79afb10aa0f144c[m
Merge: d4755d0d cbf5dd3f
Author: David Saff <saff@google.com>
Date:   Mon May 14 12:51:10 2012 -0700

    Merge pull request #385 from peterdemaeyer/master
    
    Bugfixes for #382 and #384

[33mcommit d4755d0db6f3d0ae301d7ba26e4639e6c22bbc81[m
Merge: 811b0efc 21fe96fa
Author: David Saff <saff@google.com>
Date:   Thu May 10 11:32:07 2012 -0700

    Merge pull request #415 from adriannistoruiuc/patch-1
    
    Addressing some style and performance issues with null error messages.

[33mcommit 21fe96fa2262e7e1f3a725ef6b134bba74849883[m
Author: a <a@a.(none)>
Date:   Thu May 10 13:28:45 2012 -0500

    style edit.  space after if

[33mcommit 2b4ea7d30d22341fb488df73901277a5194fd424[m
Author: a <a@a.(none)>
Date:   Thu May 10 12:54:27 2012 -0500

    implementing kcooney's suggestion

[33mcommit 9237d8c9b3558b2adcb90ddc991c6bcb44c59dc0[m
Author: a <a@a.(none)>
Date:   Wed May 9 14:47:22 2012 -0500

    deleted extra space

[33mcommit 811b0efc7f90a75b2913f8ecea0011b2434cd4ff[m
Merge: d9559586 330b556d
Author: David Saff <saff@google.com>
Date:   Wed May 9 11:54:11 2012 -0700

    Merge pull request #418 from detinho/_issue_22
    
    Issue 22: Adding assertNotEquals to Object, long and double

[33mcommit 8d783ef4a517cfa7d6dbe7d1a13113d72489f485[m
Merge: fa80b68e d9559586
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue May 1 13:46:33 2012 +0200

    Merge remote-tracking branch 'KentBeck/master' into hamcrest-1.3

[33mcommit 72e10d3ca80ae76af8920091736882a6dc0a5036[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Apr 27 16:41:06 2012 -0700

    Fixed problems with style and other small issues

[33mcommit cbf5dd3f8efc106bcb438203942d781831121071[m
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Fri Apr 27 20:34:34 2012 +0200

    Organized imports according to project's conventions

[33mcommit 231241782c199d39943f742d0abe57057b0b785c[m
Author: unknown <awisse@CNL1516.vanenburg.com>
Date:   Wed Apr 25 20:31:16 2012 +0200

    Reworked based on suggestions
    * Fixed the javadoc of ResultMatchers.failureIs()
    * Made the ResultMatchers.failureIs() matcher based on PrintableResult instead of Result
    * Introduced method 'getFailures()' in PrintableResult to achieve that
    * Moved causedBy() matcher from ResultMatchers to JUnitMatchers (as it is a Throwable matcher)
    * Introduced the required tests at the right places

[33mcommit 533e366307f7a402f19ff5aced3b0019c47205f6[m
Merge: cf2a11a5 d9559586
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Tue Apr 24 20:16:09 2012 +0200

    Merge remote-tracking branch 'upstream/master'
    
    Conflicts:
            src/main/java/org/junit/internal/MethodSorter.java
    
    Upstream version chosen for all conflicts

[33mcommit d955958617f81e2137c996a5c2bf8551f8c64381[m
Merge: fe3d3385 3637f328
Author: David Saff <saff@google.com>
Date:   Tue Apr 24 07:46:26 2012 -0700

    Merge pull request #405 from aslakhellesoy/description-with-unique-id
    
    Allow creation of Description with a unique id. Needed for Cucumber-JVM.

[33mcommit 3637f328439c9c8ab2d165cbf328fb131f8716a2[m
Author: Aslak Hellesøy <aslak.hellesoy@gmail.com>
Date:   Mon Apr 23 21:58:19 2012 +0100

    Making sure uniqueId is Serializable in order to respect Description's Serializable contract

[33mcommit fe3d33854a9e46771161fea08f8cce4b5f62c733[m
Merge: 7439e56c 834dcd7b
Author: David Saff <saff@google.com>
Date:   Mon Apr 23 11:42:54 2012 -0700

    Merge pull request #421 from marcphilipp/fix-mvn-artifacts
    
    Relocate Maven artifact "junit-dep" to "junit"

[33mcommit 834dcd7b89a57436c7aa2cb68dbc041fa03a89e1[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Apr 23 20:37:44 2012 +0200

    Line up indentation (replace tabs with spaces)

[33mcommit 7439e56cc7c2261d231ec46e048c7ac762e7a8cc[m
Merge: b30f66d9 1df71004
Author: David Saff <saff@google.com>
Date:   Mon Apr 23 11:28:32 2012 -0700

    Merge pull request #422 from marcphilipp/fix-tested-on-supplier-description
    
    Fix #88

[33mcommit b30f66d9ba6c3bbc06073e6c32ef222fe7aa6a18[m
Merge: 34d2943c c19ffebc
Author: David Saff <saff@google.com>
Date:   Mon Apr 23 11:08:25 2012 -0700

    Merge pull request #423 from ahitrin/fix-issue-170
    
    Fixed #170: display actual object value in assertNull()

[33mcommit 39d30b21b3a632f158274c6937c13499cd0758f3[m
Merge: 6b943e56 34d2943c
Author: Petter Måhlén <pettermahlen@gmail.com>
Date:   Sun Apr 22 14:07:57 2012 +0200

    merged with master

[33mcommit c19ffebced2cfda962d868ba76e0dbfb3504cc37[m
Author: Andrey Hitrin <andrey.hitrin@gmail.com>
Date:   Sun Apr 22 15:00:42 2012 +0600

    Fixed #170: display actual object value in assertNull()

[33mcommit 1df71004338faf30b9287b03b726e1ce4f1246be[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Apr 21 21:56:51 2012 +0200

    Fix #88

[33mcommit 934ebddf0bb286ebbff22028b9f5a9c016589b3f[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sat Apr 21 20:45:08 2012 +0200

    Relocate Maven artifact "junit-dep" to "junit"

[33mcommit 6b943e564adcc9a7106e54c24eb5d022bed1462f[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Thu Apr 19 14:05:53 2012 +0200

    changed the expectedCause() method to accept a Matcher instead of an explicit Throwable and made some documentation changes

[33mcommit 7b5e0ac825d670160c0c9a5ad2c6fd5194f9e90a[m
Merge: ec6a7528 4aecb7aa
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Apr 13 23:22:50 2012 -0700

    Merge branch 'master' of github.com:jcortez/junit

[33mcommit ec6a7528de3c736a717371fe2359511d4e10face[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Apr 13 23:16:40 2012 -0700

    Fixed acknowledgements

[33mcommit 4aecb7aada6c347c53c74e284cf072b49de0c417[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Apr 13 23:16:40 2012 -0700

    Fixed acknoledgements

[33mcommit 42ed645d2321f19a078526dde6dc6b5ed9774161[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Apr 13 23:03:31 2012 -0700

    Fixed release notes issue

[33mcommit 2f2368d2fcbc357ad07ea9a7c39d74aad62d9c3e[m
Merge: 93346b95 45076b39
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Apr 13 22:38:21 2012 -0700

    Merge branch 'master' of github.com:jcortez/junit

[33mcommit 93346b959c96b3e90e4f3f3b015f7049ed4624ed[m
Merge: 9f305841 34d2943c
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Apr 13 22:35:26 2012 -0700

    Merge remote-tracking branch 'upstream/master'
    
    Conflicts:
            acknowledgements.txt
            doc/ReleaseNotes4.9.html
            doc/ReleaseNotes4.9.txt

[33mcommit fa80b68e34e82129367f6075ddfef4392cdc4d86[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Apr 12 22:03:48 2012 +0200

    Replace JUnitMatchers with CoreMatchers

[33mcommit e01ccf14711bfcb6b0c2fb5ec4bf541e8e78b721[m
Merge: c2bdb1a2 34d2943c
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Thu Apr 12 21:55:18 2012 +0200

    Merge remote-tracking branch 'KentBeck/master' into hamcrest-1.3
    
    Conflicts:
            src/main/java/org/junit/rules/ExpectedException.java
            src/test/java/org/junit/tests/experimental/rules/ExpectedExceptionRuleTest.java

[33mcommit 34d2943cef583ecb34cc182b79dbb4af0c778b3f[m
Merge: 7b47d564 41540137
Author: David Saff <saff@google.com>
Date:   Thu Apr 12 12:06:01 2012 -0700

    Merge pull request #412 from kcooney/class-request-memoize-runner
    
    Make ClassRequest memoize the runner.

[33mcommit 7b47d564b120c92855e9d64536a6c17dc742a4c4[m
Merge: 3624da33 6d551f32
Author: David Saff <saff@google.com>
Date:   Thu Apr 12 12:05:27 2012 -0700

    Merge pull request #411 from kcooney/please-stop-threadsafe
    
    RunNotifier.pleaseStop() is now thread-safe

[33mcommit 330b556dc7e46ffb141846b5e740229d316a665d[m
Author: Marcos Vinícius da Silva <marvinware2005@gmail.com>
Date:   Wed Apr 11 23:06:44 2012 -0300

    Identation.

[33mcommit 689231a6bb9debe771b26be72221a412970cfd4e[m
Author: Marcos Vinícius da Silva <marvinware2005@gmail.com>
Date:   Wed Apr 11 23:06:01 2012 -0300

    Identation.

[33mcommit c28663267220fcb4660f51b663d3de76a7af23ff[m
Author: Marcos Vinícius da Silva <marvinware2005@gmail.com>
Date:   Wed Apr 11 23:03:20 2012 -0300

    Fixing identation and some tests.

[33mcommit 3624da339de9edb9649a787b35a166ee043a7017[m
Merge: c4279e43 5baa714c
Author: David Saff <saff@google.com>
Date:   Tue Apr 10 12:54:34 2012 -0700

    Merge pull request #419 from simplyarjen/master
    
    Make TemporaryFolder.createFile fail if the file already exists (Fixes #413)

[33mcommit 5baa714c5fe4d16dca9dea8c73c6d8702dfd71f2[m
Author: Arjen Stolk <simplyarjen@gmail.com>
Date:   Tue Apr 10 21:39:35 2012 +0200

    TemporaryFolder.newFile should fail if file already exists (fixes #413)

[33mcommit c2bdb1a2d89a61edc6c5cf7dd2a07b3f2119eea2[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Apr 9 21:08:20 2012 +0200

    Fix javac build
    
    There seems to be a problem compiling calls of the new
    
            assertThat(T actual, Matcher<? super T> matcher)
    
    using javac and matchers like `hasItem` and `both` that also use
    `Matcher<? super T>` as parameter.

[33mcommit a26d3de4f24f2472a1140c1e151d989650369cea[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Mon Apr 9 20:59:39 2012 +0200

    Update references to Hamcrest JAR

[33mcommit c4279e432212ed6c23dee817113ae61ec4fbf86e[m
Merge: 3a5c9f27 f3ae021f
Author: David Saff <saff@google.com>
Date:   Mon Apr 9 10:14:35 2012 -0700

    Merge pull request #323 from stefanbirkner/assumption
    
    Fixes gh-121 (ExpectedException handles JUnit exceptions)

[33mcommit 3a5c9f2731462e36dd1c173ea8840d7b9b34b0ab[m
Merge: 560322d7 6a3cec9c
Author: David Saff <saff@google.com>
Date:   Mon Apr 9 08:26:39 2012 -0700

    Merge pull request #393 from stefanbirkner/Parameterized
    
    Add names for parameterized tests. Fixes #24 and #44.

[33mcommit 560322d742f0862a27f53a51cb67a17dd69e2f2f[m
Merge: 36397848 7924760d
Author: David Saff <saff@google.com>
Date:   Mon Apr 9 06:41:53 2012 -0700

    Merge pull request #386 from matthewfarwell/sortwith
    
    SortMethodsWith allows the user to choose the order of execution of the methods within a test class

[33mcommit 45076b39d1f56f475b4f73df756250c47e792d8d[m
Merge: c7f5669a 9f305841
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Mon Apr 9 00:08:34 2012 -0700

    Merge branch 'master' of github.com:jcortez/junit

[33mcommit c7f5669a59fd42f887e02664e2709b7522a0302d[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Jun 24 22:54:01 2011 -0700

    Fixed issue #219 where Assert.assertArrayEquals(float[],float[],float) displays an error message with doubles instead of floats
    
    Added myself to acknowledgements.txt
    
    Added test for issue #219

[33mcommit a1b61ff5fa353842f57a4b9773c336f164f24f00[m
Author: adriannistoruiuc <nistor1@illinois.edu>
Date:   Sun Apr 8 18:10:14 2012 -0500

    Addressing some style and performance issues with null error messages.

[33mcommit 7924760d2d64f5f7651e9e57d1ca01e1bcce74e0[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri Apr 6 23:20:45 2012 +0200

    Following feedback from dsaff

[33mcommit 36397848551f1dc843e4bf5036ff7b00b5cd6adb[m
Merge: d5bce273 0ce06206
Author: David Saff <david@saff.net>
Date:   Fri Apr 6 13:42:05 2012 -0700

    Merge pull request #397 from stefanbirkner/removeListener
    
    Don't remove listeners, which throw exceptions (fixes #209 and #395)

[33mcommit 35916619de9d9c3e7ec3d793ab3072c9e78db258[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Wed Apr 4 23:34:08 2012 +0200

    Changes after review by kcooney

[33mcommit 6a3cec9cb371e18c697db4b0e67ea30f35ce9231[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Apr 4 01:01:28 2012 +0200

    Use the same name as in the test. Fix documentation.

[33mcommit f3ae021fb078fc3b1576febbce1b02e249329516[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Apr 4 00:53:53 2012 +0200

    EventCollector always uses TypeSafeMatcher.

[33mcommit a0eea1357f0a0f4faea1245197f20ceee5ca3a5a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Apr 3 21:37:49 2012 +0200

    assertThat uses org.hamcrest.MatcherAssert
    
    As pointed out by Steve Freeman of Hamcrest, the Matcher interface now
    has an additional method describeMismatch. To be safe to catch such
    improvements in the future, MatcherAssert is used instead of
    duplicating its implementation.

[33mcommit 8b9dfefada78a74b6b1fa34ff0bab298267f8210[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Apr 3 21:24:58 2012 +0200

    Deprecate TypeSafeMatcher which is now provided by Hamcrest

[33mcommit 4f1dbfc8619f5827a919106d14d42777b838638a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Tue Apr 3 21:24:05 2012 +0200

    Remove everyItem matcher now provided by Hamcrest

[33mcommit d5bce273008bc4fbc7a0805a21b9e2991313bd3b[m
Merge: b1068dc5 4596630d
Author: David Saff <david@saff.net>
Date:   Tue Apr 3 11:30:00 2012 -0700

    Merge pull request #370 from matthewfarwell/junit-core-run-fixes
    
    Added MainRunner. This removes the need for public methods in JUnitCore

[33mcommit 41540137ced4df4aaf0cee69ca43f5d95503c21d[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon Apr 2 23:48:28 2012 -0700

    Make ClassRequest memoize the runner.
    Creating the runner can be an expensive operation. Other types of requests
    are written in such a way that the runner is already memoized.

[33mcommit 6d551f321d7bdcdafc2acbe0b5a3988bdc91b10f[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon Apr 2 23:08:57 2012 -0700

    RunNotifier.pleaseStop() is now thread-safe

[33mcommit f4df6d58cee244fa668195fc1cb3d187a4681282[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Fri Mar 30 20:14:01 2012 +0200

    Simplify matcher expression in ParameterSignatureTest

[33mcommit cf2a11a5939e8623cb4591080f423134025bbf62[m
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Thu Mar 29 18:43:59 2012 +0200

    Stripped accidental formatting from an earlier commit

[33mcommit 44e64ced4b33fd4b4c52fa6a587b9552fae41068[m
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Thu Mar 29 18:42:59 2012 +0200

    Revert "Removed offending @Override annotation (#382)"
    
    This reverts commit 96bb03c2aecc818b7a77f9bb7d8684a16d8a80a7.

[33mcommit 24f9b5223c2801a5cba0611e447e66677069b837[m
Author: Aslak Hellesøy <aslak.hellesoy@gmail.com>
Date:   Thu Mar 22 11:51:45 2012 +0000

    Allow creation of Description with a unique id. Needed for Cucumber-JVM.

[33mcommit 8d63a24ea7165fa941e82c3b042b6a38caddc9b1[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Mar 21 23:00:08 2012 +0100

    Remove deleted BothTest from AllTests

[33mcommit 3cab133aa8a444862c3030ec3661d810f9a4665a[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Mar 21 22:58:53 2012 +0100

    Remove test for functionality provided by Hamcrest

[33mcommit d9cccce5034bb9876221d271914471b205220061[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Wed Mar 21 22:48:38 2012 +0100

    Upgrade to Hamcrest 1.3.0 RC2
    
    - Matchers in JUnitMatchers that are now provided by hamcrest-core are deprecated
    - Using CoreMatchers where possible
    
    *Important:*
    In some but not all cases, this change will cause compiler errors for people
    using JUnitMatchers.hasItem(s), both(), and either().

[33mcommit 0ce06206263ed060bd0ede049c1713286c2487ea[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Mar 10 02:05:14 2012 +0100

    Don't remove listeners, which throw exceptions (fixes #209 and #395)

[33mcommit 4596630d76860059088be0fe4376679452fc3b35[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri Mar 9 08:32:20 2012 +0100

    Use SecurityManager recommended by Stefan Birkner

[33mcommit a538d25ae50887dc9395f2f59ad5040752c0ec4f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Mar 6 19:33:35 2012 +0100

    Apply code review.

[33mcommit 1379441f829db2dbb048caf787e18ce6a966059b[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Mar 5 23:03:04 2012 +0100

    The runner adds the square brackets to the name.

[33mcommit b1068dc55c95d1000e07b71d3a9d9a2fd26bfff9[m
Merge: 1cec456a eb307fa6
Author: David Saff <david@saff.net>
Date:   Mon Mar 5 13:52:06 2012 -0800

    Merge pull request #362 from nkeywal/eb307fa6f37ac8ec695b2f556e543969503418f5
    
    Fix for #359

[33mcommit d28f98205384c7c987b79b2b088507ab8b029c6d[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Mar 5 22:50:15 2012 +0100

    Don't use static import for MessageFormat.format

[33mcommit e0cddcdfa8ec823da136af500cce0910a1dd2264[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Mar 2 23:18:01 2012 +0100

    Add names for parameterized tests. Fixes #24 and #44.
    
    In order that you can easily identify individual test, you may provide
    a name for the Parameters annotation.
     @Parameters(name="my test")
    This name is allowed to contain placeholders, which are replaced at
    runtime. The placeholders are
    * {index} - the current parameter index
    * {0} - the first parameter
    * {1} - the second parameter
    * ... - the other parameters
    If you don't use the name parameter, then the current parameter index
    is used as name.
    
    Example:
    When you use @Parameters(name="fib({0})={1}") with the Fibonacci
    example, then you get test names like "fib(3)=2".
    
    This feature is based on the work of Dimitar Dimitrov (pull request
    #145).
    Thank
    you.

[33mcommit 1cec456a2c5638818959856eb3cef98743cbe08b[m
Merge: 59c686f5 daa2e4d8
Author: David Saff <david@saff.net>
Date:   Wed Feb 29 09:35:48 2012 -0800

    Merge pull request #372 from matthewfarwell/doc-methodrule
    
    Several javadoc referred to MethodRule when they should have referred to...

[33mcommit 59c686f5ca9d22288eca5cdbf2c75298fa1402ea[m
Merge: db9a456f 7944e8f8
Author: David Saff <david@saff.net>
Date:   Fri Feb 24 12:39:33 2012 -0800

    Merge pull request #365 from stefanbirkner/cleanjunit
    
    Improved Description class

[33mcommit 60d24dd036af00488f14713b97b47a2a72e5db3b[m
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Tue Feb 21 18:48:25 2012 +0100

    Improved failure message (#384)

[33mcommit c610a49727858597d9a10289bed0a0174053a69f[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Sun Feb 19 11:36:18 2012 +0100

    SortMethodsWith allows the user to choose the order of execution of the methods within a test class.
    
    The default order of execution of JUnit tests within a class
    is deterministic but not predictable. Before 4.11, the
    behaviour was to run the test methods in byte code order,
    which pre-Java 7 was mostly predictable. Java 7 (and some
    previous versions), does not guaranteee the order of execution,
    which can change from run to run, so a deterministic sort was introduced.
    As a rule, test method execution should be independent of
    one another. However, there may be a number of dependent
    tests either through error or by design. This class
    allows the user to specify the order of execution of test methods.
    
    There are four possibilities:
    
    MethodSorters.DEFAULT: the default value, deterministic, but not predictable
    MethodSorters.JVM: the order in which the tests are returned by the JVM, i.e. there is no sorting done
    MethodSorters.NAME_ASC: sorted in order of method name, ascending
    MethodSorters.NAME_DESC: sorter in order of method name, descending

[33mcommit a134a8623b68ef06517196af1b8ffa744e4c3935[m
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Thu Feb 16 18:24:02 2012 +0100

    Improved failure message (#384)

[33mcommit db9a456f1cff2de765b0dd979bca020636dc88d0[m
Merge: 4f92c3c0 10389dda
Author: David Saff <david@saff.net>
Date:   Thu Feb 16 07:53:17 2012 -0800

    Merge pull request #178 from abyx/master
    
    Simple removal of (seemingly) redundant asserts

[33mcommit f634102cf058ed5761b2e4ef66761e2f397b6160[m
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Wed Feb 15 21:27:20 2012 +0100

    Timeout exception contains the real cause of the timeout (#384)

[33mcommit 96bb03c2aecc818b7a77f9bb7d8684a16d8a80a7[m
Author: Peter De Maeyer <peter@de.maeyer.net>
Date:   Wed Feb 15 19:01:52 2012 +0100

    Removed offending @Override annotation (#382)

[33mcommit 3b8708636ffc1a9fc970b66db73c09095dabc2e2[m
Author: Petter Måhlén <pmahlen@shopzilla.com>
Date:   Wed Feb 8 17:08:12 2012 +0100

    added an 'expectCause(Throwable cause)' to the ExpectedException rule

[33mcommit 0b62513fa20ea3975a580e5b89dad265f54d6112[m
Author: Marcos Vinícius da Silva <marvinware2005@gmail.com>
Date:   Thu Feb 2 22:33:41 2012 -0200

    Simplifying isEqualsRegardingNull.

[33mcommit 052fc095d5b4a8af643d0e4402a504716ad8eb03[m
Author: Arjen Wisse <arjenwisse@gmail.com>
Date:   Thu Feb 2 18:05:59 2012 +0100

    * Removed empty line in ExpectedException
    * Moved CauseMatcher to ResultMatchers and splitted it up in two
    matchers (failureIs and causedBy)
    * Added tests for both matchers

[33mcommit 4f92c3c010d38cd9cafcc4fe7f66b776742379f2[m
Merge: 45eaab75 5f2ecdac
Author: David Saff <david@saff.net>
Date:   Wed Feb 1 11:43:34 2012 -0800

    Merge pull request #293 from jglick/master
    
    Sort test methods for predictability

[33mcommit 5f2ecdacca8db679081ff6dede52cb0d8970d730[m
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Tue Jan 31 14:54:56 2012 -0500

    Using MethodSorter here too, just in case it matters.

[33mcommit 3920f3fe11dffc904e1ab41a9ff4fc9d36b1c25b[m
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Tue Jan 31 14:52:41 2012 -0500

    Making Super and Sub member classes as suggested.
    https://github.com/KentBeck/junit/pull/293/files#r403246

[33mcommit f0319c2af61edbf587b958e9aa2f0f75eed2b375[m
Merge: 5d9e0022 45eaab75
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Tue Jan 31 14:49:10 2012 -0500

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit daa2e4d88de819b8b05c3d07f51f7a2e3adfa707[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Thu Jan 19 11:54:23 2012 +0100

    Several javadoc referred to MethodRule when they should have referred to TestRule

[33mcommit 53929101b4d9606d92dfd8d52e87f5dda467d51a[m
Author: Arjen Wisse <arjenwisse@gmail.com>
Date:   Tue Jan 17 12:13:16 2012 +0100

    Implemented the change now on org.junit.Assert.assertThat() as I think
    that's a better place and has cleaner code than the original. Included
    tests for both scenario's (assertThat as well as the ExpectedException).

[33mcommit 126b8eb8d9e550bfe3bbb03ff92b047172d928bb[m
Merge: bd6dc3af 5e5ec572
Author: Arjen Wisse <arjenwisse@gmail.com>
Date:   Wed Jan 4 09:24:29 2012 +0100

    Merge branch 'master' of github.com:arjenw/junit

[33mcommit bd6dc3aff19a3d8e8e555d16a05a42557a755e0a[m
Merge: 2cd39884 99954669
Author: Arjen Wisse <arjenwisse@gmail.com>
Date:   Wed Jan 4 09:23:29 2012 +0100

    Reused HasWrongExpectedException instead of own defined class
    (they were the same) and relocated the changes to a better location
    in the file which is more inline with the rest of the file. And,
    of course, removed the superfluous brackets.

[33mcommit 917a88fad06ce108a596a8fdb4607b1a2fbb3f3e[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Tue Jan 3 22:49:19 2012 +0100

    Added MainRunner. This removes the need for public methods in JUnitCore
    MainRunner installs a SecurityManager which traps the System.exit(), thereby
    removing the need to have runMainAndExit and runMain public in JUnitCore.
    MainRunner is only used in the tests of course.

[33mcommit 5e5ec572600e200dd52d54e4c3b4d9dd5b64a74c[m
Merge: 2cd39884 99954669
Author: unknown <awisse@CNL1516.vanenburg.com>
Date:   Tue Jan 3 17:42:28 2012 +0100

    Merge branch 'master' of github.com:arjenw/junit

[33mcommit 2cd3988479ae1195dcd38be325d2be1ea7d780e5[m
Author: unknown <awisse@CNL1516.vanenburg.com>
Date:   Tue Jan 3 17:36:26 2012 +0100

    Actual exception added in ExpectedException
    
    When using the ExpectedException to test for an exception to occur, it
    throws an AssertionError when thrown exception does not match the
    expected exception. Issue is however that in the JUnit runner results only
    the actual exceptions message is shown and not the stacktrace. To fix
    that, the actual exception is added to the cause of the AssertionError,
    giving the exceptions in a format like:
    java.lang.AssertionError: [reason]
      Expected: [expected exception]
         got: [actual exception + message]
     at [AssertionError stacktrace]
    Caused by: [actual exception + message]
     at [actual exception stacktrace]

[33mcommit 999546694db5005dc091c588433d91f5a7846f1d[m
Author: Arjen Wisse <arjenwisse@gmail.com>
Date:   Tue Jan 3 10:58:09 2012 +0100

    Actual exception added in ExpectedException
    
    When using the ExpectedException to test for an exception to occur, it
    throws an AssertionError when thrown exception does not match the
    expected exception. Issue is however that in the JUnit runner results only
    the actual exceptions message is shown and not the stacktrace. To fix
    that, the actual exception is added to the cause of the AssertionError,
    giving the exceptions in a format like:
    java.lang.AssertionError: [reason]
      Expected: [expected exception]
         got: [actual exception + message]
     at [AssertionError stacktrace]
    Caused by: [actual exception + message]
     at [actual exception stacktrace]

[33mcommit 45eaab756edc8913b1c74e87ef3b519da6afa5fc[m
Merge: a681b760 5475e12b
Author: David Saff <david@saff.net>
Date:   Sat Dec 31 05:03:41 2011 -0800

    Merge pull request #348 from stefanbirkner/iterable
    
    Use Iterable for the parameters of Parameterized (fixes gh-104).

[33mcommit 7944e8f8afbeaff17d337304df52dac227034423[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Mon Nov 28 22:23:18 2011 +0100

    Improved Description class.
    
    A few modifications to improve the readability of the code:
    * extracted METHOD_AND_CLASS_NAME_PATTERN constant
    * extracted methodAndClassNamePatternGroupOrDefault(...)
    * merged getMethodName() and parseMethod()
    * moved validation of display name to constructor
    * throw IllegalArgumentException if display name is null

[33mcommit eb307fa6f37ac8ec695b2f556e543969503418f5[m
Author: N.Keywal <nkeywal@gmail.com>
Date:   Fri Nov 11 03:51:23 2011 -0800

    Fix for #359

[33mcommit a681b760978751ca4c4ccc6de616b0643d6c2b0e[m
Merge: 982a7501 6f8a359d
Author: David Saff <david@saff.net>
Date:   Mon Oct 24 08:21:45 2011 -0700

    Merge pull request #344 from vyazelenko/master
    
    Fixes gh-342: TemporaryFolder.newFile(String) throws IllegalStateException in junit-4.10

[33mcommit 5475e12b57f5af0140deffa7f45c75dc47803167[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Oct 21 01:29:17 2011 +0200

    Use Iterable for the parameters of Parameterized (fixes #104).
    
    The method annotated with @Parameterized returns an Iterable<Object[]>
    (was List<Object[]> before). The test fails with a meaningful exception
    otherwise.

[33mcommit 6f8a359dde5b1e317f0bab2da3ac2b5bce117884[m
Author: Dmitry Vyazelenko <vyazelenko@yahoo.com>
Date:   Tue Oct 18 20:34:02 2011 +0200

    Cleanup TemporaryFolderUsageTest and add it to AllTests suite

[33mcommit 2d3090bf96357c0d9387a4e8f87525f776e52799[m
Author: unknown <gezr@a11.(none)>
Date:   Tue Oct 18 00:33:35 2011 +0200

    Fixes for issue #342

[33mcommit 982a75011a074ab25f2c96a1c2639c5b1ebb3b18[m
Merge: 849a16f4 b4f0afa6
Author: David Saff <david@saff.net>
Date:   Mon Oct 17 13:43:26 2011 -0700

    Merge pull request #343 from marcphilipp/no-static-rules
    
    Fixes gh-339: @Rule fields/methods must not be static

[33mcommit b4f0afa639b42fa551fdcb26d9c1855ae4d778cf[m
Author: Marc Philipp <mail@marcphilipp.de>
Date:   Sun Oct 16 14:18:05 2011 +0200

    @Rule fields/methods must not be static
    
    Fixes KentBeck/junit#339

[33mcommit 849a16f44256cd7c6514ed7c289c993d633a53fe[m
Merge: ebbcb2d3 8c2f7890
Author: David Saff <david@saff.net>
Date:   Mon Oct 10 05:43:52 2011 -0700

    Merge pull request #330 from fbarber/master
    
    Use <? super T> in Assert.assertThat

[33mcommit ebbcb2d3a730e8313546eae1602e274c228102a3[m
Merge: 4c8d3ff5 f82403fb
Author: David Saff <david@saff.net>
Date:   Fri Oct 7 06:25:38 2011 -0700

    Merge pull request #334 from matthewfarwell/333-build.xml-is-broken-after-merges
    
    Fixes gh-333: build.xml is broken after merge

[33mcommit f82403fb69db120079c861d4da560e7cae329be9[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri Oct 7 13:21:18 2011 +0200

    Fix for #333 build.xml is broken after merge

[33mcommit 8c2f7890154618b9409ef2baf7d96ccebec8d1ba[m
Author: fbarber <fedora@barber-family.id.au>
Date:   Wed Oct 5 21:56:28 2011 +0800

    Use <? super T> in Assert.assertThat
    
    Add comments explaining our interpretation of the type parameter on org.hamcrest.Matcher

[33mcommit 4c8d3ff5ea9d1556bf05af6262ee58f65984e22f[m
Merge: 3b55eacd 38c12ee5
Author: David Saff <david@saff.net>
Date:   Thu Sep 29 16:10:47 2011 -0400

    Merge branch '4.10'
    
    Conflicts:
            build.xml
            src/main/java/junit/runner/Version.java

[33mcommit 38c12ee56d863068fb743b45d9c1ee2aa74b71a8[m
Author: David Saff <david@saff.net>
Date:   Thu Sep 29 15:33:04 2011 -0400

    4.10 final in version, non-snapshot staging

[33mcommit 45a44647e7306262162e1346b750c3209019f2e1[m[33m ([m[1;33mtag: r4.10[m[33m)[m
Author: David Saff <david@saff.net>
Date:   Thu Sep 29 14:18:35 2011 -0400

    4.10 final

[33mcommit 3b55eacda031fe3cffe8a45d458995be040b4438[m
Merge: 130408bd 143c3348
Author: David Saff <david@saff.net>
Date:   Wed Sep 28 09:46:34 2011 -0700

    Merge pull request #329 from stefanbirkner/constructor
    
    Removed explicit constructor of JUnitCore

[33mcommit 1cff207ea15039aea63ea63254a056d516ca690b[m
Author: fbarber <fedora@barber-family.id.au>
Date:   Wed Sep 28 21:01:56 2011 +0800

    Use <? super T> in Assert.assertThat
    
    As the Matcher is only a consumer, ? super T is more appropriate.  Otherwise, a Matcher<Object> cannot be used with a String actual, for example.

[33mcommit 143c33485395a64b795da13ca1e74897666d5df4[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Sep 28 01:49:21 2011 +0200

    Removed explicit constructor of JUnitCore
    
    The constructor was used to create the RunNotifier. Now the
    initial value of the RunNotifier is provided in its declaration.
    
    Additionally added the final modifiert to the RunNotifier in
    order to make it clear, that it never changes.

[33mcommit df70c1087de9d3827656ede187371bbe29d2a974[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Sep 27 05:19:46 2011 +0200

    the two handle... methods are returning the rule
    
    The two methods handleAssertionError() and
    handleAssumptionViolatedExceptions() are returning the rule.
    
    Now you can write
      @Rule
      public ExpectedException thrown = none().handleAssertionError();
    or
      @Rule
      public ExpectedException thrown = none().handleAssumptionViolatedExceptions()
    
    Thank you David, for this suggestion.

[33mcommit bfd54d62251a67c6709be3ec4f02a31a02ac5a45[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Sep 27 05:14:36 2011 +0200

    deleted duplicate EventCollector

[33mcommit 130408bd716cc0f9a9c4ee0014b470f8865feefc[m
Merge: 1660ebdf 9a82d002
Author: David Saff <david@saff.net>
Date:   Fri Sep 23 13:03:59 2011 -0700

    Merge pull request #326 from matthewfarwell/49-master-git-branch-does-not-build-on-windows
    
    Fixes gh-49 Master now builds on windows

[33mcommit 9a82d0027247d7be667966766b01d4a24e4b834f[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri Sep 23 21:34:46 2011 +0200

    fix for #49 Master now builds on windows.

[33mcommit 1660ebdf1ebc316747a1c3f29c03f616125a9dc7[m
Merge: 49d62f90 faba199e
Author: David Saff <david@saff.net>
Date:   Fri Sep 23 12:05:45 2011 -0700

    Merge pull request #325 from matthewfarwell/support-rule-methods
    
    This is a fix for #83 support @Rule on methods

[33mcommit faba199e389e3c977fc5573315790a5cde5f7611[m
Author: Matthew Farwell <matthew@farwell.co.uk>
Date:   Fri Sep 23 20:52:33 2011 +0200

    This is a fix for #83 support @Rule on methods
    Extend rules to support @Rule public MethodRule someRule() { return new SomeRule(); }
    
    Scala does not allow the creation of public fields. If you declare a field public, the field is created as private but with accessor methods.
    To allow the use of @Rule with Scala fields, this patch allows the addition
    of @Rule to methods. When BlockJUnit4ClassRunner retrieves the list of fields
    that have the @Rule annotation, it also searches for methods with @Rule.
    These methods are called and the values returned are added to the list of
    TestRule.
    
    @ClassRule has been similarly changed.
    
    This is intended to be used as follows:
    
    private ExpectedException thrown = rules.ExpectedException.none();
    
    @Rule public ExpectedException getThrown() {
        return thrown;
    }
    
    or
    
    @Rule public Timeout getTimeout() {
        return new Timeout(20);
    }
    
    The validation is exactly the same as for the fields, i.e the methods must be
    public and return a TestRule/MethodRule. In the case of @ClassRule, the
    methods must also be static.

[33mcommit 32b2f67c89cfee48a2ada9b33f4800345ebc5ff1[m
Author: David Saff <david@saff.net>
Date:   Thu Sep 22 13:49:17 2011 -0400

    4.10 release notes up to date

[33mcommit 49d62f902ba7dba44b0b2b3b71e45004c667b2d5[m
Author: David Saff <david@saff.net>
Date:   Thu Sep 22 11:34:41 2011 -0400

    Development version goes to 11\!

[33mcommit 128553fc50758932f02fc6e13a3e25ef6a711152[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Sep 22 00:58:18 2011 +0200

    Fixes gh-121 (ExpectedException handles JUnit exceptions)
    
    ExpectedException rule no longer handles AssertionErrors and
    AssumptionViolatedExceptions by default. This means that the
    rule doesn't intercept if your test fails because of an violated
    assertion or assumption.
    
    If you want to test assertions or assumptions you have to tell
    the rule to handle such exceptions via handleAssertionErrors()
    or handleAssumptionViolatedExceptions().

[33mcommit 5d9e0022d3f6db1367d530579de6332b9c8802e3[m
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Wed Sep 21 17:48:06 2011 -0400

    Switching to method sort based on hash code - deterministic but hard to abuse.

[33mcommit 785a33b478d358e79a3b6592754ad9ec051e4278[m
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Mon Sep 19 18:01:09 2011 -0400

    If bytecode cannot be located or parsed, at least alpha sort.

[33mcommit b40493d53dab022c8a58c80284c01605b71d1d92[m
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Mon Sep 19 17:56:05 2011 -0400

    Use bytecode order of methods when possible.

[33mcommit e0f84b71fcc34ab4fe244340f18753225b74128b[m
Merge: cb69050a 0a23cd69
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Mon Sep 19 17:34:50 2011 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 0a23cd69eeaac6ad78668011b60d24ad0018813f[m
Merge: 7663a302 1b809a4a
Author: David Saff <david@saff.net>
Date:   Mon Sep 19 07:36:46 2011 -0700

    Merge pull request #319 from stefanbirkner/issue318
    
    Fixed gh-318 (Empty message instead of null)

[33mcommit 7663a302ff8392b07431e775965aa1dac2556ab9[m
Merge: 2d13004b 10144366
Author: David Saff <david@saff.net>
Date:   Mon Sep 19 07:36:07 2011 -0700

    Merge pull request #304 from stefanbirkner/NonStaticInnerTestClass
    
    fixed issue #42 (error message for non-static inner class)

[33mcommit 1014436692b0829a7287fbab81ef8720309d7945[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Sep 18 23:20:46 2011 +0200

    Fixes gh-42 (error message for non-static inner class)
    
    Add an appropriate error when a test class is a non-static inner class
    and don't try to validate the parameter count of its constructor.

[33mcommit 1b809a4a2e914da039841ff3d1c457e8e5122ac3[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sun Sep 18 22:59:27 2011 +0200

    Fixed gh-318 (Empty message instead of null)

[33mcommit 2d13004b3fbba2fe6ed919bbc98f2e3f69bb4809[m
Merge: c82eef0d 13885b99
Author: David Saff <david@saff.net>
Date:   Fri Sep 16 07:15:53 2011 -0700

    Merge pull request #313 from dsaff/categorized_parameters_fix
    
    Fixes gh-291: Categories + Parameterized still does not work

[33mcommit c82eef0da9be7201acb6dece4e96045756837c5a[m
Merge: 800f59a5 901550a3
Author: David Saff <david@saff.net>
Date:   Fri Sep 16 06:54:43 2011 -0700

    Merge pull request #317 from stefanbirkner/issue225
    
    Fixes gh-225 (initialize error count)

[33mcommit 901550a36244503ef2769724899cba213f11945f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Sep 15 19:38:33 2011 +0200

    Fixes gh-225 (initialize error count)

[33mcommit 800f59a5089e58287c93def0fc00da6274b51e70[m
Merge: b6c14073 e8349c5c
Author: David Saff <david@saff.net>
Date:   Wed Sep 14 13:18:18 2011 -0700

    Merge pull request #314 from stefanbirkner/RuleChain
    
    Rule chain

[33mcommit e8349c5c609fea8706ca926b19fe9c9d0b637a8b[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Sep 14 22:04:51 2011 +0200

    Fixes gh-193 (allow explicit ordering of Rules).
    
    Add a class RuleChain, which allows ordering of TestRules.
    
    Usage:
      @Rule
      public TestRule chain= RuleChain
                             .outerRule(new LoggingRule("outer rule")
                             .around(new LoggingRule("middle rule")
                             .around(new LoggingRule("inner rule");
    
    A test with such a rule chain creates the following log:
      starting outer rule
      starting middle rule
      starting inner rule
      finished inner rule
      finished middle rule
      finished outer rule

[33mcommit b6c1407343259de943e181401b29c6fad0f31e58[m
Merge: 3914b8fc ce0195c3
Author: David Saff <david@saff.net>
Date:   Wed Sep 14 12:51:38 2011 -0700

    Merge pull request #315 from dsaff/master
    
    Fixes gh-311: Fix 4.9.1 release notes, make sure markdown errors halt build

[33mcommit ce0195c3d81d32bc2fd4d7a0c15aa78aaaa47605[m
Author: David Saff <david@saff.net>
Date:   Wed Sep 14 15:50:08 2011 -0400

    Fixes gh-311: Fix 4.9.1 release notes, make sure markdown errors halt build

[33mcommit 3914b8fc8a4d6ad574994979d2a4c7b63258e227[m
Merge: 96df21cb e76c5f0f
Author: David Saff <david@saff.net>
Date:   Wed Sep 14 12:35:00 2011 -0700

    Merge pull request #310 from dsaff/master
    
    Fixes gh-309: build.xml uploads junitX.jar as junit-depX.jar

[33mcommit e76c5f0fe7e1e2034765fd80cd7556b6bfc82345[m
Merge: 05fe0fbf 96df21cb
Author: David Saff <david@saff.net>
Date:   Wed Sep 14 15:33:54 2011 -0400

    Merge branch 'master' of github.com:KentBeck/junit
    
    Conflicts:
            build.xml
            src/main/java/junit/runner/Version.java

[33mcommit 13885b99cf6d2f4bd2efa2211f57c103bbc03263[m
Author: David Saff <david@saff.net>
Date:   Wed Sep 14 10:09:08 2011 -0400

    Fixes gh-291: Categories + Parameterized still does not work
    
    Also does a little code hygiene throughout the project

[33mcommit 96df21cba5e56ee6d78fe51e86b4cc2bd2ceaf30[m
Author: David Saff <david@saff.net>
Date:   Tue Sep 13 17:57:11 2011 -0300

    Backed version up to 4.10.  Oops.

[33mcommit 84c4caaeb54249eed291274914ef6391622e07e3[m
Author: David Saff <david@saff.net>
Date:   Tue Sep 13 17:49:39 2011 -0300

    Set master version to 4.10.1 in build.xml

[33mcommit e55796904be214741701070b723acd895b25e995[m
Merge: c396cff8 95f6c415
Author: David Saff <david@saff.net>
Date:   Tue Sep 13 16:43:23 2011 -0400

    Merge 4.9.1 into master

[33mcommit c396cff8a7216e718c0a203a5829b25538964dd5[m
Merge: f3412137 f472307d
Author: David Saff <david@saff.net>
Date:   Tue Sep 13 16:33:54 2011 -0400

    Resolve merge conflicts between master and 4.10

[33mcommit 05fe0fbff2712054b124f034006579cfecfb08b7[m
Merge: 61f06547 9de54af8
Author: David Saff <david@saff.net>
Date:   Tue Sep 13 12:48:01 2011 -0700

    Merge pull request #11 from dsaff/4.9.1
    
    Merge 4.9.1 -> master

[33mcommit 9de54af85dc755addcfeee4dbbbb79311393f739[m
Author: David Saff <david@saff.net>
Date:   Tue Sep 13 15:38:33 2011 -0400

    Fixes gh-309: build.xml uploads junitX.jar as junit-depX.jar

[33mcommit f34121370f3698a529087013fecc45b0e94fb968[m
Merge: 561a736d 39545426
Author: David Saff <david@saff.net>
Date:   Sat Sep 10 03:17:29 2011 -0700

    Merge pull request #301 from stefanbirkner/issue289
    
    fixed issue #289 (removed useless code)

[33mcommit 39545426e07dcb3bb3d71c930451514ba54c5999[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Sep 9 01:17:39 2011 +0200

    fixed issue #289 (removed useless code)

[33mcommit f472307dd810cea0b871c71448ae8388b1e99c39[m
Merge: 92b1217d 5c4d8c62
Author: David Saff <david@saff.net>
Date:   Fri Sep 9 13:44:21 2011 -0700

    Merge pull request #300 from drothmaler/checkThat_ext
    
    ErrorCollector.checkThat overload

[33mcommit 92b1217d909ba78efbb792b30411a094802fade8[m
Merge: 84d0e8ac 74b8fc6a
Author: David Saff <david@saff.net>
Date:   Fri Sep 9 13:43:11 2011 -0700

    Merge pull request #299 from drothmaler/temp_folder_ext
    
    random temp file/folder creation

[33mcommit 561a736d4400c32a608a6ee97424c20ca70bf8ae[m
Merge: 61f06547 ada8735c
Author: David Saff <david@saff.net>
Date:   Fri Sep 9 13:28:18 2011 -0700

    Merge pull request #302 from stefanbirkner/TestWatcher
    
    fixed issue #296

[33mcommit ada8735cda0fe94c9cfea9b8fb2012488a3a44e6[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Sep 9 02:32:53 2011 +0200

    fixed issue #296 (TestWatcher and TestWatchman don't call fail when assumption is violated)

[33mcommit 74b8fc6a4c11d1fd6d584733398a77b83c54e6b6[m
Author: Daniel Rothmaler <daniel_rothmaler@web.de>
Date:   Thu Sep 8 23:49:42 2011 +0200

    Updated build and release notes to 4.10

[33mcommit 426f81b822663308176ee3b3a5cc9e912e6c1c87[m
Author: Daniel Rothmaler <daniel_rothmaler@web.de>
Date:   Thu Sep 8 22:59:48 2011 +0200

    fixed acknowledgements.txt to match the new pull request numbers

[33mcommit 5c4d8c62e341acb7d46eff730a19b2ce041c2dfe[m
Author: Daniel Rothmaler <daniel.rothmaler@nubix.biz>
Date:   Mon May 23 18:35:16 2011 +0200

    invoke overloaded method with default value, instead of copy&paste

[33mcommit da545cc5f425dd1392ffaa7d2cb8be3b2ef8a179[m
Author: Daniel Rothmaler <daniel.rothmaler@nubix.biz>
Date:   Fri May 20 10:40:09 2011 +0200

    added ErrorCollector.checkThat overload, that takes a reason

[33mcommit c60993db6a554db2fe50365ec8f7928a7ea8c3c9[m
Author: Daniel Rothmaler <daniel_rothmaler@web.de>
Date:   Fri Jun 24 23:36:58 2011 +0200

    added drothmaler to acknowledgements.txt

[33mcommit ce867738993339a28fd7b3a25ff1e74dbc0013aa[m
Author: Daniel Rothmaler <daniel.rothmaler@nubix.biz>
Date:   Tue May 24 08:27:19 2011 +0200

    Implemented random temp file/folder creation

[33mcommit cb69050a45f1688ad8c6e817cc511cfa67401f63[m
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Fri Aug 26 13:13:27 2011 -0400

    Preditably sort (test) methods in a class.
    The JVM does not guarantee any order.
    Visible here as an occasional failure in ParentRunnerTest.useChildHarvester on JDK 7 prior to fix.

[33mcommit 3448af3ea34963ae8f6481e8b16a2a1b5de605bb[m
Author: Jesse Glick <jesse.glick@oracle.com>
Date:   Fri Aug 26 12:47:17 2011 -0400

    Should explicitly specify source=1.5.
    JDK 7 javac warns if you do not; Ant inserts it for you but warns.

[33mcommit 61f06547599bb6b98bca99d5bc457eb20bc17cab[m[33m ([m[1;33mtag: r4.9[m[33m)[m
Author: David Saff <david@saff.net>
Date:   Mon Aug 22 14:20:52 2011 -0400

    JUnit 4.9 final release--updating version number

[33mcommit 9f305841434b53b463ce93f5dcc7826b72cd11db[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Aug 19 19:59:51 2011 -0700

    Added test for issue #219

[33mcommit 7ec443add70809418d2bbe1314cd4744742d854d[m[33m ([m[1;33mtag: r4.9b4[m[33m)[m
Author: David Saff <david@saff.net>
Date:   Fri Aug 12 10:37:01 2011 -0400

    Update version to 4.9b4

[33mcommit 95f6c4158812f03705f0f8088fa81ae791351cfe[m
Merge: 2c4ac237 83219d81
Author: David Saff <david@saff.net>
Date:   Thu Aug 11 19:42:58 2011 -0700

    Merge pull request #286 from orfjackal/4.9.1
    
    Fixes #285: Syntax error in Parameterized's usage example

[33mcommit 83219d81d0173d5444c0c127374b1684fc1384df[m
Author: Esko Luontola <esko.luontola@gmail.com>
Date:   Fri Aug 12 00:59:33 2011 +0300

    Fixes #285: Syntax error in Parameterized's usage example

[33mcommit 3cf8aae5f513adf693a930bef06d3b465043dc73[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 13 22:09:51 2011 +0200

    typos

[33mcommit ec6415e816b47eca315132bf4c3480424a61e740[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jul 12 21:12:57 2011 +0200

    added Nigel Charman as reporter of bugs github#257 and gihub#258.

[33mcommit 7977a19856b59160e2e726804e7c95ac2aafc803[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 13 22:09:51 2011 +0200

    typos

[33mcommit ebe66b585ac5d2b34e1cb9ed53eac4d384c0ff9e[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jul 12 21:12:57 2011 +0200

    added Nigel Charman as reporter of bugs github#257 and gihub#258.

[33mcommit 090b83b0becc2c93c3ad6246c2668d2119b74801[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 13 22:09:51 2011 +0200

    typos

[33mcommit 2070c9f6856f81c9ed5e8bcf370f4dc959e273be[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jul 12 21:12:57 2011 +0200

    added Nigel Charman as reporter of bugs github#257 and gihub#258.

[33mcommit 23daff8610ab7039cfa20128aa61485e4f66d950[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Jul 9 23:09:37 2011 +0200

    Fixed bugs #257, #258, #260)

[33mcommit 8a249206c730845fcb4a1efdee055f8509380808[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Aug 9 23:00:11 2011 +0200

    Fixed JavaDoc links.

[33mcommit ad67ca583c925e8e8cf3d2b495203de79cd75acd[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Jul 28 09:24:06 2011 +0200

    fixed issue #134 (wrong JavaDoc of Assert)

[33mcommit 7e05cdca2e5a3a46d00036cbaf3d3f5e747e288a[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Jul 22 09:44:08 2011 +0200

    fixed issue #89 (wrong JavaDoc of Parameterized)

[33mcommit 84d0e8acbeb64188b6697466f929455e62d906a8[m
Merge: d0d4772f 9dd69e97
Author: David Saff <david@saff.net>
Date:   Thu Aug 11 08:12:49 2011 -0700

    Merge pull request #283 from rodolfoliviero/4.10
    
    4.10 - Recursive temp folders

[33mcommit 9dd69e975f1ff0132d4260b671e7b26d1946b283[m
Author: rodolfoliviero <rodolfoliviero@gmail.com>
Date:   Wed Aug 10 19:12:14 2011 -0300

    merge branch 4.10

[33mcommit 0d8905ec022f2438f6347282a28fc688324b5c57[m
Author: rodolfoliviero <rodolfoliviero@gmail.com>
Date:   Wed Aug 10 19:10:21 2011 -0300

    merge branch 4.10

[33mcommit b00a3cdcaaf0bb554ed0955f98d9f1d759710c27[m
Author: Rodolfo Liviero <rodolfoliviero@gmail.com>
Date:   Mon Jun 27 22:00:39 2011 -0300

    temporary tree folders

[33mcommit 2c4ac2374045b1405646eca3f697fe05e1265243[m
Merge: 95ceae6b 1ad3a599
Author: David Saff <david@saff.net>
Date:   Wed Aug 10 07:42:33 2011 -0700

    Merge pull request #282 from stefanbirkner/issue265
    
    Issue265

[33mcommit 1ad3a59952f3528914d1225d51bbb04adb62c22f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Aug 9 22:45:17 2011 +0200

    Fixed FailOnTimeout class (issue #265)

[33mcommit 7b5641996d486bbcb33f13a9130821303e1e7d89[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Jul 28 09:24:06 2011 +0200

    fixed issue #134 (wrong JavaDoc of Assert)

[33mcommit bcf4785a8ae0ad21ffefd80dcfbb360621d98806[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Fri Jul 22 09:44:08 2011 +0200

    fixed issue #89 (wrong JavaDoc of Parameterized)

[33mcommit 531d7c869e294d451314261c81837e1d76afb777[m
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Thu Jul 7 10:46:33 2011 -0700

    added github#254

[33mcommit 8bfbd04bfc61ca364b180a54a851813cff9f58ed[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 6 21:55:37 2011 +0200

    Fixes #254: replaced @Rule by @ClassRule

[33mcommit 95ceae6b45c3f2ec09d240cf1fc352349532e7ac[m
Merge: fea0643e 70fe94d0
Author: David Saff <david@saff.net>
Date:   Mon Aug 8 13:48:42 2011 -0700

    Merge pull request #280 from orfjackal/4.9.1
    
    Fixes #278: TemporaryFolder creates files in the current working directory if applying the rule fails

[33mcommit 70fe94d031c7066899fc464cd4171db0884f1356[m
Author: Esko Luontola <esko.luontola@gmail.com>
Date:   Sun Aug 7 01:38:12 2011 +0300

    Fixes #278: TemporaryFolder creates files in the current working directory if applying the rule fails

[33mcommit 7a65992af084650c52dc69380ae1ac24b107715c[m
Author: Marcos Vinícius da Silva <marvinware2005@gmail.com>
Date:   Sat Aug 6 09:27:55 2011 -0300

    Adding assertNotEquals to Object, long and double

[33mcommit a19e98f00e972333edd2bbbde8270612aa588c42[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Jul 28 09:54:37 2011 +0200

    moved RuleFieldValidator from org.junit.rules to org.junit.internal.runners.rules

[33mcommit fea0643ecd075f3c231c77774fe7e8494f696867[m
Merge: d94d5c84 50758159
Author: David Saff <david@saff.net>
Date:   Tue Jul 19 10:48:33 2011 -0700

    Merge pull request #263 from rojotek/4.9.1
    
    4.9.1

[33mcommit 50758159495b0f58654934f03a3ceafa73ec826a[m
Author: Rob Dawson <robert.dawson@ephox.com>
Date:   Wed Jul 6 20:20:21 2011 +1000

    added Rob Dawson.
    
    Conflicts:
    
            acknowledgements.txt

[33mcommit 085308f8fb6bd499f5108f7cbd783b1997aceb7c[m
Author: Rob Dawson <robert.dawson@ephox.com>
Date:   Wed Jul 6 20:11:25 2011 +1000

    Added ResultTest.

[33mcommit b4fc7138cbf62c471ab5526d86a89757acffd755[m
Author: Rob Dawson <robert.dawson@ephox.com>
Date:   Sat May 1 21:17:32 2010 +1000

    Implemented serializable on Description, Result and failure, to enable their use in RMI, as per http://github.com/KentBeck/junit/issues/issue/101.

[33mcommit db8c72be9df8e7d605600cc5f370dffa35112362[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Thu Jul 14 21:40:16 2011 +0200

    applied code review

[33mcommit eef732f8e686d719c109a1ca66aed0dc8bba8808[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 13 22:14:25 2011 +0200

    renamed eachField to each

[33mcommit 58609e42697cf1ced355527f23553fb3c336734c[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 13 22:09:51 2011 +0200

    typos

[33mcommit 4e482e74f19f2619f940da57e2d7a0f1f70afe17[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 13 22:06:01 2011 +0200

    added Javadoc for RuleFieldValidator

[33mcommit b23ffd790b06f561290239ef3b7a5239ba755f10[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 13 21:45:28 2011 +0200

    extracted validation to RuleFieldValidator; moved validation to collectInitializationErrors(...)

[33mcommit d94d5c84e6429278798412a769e3a8002c8dea57[m
Merge: d0d4772f ab936ef8
Author: David Saff <david@saff.net>
Date:   Tue Jul 12 12:43:55 2011 -0700

    Merge pull request #256 from pholser/pholser-4.9.1
    
    Disable theories with generic type parameters in core Theories runner.

[33mcommit ab936ef8567bb8682e6034579d7c98976cd5fc22[m
Author: Paul Holser <pholser@alumni.rice.edu>
Date:   Tue Jul 12 14:36:47 2011 -0500

    correcting version # in header of release notes for 4.9.1

[33mcommit ff7c54f564eac489de1aef062ff0048c128e1c4f[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Tue Jul 12 21:12:57 2011 +0200

    added Nigel Charman as reporter of bugs github#257 and gihub#258.

[33mcommit be477604f670cf5e682f8dd4803f16781589b0c0[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Jul 9 23:09:37 2011 +0200

    Fixed bugs #257, #258, #260)

[33mcommit 42325d56aa22e9369c535410dfc545d3729592ae[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Jul 9 23:07:48 2011 +0200

    deleted abandoned import

[33mcommit d04a0d02ac8418c4fdbf926bdcfcb7b2bafee936[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Jul 9 22:59:09 2011 +0200

    TestClass.getAnnotatedFieldValues(...) throws exception with helpful message for non static fields (fixes issue #257).

[33mcommit d6f71260512973e70417b999f1efa9757659b1e1[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Jul 9 22:38:07 2011 +0200

    Using TetClass.getAnnotatedFieldValues in order to get classRule fields (fixes issue #258

[33mcommit 0c114780df6a4f096493730dd004bccd44b13e15[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Sat Jul 9 22:14:10 2011 +0200

    Throw exception with helpful message if annotated field is not public (fixes issue #260).

[33mcommit 89ffd7eda43f939f7dc210cfe21a196067ab08d6[m
Author: Paul Holser <pholser@alumni.rice.edu>
Date:   Fri Jul 8 21:13:43 2011 -0500

    Adding additional javadoc context for deprecated FrameworkMethod#producesType. Adding acknowledgements entry for pholser. Starting 4.9.1 release notes.

[33mcommit 9c4e365ea50ea6f983e4b4770de66553a806c806[m
Author: Paul Holser <pholser@alumni.rice.edu>
Date:   Tue Jul 5 20:03:40 2011 -0500

    Attempt 2: Setting up for resolving issue 64, Theories honoring generic type parameters. This commit comprises only those changes required in the core of JUnit -- basically adding a validator that the Theories runner can call to reject theories with generic type variables (that are hard to resolve), and deprecating FrameworkMethod#producesType, which only the Theories runner uses, and which will be supplanted by an equivalent method on ParameterSignature. Other required changes will be added to the Theories experiment once it migrates over to junit.contrib.

[33mcommit b22184577c3e73ae802c1c1246c72c3dcc5f4ed2[m
Merge: d0d4772f 65daf2f1
Author: David Saff <david@saff.net>
Date:   Thu Jul 7 11:55:55 2011 -0700

    Merge pull request #255 from stefanbirkner/master
    
    Fixed issue #254

[33mcommit 65daf2f114784d319c1793d55540d9bd0a38de0d[m
Author: Stefan Birkner <github@stefan-birkner.de>
Date:   Thu Jul 7 10:46:33 2011 -0700

    added github#254

[33mcommit d0d4772f56e598b55c12f336e17cc18d6302f26f[m
Author: David Saff <david@saff.net>
Date:   Wed Jul 6 16:58:05 2011 -0400

    Add developer information to make sonatype happy.

[33mcommit 338b12cb2e1f4b3b03acc88180748ed564d2b562[m
Author: David Saff <david@saff.net>
Date:   Wed Jul 6 16:24:13 2011 -0400

    Add jar for maven releases

[33mcommit 73c15ac3097078d2de1478dfecf4317a616346a3[m
Author: Stefan Birkner <mail@stefan-birkner.de>
Date:   Wed Jul 6 21:55:37 2011 +0200

    Fixes #254: replaced @Rule by @ClassRule

[33mcommit ced634a9be569d5072699fbb97641a4957860ede[m
Author: David Saff <david@saff.net>
Date:   Wed Jul 6 15:19:06 2011 -0400

    Add ruby script for uploading to github

[33mcommit 5a9eb89e15ca86a3db6a4e21f5c9f94f9ab8fb60[m[33m ([m[1;33mtag: r4.9b3[m[33m)[m
Author: David Saff <david@saff.net>
Date:   Wed Jul 6 14:22:25 2011 -0400

    Fix factuality and typo in release notes

[33mcommit cc617b399f369a0254edc714beb3551905fe799f[m
Author: David Saff <david@saff.net>
Date:   Wed Jul 6 13:39:08 2011 -0400

    Updated version to 4.9b3

[33mcommit 6a028ce5e88ace424618bf3415b60f3df434e1ae[m
Author: David Saff <david@saff.net>
Date:   Tue Jul 5 09:42:09 2011 -0400

    Brought 4.9 release notes up to date

[33mcommit ecc25e680aaf052aed63244f74bfeda0ee20a157[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Tue Jun 28 00:26:06 2011 -0700

    Added myself to acknowledgements.txt

[33mcommit 0333e7efdc9ecf81df4212f82c3a59c6ff0fab19[m
Author: Juan Cortez <jmc0092@yahoo.com>
Date:   Fri Jun 24 22:54:01 2011 -0700

    Fixes issue #219 where Assert.assertArrayEquals(float[],float[],float) displays an error message with doubles instead of floats

[33mcommit 8782efa08abf5d47afdc16740678661443706740[m
Author: David Saff <david@saff.net>
Date:   Fri Jun 24 09:49:19 2011 -0400

    Closes #248: protected BlockJUnit4ClassRunner#rules method removed from 4.8.2

[33mcommit ed2b51b0c78a079f806ea9157f77f83705f8e04b[m
Merge: 44d1324e 00301d67
Author: David Saff <david@saff.net>
Date:   Thu Jun 23 04:40:06 2011 -0700

    Merge pull request #247 from kcooney/initialization-error-message
    
    Give InitializationError a useful message

[33mcommit 44d1324ee26d240b89ee29eaebf1737b0a57ca79[m
Merge: 5ded3d32 b8591d72
Author: David Saff <david@saff.net>
Date:   Mon Jun 20 13:50:27 2011 -0700

    Merge pull request #243 from kcooney/fix-release-notes
    
    Remove outdated content in release notes about TestRule being abstract

[33mcommit b8591d72bf0522853e55ba500eb2e79571acf6aa[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Jun 17 11:15:56 2011 -0700

    Remove outdated content in release notes about TestRule being abstract

[33mcommit 5ded3d3231891402e07a208941d263aaf3379134[m
Author: David Saff <david@saff.net>
Date:   Tue Jun 14 13:39:21 2011 -0400

    Merging kcooney-issue227 to master

[33mcommit 82a70910d902ffa5c63d68f78481da18aa580a94[m
Merge: c53f62d0 de8dfa6d
Author: David Saff <david@saff.net>
Date:   Tue Jun 14 13:37:55 2011 -0400

    Merge branch 'issue227' of https://github.com/kcooney/junit into kcooney-issue227

[33mcommit c53f62d02ea0c2e121cd9e6c344c1cf64063f72a[m
Merge: 2774e2d2 5eee07b3
Author: David Saff <david@saff.net>
Date:   Tue Jun 14 13:21:59 2011 -0400

    Merge branch 'optimize-apply-filter' of https://github.com/kcooney/junit into kcooney-optimize-apply-filter

[33mcommit 2774e2d26c24c7f6495ad3c98466b50ff384cb58[m
Merge: 3d2826cb a4c5380f
Author: David Saff <david@saff.net>
Date:   Tue Jun 14 11:44:20 2011 -0400

    Merge branch 'optimize-filter-intersect' of https://github.com/kcooney/junit into kcooney-optimize-filter-intersect

[33mcommit 3d2826cb5650b127c5ffb55786b0b595674fda54[m
Author: David Saff <david@saff.net>
Date:   Tue Jun 7 01:04:33 2011 -0400

    Fixes #235: 4.7 release notes inconsistent

[33mcommit de8dfa6dcaf4353c5e399ff976db6803db73f9bd[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue May 31 21:31:53 2011 -0700

    Update ackowledgements for kcooney

[33mcommit a4c5380ffe636edc0acbab144080adbc709d668c[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon May 30 20:28:12 2011 -0700

    Optimize Filter.intersect() for common cases
    - ALL.intersect(filter)
    - filter.intersect(ALL)
    - filter.intersect(filter)

[33mcommit 5eee07b3e21f196b8cb937fb88eb8cf4be694f76[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon May 30 20:08:41 2011 -0700

    Optimize ParentRunner.filter for nested suites
    
    Prior to this change, applying a filter to a nested suite would create redundant nested filters

[33mcommit dfd0bba58bfdacfd8802ee07c8f83ee794a51aba[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Mon May 30 11:58:46 2011 -0700

    Update ParentRunner to make a copy of the List returned by getChildren()
    Fixes issue #227

[33mcommit 30b0c3000e75657cbd95a09110cec40d1695160c[m
Author: David Saff <david@saff.net>
Date:   Thu May 19 11:49:09 2011 -0400

    Added TODO to build.xml

[33mcommit 26779604308bacb0686e9e735b982e94bde2d5c5[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 29 15:29:21 2011 -0400

    Add mkeller to acknowledgements for GH-187

[33mcommit 96a6ba68d16d00940d58151be5cb2ab642f6d51d[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 29 15:24:40 2011 -0400

    Return us to Java 5 compatibility, a la github#187

[33mcommit 01b427b3b89ce04d01f0ddbd746d13a175feec5b[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 29 14:24:46 2011 -0400

    Fix for github#38: ParentRunner filters more than once

[33mcommit fcf34a36ee94cde6a5d9157a472ca65a465756ac[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 15 17:28:25 2011 -0400

    Add building information in BUILDING file

[33mcommit 351af6fa6a08ddf51f03525d8cc4616d45f5caf1[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 15 15:39:15 2011 -0400

    Fix javadoc for either.

[33mcommit 4f49c9cb62994111532578d2f6ed4bb98ba078ab[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 15 15:24:25 2011 -0400

    Remove no-longer-correct comment from test

[33mcommit dad7b8556d3d8da2943f7f7e4d34c16684db98d4[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 15 13:48:12 2011 -0400

    Oops, now acknowledge reinholdfuereder, who _actually_ submitted the test

[33mcommit 090e7ce54cfb894e732ccdca24a561b0dd767d48[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 15 13:44:50 2011 -0400

    Add ububenheimer@github to acknowledgements file

[33mcommit 669bb577583f2edd8cd65008a7c9ac19ebc350ea[m
Author: David Saff <david@saff.net>
Date:   Fri Apr 15 13:35:45 2011 -0400

    Fixes issue #39, by having multiple calls to ParentRunner.filter
    result in the intersection of filters, rather than just the last
    one used.

[33mcommit d3de6079892fa89aa46386c0369a29b4ef9e9e3c[m
Author: David Saff <david@saff.net>
Date:   Mon Apr 4 11:01:37 2011 -0400

    Automatic uploading of staged maven artifacts.

[33mcommit 0f4156e9c9fac64efece4f13c6ea8bd7fd0d020d[m
Author: David Saff <david@saff.net>
Date:   Sun Apr 3 14:54:08 2011 -0400

    Add all.maven.jars to build all the jars we'll push to maven

[33mcommit d148e1a26378d54b8fdff4afd5d5c4c35ad57885[m
Author: David Saff <david@saff.net>
Date:   Sat Apr 2 13:40:41 2011 -0400

    Allow build_tests.sh to run just one test.  Add TEST_jars

[33mcommit 848de406d1dc767d0ce8c8e5cd0e5d707cbe9076[m
Author: David Saff <david@saff.net>
Date:   Thu Mar 24 14:40:28 2011 -0400

    Format build.xml with spaces instead of tabs

[33mcommit 35ebd1ae4c78be3266aada07495dc1225d67d2c1[m
Merge: addcf714 de86eb20
Author: David Saff <david@saff.net>
Date:   Wed Mar 9 09:05:31 2011 -0500

    Merge branch 'master' of https://github.com/marciomazza/junit into marciomazza-master

[33mcommit addcf7148509a5e0a2ffeea138e3043a1f6b8523[m
Author: David Saff <david@saff.net>
Date:   Fri Mar 4 16:10:06 2011 -0500

    Acknowledge lacostej, and fix .bashemtote leakage.

[33mcommit 62a2a56c293fd154f152da6dad498d1fc222b352[m
Author: David Saff <david@saff.net>
Date:   Fri Mar 4 16:02:28 2011 -0500

    Fix ParentRunner#withClassRules javadoc.  (Thanks to lacostej for initial pull)
    Closes GH-191.

[33mcommit 8440169a16f2eec18a869dc5804e3686aafb25d8[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Feb 9 22:18:37 2011 -0800

    Change TestRule back to an interface. Fix TestWatcher methods to be protected.

[33mcommit de86eb205637ea755909554b93d6da89353414dd[m
Author: marciomazza <marciomazza@gmail.com>
Date:   Thu Feb 3 12:24:12 2011 -0200

    fixed documentation for BlockJUnit4ClassRunner.methodBlock: the steps of befores/afters can be influenced by rules as much as the other ones

[33mcommit b4180bf35de9db1ef78af532524aac735c815693[m
Author: David Saff <david@saff.net>
Date:   Thu Jan 20 09:31:13 2011 -0500

    Added release theme to html

[33mcommit d4a33cf2f54b5d9cb9ee9f349220bd629e6f4672[m
Author: David Saff <david@saff.net>
Date:   Thu Jan 20 09:24:31 2011 -0500

    Added release theme header

[33mcommit 00301d674fcfd8c94f67cba675a4644597f523aa[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 18 21:00:42 2011 -0800

    InitializationError should make defensive copies

[33mcommit 3c7c3b78065f1fc85f655bb60b3dad4ed33854a0[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 18 20:54:52 2011 -0800

    Give InitializationError a useful message. JUnit itself does not use the message,
    but having a useful message makes debugging runners easier.

[33mcommit 97319996bf76b9de2a2f394fc419aec5b865c77e[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 18 18:00:35 2011 -0500

    Note that 4.9 is unreleased

[33mcommit 00f480c7506f0495a6ad6dfb25aa22abe713a6a7[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 18 17:28:13 2011 -0500

    Update acknowledgements

[33mcommit 93ec0dc76315e2c19dbf9839263d2ad1b1da3c25[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 18 17:23:11 2011 -0500

    Further fixes to release notes

[33mcommit 688c96e1ae37f5115b812cb2410681bea86f1937[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 18 17:16:45 2011 -0500

    Updating release notes

[33mcommit 4610330ca7fca16df7da1b7d09ea065d071cf9b8[m
Merge: 12c1066d 346bad2d
Author: David Saff <david@saff.net>
Date:   Tue Jan 18 15:26:31 2011 -0500

    Merge branch 'multiple-failure-exception' of https://github.com/kcooney/junit into kcooney-multiple-failure-exception

[33mcommit 12c1066d3cd6876a18715afaf06fbb5901ec975a[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 18 15:20:56 2011 -0500

    Update to beta 2

[33mcommit 346bad2d3fb82c9a8378758b12979f7c9fe584e3[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 11 21:09:50 2011 -0800

    MultipleFailureException cleanup.
    
    1. Avoid creating a message unless getMessage() is called. Most of the time, the message is ignored; EachTestNotifier will create
    individual failures for Throwable.
    2. Constructor should make a copy of the passed in List
    3. getFailures() should return an unmodifiable List

[33mcommit a49240ade1974b948b20cf2c45d9129f04122735[m
Merge: 708ed373 9d8bb069
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 11 21:06:08 2011 -0800

    Merge branch 'master' into multiple-failure-exception
    
    Conflicts:
            src/main/java/org/junit/runners/BlockJUnit4ClassRunner.java

[33mcommit d494698a44291098aff33bd77b1ea501fe38be82[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 11 20:34:56 2011 -0800

    Fix Javadoc; remove compiler warning

[33mcommit d6ccf5b0fa4e0d62eac42425a593b870af1247bd[m
Merge: e857122b 9d8bb069
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 11 20:28:05 2011 -0800

    Merge branch 'master' into abstract-test-rule
    
    Conflicts:
            src/main/java/org/junit/rules/TestRule.java
            src/main/java/org/junit/rules/TestWatcher.java
            src/main/java/org/junit/runners/BlockJUnit4ClassRunner.java
            src/main/java/org/junit/runners/ParentRunner.java

[33mcommit 9d8bb069f68e2194db742981972c8930381b62c2[m
Merge: 0781e97b 7f6173aa
Author: David Saff <david@saff.net>
Date:   Tue Jan 11 15:56:46 2011 -0500

    Merge branch 'run-leaf' of https://github.com/kcooney/junit into kcooney-run-leaf
    
    Conflicts:
            src/main/java/org/junit/rules/TestRule.java

[33mcommit 0781e97b76ab5cd98cffaf3249f6e6698402b787[m
Merge: 8c437619 76634379
Author: David Saff <david@saff.net>
Date:   Tue Jan 11 14:35:27 2011 -0500

    Merge branch 'null-assertion-message' of https://github.com/kcooney/junit into kcooney-null-assertion-message

[33mcommit 8c437619b669caaf02acd70ae9f7ab44e864e50d[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 11 10:40:14 2011 -0500

    obsessive .gitignore cleanup

[33mcommit 86ba41d191b7ca08de636c554694d5929115d132[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 11 10:07:25 2011 -0500

    Update release notes to 4.9 actual

[33mcommit 460049e3c875d4ec0d50771baa246c72ed9f6f41[m
Merge: a7be1746 22ca5a51
Author: David Saff <david@saff.net>
Date:   Tue Jan 11 10:07:02 2011 -0500

    Merge branch 'master' into kcooney-run-leaf

[33mcommit a7be1746eabbeaf31f7dd02d4bdfa67eeb8dc268[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 11 10:06:32 2011 -0500

    Remove broken release notes

[33mcommit 22ca5a51fdc9fc869ff3553ea1aaeffb627ddbff[m
Author: David Saff <david@saff.net>
Date:   Tue Jan 11 09:58:52 2011 -0500

    Get b1 out of version-base, where it was wreaking havoc with release notes

[33mcommit e857122bff2a9774c4f44df4a7d531b902e406df[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Jan 7 20:53:42 2011 -0800

    Fix issue 30. Make TestWatcher abstract.

[33mcommit 766343797294634c86186664c519d65d7d984c96[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Jan 7 20:36:11 2011 -0800

    Fix AssertionError.toString() when no messages are passed.
    
    Fixes:
    junit.framework.Assert.fail()
    junit.framework.AssertEquals("a", "a")
    org.junit.Assert.fail()

[33mcommit 0128bff582b2d10bffff9ff497c3e6f697958b83[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Jan 7 19:24:41 2011 -0800

    Replace TestRule.applyAll() with RunRules.

[33mcommit 7f6173aa593b07856c1ca73ffaf87ff10ea15d4c[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Jan 7 17:44:42 2011 -0800

    Revert "Make TestRule an abstract class. Specify target of the rule annotations."
    
    I accidentically based this branch off of the run-leaf branch. This is the
    first step to fix this.
    
    This reverts commit 8ff0b44e3fb0c1c56a1dc6290c3b6828a5a8f9bf.

[33mcommit ce034f7167462706062dfc010fde052a89c4eb6d[m
Author: David Saff <david@saff.net>
Date:   Fri Jan 7 14:35:11 2011 -0500

    Adding bogus markdown, but should be removed later

[33mcommit 0f5680eb38de252273488f0bab20875b8446e3b4[m
Author: David Saff <david@saff.net>
Date:   Fri Jan 7 14:33:22 2011 -0500

    Deleting bogus release notes

[33mcommit c20ddf922ea1767eb9944cfb436dc9384b884d24[m
Author: David Saff <david@saff.net>
Date:   Fri Jan 7 13:57:57 2011 -0500

    javadoc fixes on TestRule

[33mcommit eb8da7b85251985b194911d4d3dc65acb525a5fd[m
Author: David Saff <david@saff.net>
Date:   Fri Jan 7 13:37:31 2011 -0500

    Switching back from kcooney-run-leaf to kcooney-run-leaf

[33mcommit e7a0111ce26bbce9c81f471ff925653fe0ead70d[m
Merge: 5f25ca31 bed58a57
Author: David Saff <david@saff.net>
Date:   Fri Jan 7 13:35:20 2011 -0500

    Merge branch 'run-leaf' of https://github.com/kcooney/junit into kcooney-run-leaf
    
    Conflicts:
            src/main/java/org/junit/rules/TestRule.java

[33mcommit 5f25ca318bc2b35ecf8526c08a1e3b3e17d375da[m
Author: David Saff <david@saff.net>
Date:   Fri Jan 7 13:03:18 2011 -0500

    Fix bad javadoc and bad release notes

[33mcommit 19b0d51f397571ee8ab7810521718e555b520f4a[m
Author: David Saff <david@saff.net>
Date:   Fri Jan 7 11:20:04 2011 -0500

    Fixed a javadoc problem.  More remain.

[33mcommit 10389ddac6c816647c96001fcb7d02f8d5bf5671[m
Author: Aviv Ben-Yosef <aviv@crowdspot.com>
Date:   Fri Jan 7 10:48:21 2011 +0200

    removing redundant asserts

[33mcommit bed58a573c373d57d64fa369f58b2a8f0dbee3d7[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Wed Jan 5 12:53:46 2011 -0800

    Add runLeaf() to ParentRunner.
    This makes it easier to write a custom runner that supports
    MultipleFailureException and AssumptionViolatedException
    without depending on internal classes.

[33mcommit 8ff0b44e3fb0c1c56a1dc6290c3b6828a5a8f9bf[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 4 21:09:02 2011 -0800

    Make TestRule an abstract class. Specify target of the rule annotations.
    
    Making TestRule abstract allows the apply method to be non-public, so
    developers with IDEs that are using rules will not see the apply method
    as a valid completion.

[33mcommit 708ed373c02b467422890d5163fff46d1f32ab01[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Tue Jan 4 20:32:50 2011 -0800

    Fix typos in comments

[33mcommit 751f75986b11336ac8310d73c89003b0b09ecb92[m[33m ([m[1;33mtag: r4.9b1[m[33m)[m
Author: David Saff <david@saff.net>
Date:   Mon Jan 3 16:12:10 2011 -0500

    For consistency, renaming version to 4.9b1

[33mcommit 67868114384f6941b807936101c91502dc4ffd4f[m
Author: David Saff <david@saff.net>
Date:   Mon Jan 3 16:01:10 2011 -0500

    Fix build.xml with better macro usage

[33mcommit a4c19ea7000b620dbb9f54c6cb625ddad1f8f33e[m
Author: David Saff <david@saff.net>
Date:   Mon Jan 3 15:19:23 2011 -0500

    Update version in pom.xml; delete obsolete SuiteBuilder.java;
    remove duplication in build.xml

[33mcommit 6ee76dc22e56457cb5904eb6c5c0bf97939880cb[m
Author: David Saff <david@saff.net>
Date:   Mon Jan 3 14:49:23 2011 -0500

    Update build_tests.sh to test "ant profile"

[33mcommit 06451d15d8ed14910f68bc18fb40e5b4d2aed374[m
Author: David Saff <david@saff.net>
Date:   Mon Jan 3 14:26:53 2011 -0500

    Remove obsolete file Listed.java

[33mcommit 96da6a59e6f8186a8cba427acfb45639d47f3909[m
Author: David Saff <david@saff.net>
Date:   Mon Jan 3 14:09:16 2011 -0500

    Further documentation updates.  No obvious changes from 4.8.2 missing, now.

[33mcommit b310cd56f1039389aa360fbf51c6349e7a8e1f02[m
Author: David Saff <david@saff.net>
Date:   Mon Jan 3 13:33:50 2011 -0500

    Update JUnit version, improve ClassRule javadoc, update release notes

[33mcommit 8d26b450670647c847aa0ba1dd47a9c54865c63d[m
Author: David Saff <david@saff.net>
Date:   Tue Dec 28 09:46:14 2010 -0500

    further documentation cleanup, especially around TestRule

[33mcommit 81b50e9f3bdb66543d07e7349026bd3b447f433e[m
Author: David Saff <david@saff.net>
Date:   Tue Nov 16 10:18:17 2010 -0500

    TODO cleanup for 4.9 lead-up

[33mcommit b3789b3f879d34bbe968d5aa51d15c8856b9d102[m
Author: Kevin Cooney <kcooney@google.com>
Date:   Fri Nov 12 17:30:03 2010 -0800

    Create MultipleFailureException in org.junit.runners.model and deprecate the one in org.junit.internal.runners.model.
    Update MultipleFailureException to have a useful message.
    
    This allows developers who write custom runners to properly handle multiple exceptions without depending on internal classes.

[33mcommit 308768863b78f3a6345e25d7f9d35892c2de5a01[m
Author: David Saff <david@saff.net>
Date:   Tue Nov 9 09:45:14 2010 -0500

    Renamed TestRuleTestWatchman to TestWatcher, updated docs

[33mcommit d21d4edb6a5c55a3d8930dd26762a26cad67d827[m
Author: David Saff <david@saff.net>
Date:   Tue Nov 9 09:11:59 2010 -0500

    Get rid of MethodRule deprecation warnings

[33mcommit 4041354a3a7629b74970e0624b7564736c20e1e3[m
Author: David Saff <david@saff.net>
Date:   Tue Nov 9 08:57:34 2010 -0500

    Starting to get rid of deprecation warnings

[33mcommit 0815c4d619b177431e64a2485baa0f746f3e2886[m
Author: David Saff <david@saff.net>
Date:   Mon Oct 25 23:13:50 2010 -0400

    Added TestRule, much better interface for a much better world.

[33mcommit 56b1d5d4342c13151ae2d4b3f9aca146732cfb42[m
Author: David Saff <david@saff.net>
Date:   Mon Oct 25 22:50:08 2010 -0400

    catch up deletion

[33mcommit c7895eb8695d79b14ff2f903fbb2fab3e52e4c43[m
Author: David Saff <david@saff.net>
Date:   Mon Oct 25 22:49:47 2010 -0400

    ClassRule uses a generic, horribly named BisectionRule, and category opt-out logic is more general

[33mcommit 95a8c63cb0a7867d58ee4a0777fec65bab39a1ec[m
Author: David Saff <saff@dr-computer.home>
Date:   Tue Oct 12 23:20:49 2010 -0400

    Add comment about next steps

[33mcommit 403f761da11bdaf9a03538139e7ae51601c36b0e[m
Author: David Saff <david@saff.net>
Date:   Tue Oct 12 23:03:29 2010 -0400

    Correctly doesn't try to parse categories for methods of parameterized test classes.

[33mcommit b3831d600d2d893ec6250ee930188cc373d81ee5[m
Author: David Saff <saff@dr-computer.local>
Date:   Mon Aug 30 22:10:50 2010 -0400

    Fixed direct category/parameterized conflict in a hacky way.  Next, error for method-level category annotations in parameterized class.

[33mcommit 568e29c871ea144e12f273dc7e12c949a5a507da[m
Author: dsaff <david@saff.net>
Date:   Wed May 19 22:24:16 2010 -0400

    Adding ClassRules

[33mcommit af5722e040626f7c3aa14ccbfb4cb2375f43a561[m
Merge: 8f486adc 43519587
Author: dsaff <david@saff.net>
Date:   Wed May 19 21:46:52 2010 -0400

    Merge branch 'AlistairIsrael-classrules' of http://github.com/AlistairIsrael/junit into AlistairIsrael

[33mcommit 8f486adcbffb61917dbb60e21ad64a24df5ce7a5[m
Author: dsaff <david@saff.net>
Date:   Wed May 19 21:45:16 2010 -0400

    Remove unnecessary static from javadoc

[33mcommit 435195876d559ec780e21f4f53e8db6849a65b23[m
Merge: ab2395c8 f09cff79
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Thu May 13 21:54:01 2010 +0800

    Merge branch 'master' of git://github.com/KentBeck/junit into AlistairIsrael-classrules

[33mcommit f09cff79b941a525271f3f2838a9742b4c5c8d36[m
Author: dsaff <david@saff.net>
Date:   Wed May 12 00:42:59 2010 -0400

    alpha-ready implementation of SuiteBuilder

[33mcommit 3b7ab4a322c966602f202e455a8bc4612af56a18[m
Author: dsaff <david@saff.net>
Date:   Wed May 12 00:20:38 2010 -0400

    Re-adding SuiteBuilder (renamed Suite2), and CategoryFilter

[33mcommit ab2395c8c07077bed6aa5b673bf05197627bad3f[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Thu May 6 16:32:07 2010 +0800

    Lost the import again

[33mcommit 56743a446c8fe01319c6588c1709bcf1a090ccde[m
Merge: 28ef5cb7 74bb7d86
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Thu May 6 16:28:40 2010 +0800

    Merging from AlistairIsrael-classrules on github to ppreserve history because of non-fast forward merge (whatever that means)

[33mcommit 28ef5cb783d9e4b8239f7984696a9c5080c126a7[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Thu May 6 16:21:41 2010 +0800

    Added missing imports after merge

[33mcommit 3840331fd1918e91b0a36a263d141a40c41566a9[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Thu May 6 16:18:46 2010 +0800

    Revert "Fixed compilation errors from merge"
    
    This reverts commit 0b2483896d93e5a26cf433b52c463e9aff9ea022.

[33mcommit 0b2483896d93e5a26cf433b52c463e9aff9ea022[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Thu May 6 16:18:18 2010 +0800

    Fixed compilation errors from merge

[33mcommit b5fb9c92dfb1380b8a8b0b53aea3e7f7627ee03c[m
Merge: 63f40a83 ab51452a
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Thu May 6 16:09:38 2010 +0800

    Merge from master to branch AlistairIsrael-classrules

[33mcommit ab51452ac565d286b7bbd5a13767253c317bb29f[m
Author: dsaff <david@saff.net>
Date:   Mon May 3 22:23:59 2010 -0400

    Fixes github#98: assumptions with expected exceptions

[33mcommit c077f832b9873cfc8a8df9e4f11ea169ec6e7d3c[m
Author: dsaff <david@saff.net>
Date:   Wed Apr 14 14:24:41 2010 -0400

    added LICENSE

[33mcommit bc0ae224fa4be8b719afa29917c975962e6c781c[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 13 18:34:18 2010 -0400

    Release notes html done

[33mcommit a30e87b6ac67f14a42b97d427bb1c8c6ba18cd87[m[33m ([m[1;33mtag: r4.8.2[m[33m)[m
Author: dsaff <david@saff.net>
Date:   Thu Apr 8 13:04:17 2010 -0400

    Clean-up after review in github's compare view.  Thanks, github.

[33mcommit c84f84eb56e1009304f99d3be04e678df3407b88[m
Merge: 592b71c7 56954698
Author: dsaff <david@saff.net>
Date:   Thu Apr 8 11:51:29 2010 -0400

    Merge branch 'master' of github.com:KentBeck/junit

[33mcommit 592b71c7e7cc3c10de2d6c331854a751b25879a6[m
Author: dsaff <david@saff.net>
Date:   Thu Apr 8 11:45:11 2010 -0400

    Didn't want that

[33mcommit 6d99eb5d611cebcec19d35b74e75094c84315bdd[m
Author: dsaff <david@saff.net>
Date:   Thu Apr 8 11:44:48 2010 -0400

    release notes

[33mcommit 56954698ca3e707ba6992509b8b3d64caa021442[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 6 10:23:22 2010 +0800

    Bump version

[33mcommit a64ef43fc5d2a019d5cebd17a3c7ecb3341e5dfa[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 6 10:17:07 2010 +0800

    up version

[33mcommit d0534dae86dd511eb0575dbdf7e706a40f51e590[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 6 09:43:42 2010 +0800

    Improve handling of TestSuites

[33mcommit 7ffc23078cc11ce7502c375242b66d6a745ac9a1[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 6 02:27:28 2010 +0800

    Fix compilation errors

[33mcommit 01ecc0d5bc9f8b49ed36881cc258573a43bef69f[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 6 02:16:53 2010 +0800

    I want these gone

[33mcommit 309edadfd8a7169e99571d36ec31cacfaabb2fe1[m
Author: Berin Loritsch <berin@berin-laptop.(none)>
Date:   Wed Feb 10 07:02:17 2010 +0800

    Take care of the TODO to make the inner class static.

[33mcommit a21ce2438fd69d6656dcf5274deb031976df12c1[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 6 02:14:12 2010 +0800

    Most of the plans and mark2 nonsense gone

[33mcommit 5f7fddf537e551109ffd6241a00c87a2b3521523[m
Author: dsaff <david@saff.net>
Date:   Tue Apr 6 02:13:46 2010 +0800

    Most of the plans and mark2 nonsense gone

[33mcommit 496ee866a46f783d145b649a688df57cbf79490e[m
Author: dsaff <david@saff.net>
Date:   Wed Mar 10 01:36:07 2010 +0800

    categories 2

[33mcommit 42fb9bd796d0ba39e02fff374bbac129120e73de[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 22:23:22 2010 -0400

    Bump version

[33mcommit 64ffbec7165a545a4fe9f8521ea9c95f14a287a4[m
Merge: 25fa1d53 2de4d6f2
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 22:17:18 2010 -0400

    Merge branch 'issue96'

[33mcommit 25fa1d53ff124bc82d9d449c37ff1dea186c3e42[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 22:17:07 2010 -0400

    up version

[33mcommit 2de4d6f2bcf699b94614f9208f620f4c56bc9876[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 21:43:42 2010 -0400

    Improve handling of TestSuites.  Closes gh-96

[33mcommit 70adacdc1a7f963c081a9752ba62200f8b798d56[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 21:43:42 2010 -0400

    Improve handling of TestSuites

[33mcommit 1d86784cd452e8d9e30d812255cadb75ef8dae15[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 14:27:28 2010 -0400

    Fix compilation errors

[33mcommit 5077a8c714a3693e26e15932feeb3861175ac849[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 14:16:53 2010 -0400

    I want these gone

[33mcommit e39dc46adb1cd28a9f348e6f336764f70fcb4cdf[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 14:14:12 2010 -0400

    Most of the plans and mark2 nonsense gone

[33mcommit 97402a3401c6cc2d45d395c0d9d636f483b5571c[m
Author: dsaff <david@saff.net>
Date:   Mon Apr 5 14:13:46 2010 -0400

    Most of the plans and mark2 nonsense gone

[33mcommit 971c9a52281458375af79e303449fe22bf91feab[m
Merge: b8c76067 54b657ce
Author: dsaff <david@saff.net>
Date:   Tue Mar 9 12:36:24 2010 -0500

    Merge branch 'master' of github.com:dsaff/junit

[33mcommit b8c76067e505713f90195087ec53a078654ec3fa[m
Author: dsaff <david@saff.net>
Date:   Tue Mar 9 12:36:07 2010 -0500

    categories 2

[33mcommit 54b657ce3d7042fc0adc13130400322b5dd70779[m
Author: Berin Loritsch <berin@berin-laptop.(none)>
Date:   Wed Feb 10 07:02:17 2010 +0800

    Take care of the TODO to make the inner class static.

[33mcommit 1bbab715de4c64943948ecc3739c8d5569378672[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Feb 8 23:10:47 2010 -0500

    CategoriesMark2 reuse code properly from TestClass

[33mcommit 04189a834a01ae7ff3189bfa869e90d1a7f83acf[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Feb 8 22:05:58 2010 -0500

    added test of TestName in Before and After

[33mcommit 4de916220b9e70d08eccf7e7e292fe9e54157e92[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Feb 2 23:35:20 2010 -0500

    Started on a new API for categories (and filters in general)

[33mcommit 8dd7600e8634709c2e673e825e3f8cea58ff3c65[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Mon Feb 1 14:09:52 2010 -0500

    Temporarily here to keep master clean

[33mcommit 84749625d492124be145831ef194fde0c0c737d5[m
Merge: 12b9b787 a781c15b
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jan 25 23:46:51 2010 -0500

    Merge branch 'master' of git@github.com:dsaff/junit

[33mcommit 12b9b787a161d4b460d4d6a14da6ac53cac3713b[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jan 25 23:46:25 2010 -0500

    Category filter can look all the way up the Description stack

[33mcommit 86abf33f863fee1db3ba7dd8ee3e9910f105f57d[m
Author: David Saff <saff@redredrobot.local>
Date:   Thu Jan 21 16:30:36 2010 -0500

    test for multi-level category application

[33mcommit 9de3abe6c337247fd4b5d5af6406bdbb30403f50[m
Author: David Saff <saff@redredrobot.local>
Date:   Thu Jan 21 15:52:21 2010 -0500

    private fields and appropriate use of Plan

[33mcommit a781c15b2f97c16f6f2b4ff80dcdbd88f9dd8735[m
Author: Kristian Rosenvold <kristian@rosenvold.com>
Date:   Thu Jan 21 04:09:10 2010 +0800

    Removed version number

[33mcommit d9ffa8ab1807c8419f8fc2b5f91fa810113a9a85[m
Author: Kristian Rosenvold <kristian@rosenvold.com>
Date:   Thu Jan 21 04:07:02 2010 +0800

    Added better pom.xml

[33mcommit 818974071eba9d5355918a5905403c703aeea9af[m
Author: Kristian Rosenvold <kristian@rosenvold.com>
Date:   Thu Jan 21 04:06:47 2010 +0800

    Updated gitignore

[33mcommit 02fc1f509a670de3632417bbf33168989bfcf872[m
Merge: b33b4b09 c3873cf7
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Tue Jan 5 11:51:45 2010 -0500

    merged with master

[33mcommit b33b4b090c224c14415d0ffb68a078a097aeaf71[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jan 4 23:13:25 2010 -0500

    RunNotifier.fireTestRunStarted(Plan) to replace fireTestRunStarted(Description)

[33mcommit 66cf6859fa74021320c9b0d5e0a6ffc5c86b770f[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jan 4 22:43:46 2010 -0500

    Description.getChildren removed from all tests

[33mcommit c503e40d9ec79ba76b69dd31d7dd32648fa13cf2[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jan 4 22:40:54 2010 -0500

    Deleted huge time-tripling test, MaxCore uses Plan for recursive descent

[33mcommit c3873cf7b17abba564374522af2bdc02abcc509d[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Wed Dec 23 13:40:13 2009 -0500

    Max uses Plan rather than Description now

[33mcommit f1f4fe290a3a35a9083d2e76e922b57350e05f34[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Dec 22 11:18:29 2009 -0500

    Cleaned up methods and method order

[33mcommit 6589127231db19458b696785bab3b839f9bde90f[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Dec 22 10:52:53 2009 -0500

    Added Plan, which knows about child relationships--we'll eventually deprecate children from Description.  Plan is first used in JUnit4TestAdapter

[33mcommit 870289f3272917f312de6902b8b6bdc43552d4b7[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Dec 21 22:54:05 2009 -0500

    Simplify Filter implementation for backward compatibility

[33mcommit 2f9b53dbecad010dbb7e7cfff3a11476b7d2208a[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Dec 21 22:30:10 2009 -0500

    Simplify Filter implementations

[33mcommit 778d123dc739596836916e1035f5c2c16c915665[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Fri Dec 18 09:51:26 2009 -0500

    Fixed swapped release notes for 4.8 and 4.9

[33mcommit 7cd277620b4c888ae4101bb3f4768af83b85313a[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Fri Dec 18 09:50:45 2009 -0500

    Better documentation of Filter method, which allows a more succinct definition of ParentRunner

[33mcommit 7a2b0460c7abd7573faa9d7845a5b1169dcdcb7f[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Fri Dec 18 09:05:43 2009 -0500

    Big refactor

[33mcommit d3e86b059db787af5c0d58ddf3f69af5b42865b8[m
Author: David Saff <saff@redredrobot.home>
Date:   Thu Dec 17 23:59:38 2009 -0500

    About to do surgery on ParentRunner

[33mcommit 34a0ecb4ffb3cb8d33b60c222c29145d017f02c9[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Tue Dec 8 10:40:11 2009 -0500

    Added release notes

[33mcommit 832bb8322f2ca09af52769a0198b276269b53988[m[33m ([m[1;33mtag: r4.8.1[m[33m)[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Tue Dec 8 10:15:44 2009 -0500

    Clarify that annotating suite has no effect

[33mcommit ea80d1aa27f92ce103c43c0bf70a829d6e31111d[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Tue Dec 8 10:13:21 2009 -0500

    Fix documentation reference to CategoryType

[33mcommit 7d8f2b7f6e190e8e59efacc10bc617b6646d131b[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Dec 7 23:00:43 2009 -0500

    Annotations on classes are merged with method annotations for categories

[33mcommit d0c70cac5b28861803d97d59ab93dfcb10d2c4d3[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Thu Dec 3 15:21:05 2009 -0500

    Make release notes compilable, add announce list to building task list, fix generics issues.

[33mcommit 5a3a326096cf65a58272ee89a5ef1c164cfd9d33[m[33m ([m[1;33mtag: r4.8[m[33m)[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Nov 30 23:08:09 2009 -0500

    Final cleanup of Categories and release notes for 4.8

[33mcommit cec8e3ed1246c289ae156c4418d2e224bd793f4b[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Nov 23 23:06:40 2009 -0500

    Any class can be a category.  Added Category exclusion.

[33mcommit ce280f0afd532351d5783cf93d08526181eee4c8[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Nov 16 23:34:24 2009 -0500

    update docs

[33mcommit f8ee06baeb1ffa935c14c80aef5c5e6d28faefbd[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Nov 16 23:24:20 2009 -0500

    Our own cleanup

[33mcommit c8a70525d05df7238c55fb662d41a6535cc8a664[m
Merge: 0c45278e 28d398d0
Author: David Saff <saff@redredrobot.home>
Date:   Mon Nov 16 22:58:31 2009 -0500

    Merge branch 'threadingissues' of git://github.com/krosenvold/junit into issue16

[33mcommit 0c45278e830fdd1fc752a0eb1a3b25a3395d3e0e[m[33m ([m[1;33mtag: r4.8b3[m[33m)[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Nov 16 22:12:47 2009 -0500

    JUnit 4.8b3 implements Categories.  See doc/ReleaseNotes4.8.txt for
    details.

[33mcommit 7aac4b19d359285041ccb51d575235339a1a8be0[m[33m ([m[1;33mtag: r4.8b2[m[33m, [m[1;33mtag: r4.8b1[m[33m)[m
Author: David Saff <saff@dhcp-172-31-197-85.cam.corp.google.com>
Date:   Tue Oct 27 08:52:06 2009 -0400

    Fixed assertNull issue

[33mcommit 63f40a83b0085369dbb31ac723d038e081b05720[m
Merge: 0085f283 b0902ca1
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Tue Oct 27 15:12:21 2009 +0800

    Merge branch 'master' of git://github.com/KentBeck/junit into AlistairIsrael-classrules

[33mcommit b0902ca1ba8c1b20f0c08b3d04b5032de335531e[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 26 21:55:44 2009 -0400

    Deleting old names for things

[33mcommit 0085f2833655da104890ec1dac674ab07959420c[m
Merge: 4a678cd7 46036e71
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Tue Oct 20 11:43:17 2009 +0800

    Merge branch 'master' of git://github.com/KentBeck/junit into AlistairIsrael-classrules

[33mcommit 4a678cd73cdc5f0330da0b57d42f7fb0c564d73c[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 19 23:11:19 2009 -0400

    javadoc'ed, and with better names

[33mcommit 9eab1418bf073556414f8654a8b66d65d784ed71[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 19 22:51:12 2009 -0400

    Multiple categories on tests, category inheritance, production classes in production package.

[33mcommit a8a05d5b490aff69efc6be29fa28a7b14674ab48[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:38:42 2009 +0800

    Added ClassrulesTest to exercise class-level @Rules

[33mcommit 71980abb3edfbdd988b4b4714c508e4db86787f4[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:14:08 2009 +0800

    Clarified Javadoc and exception message; finalized parameter

[33mcommit 5b5a17d3c50bf5e96f4baff2aa061ba039511048[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:12:16 2009 +0800

    Use Field#getType()

[33mcommit 74fe490cc074f8be3cee760aac3f8e313698db82[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:04:50 2009 +0800

    Version 4.7 to 4.7.1-SNAPSHOT in build.xml

[33mcommit 4abb65c56382cdd4ff453ddceb70b5944e6e0b38[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 16:59:38 2009 +0800

    Proof-of-concept for class-level @Rule support

[33mcommit 81821e83c425202b86c27d6be9c9ebe453e6d507[m
Author: watisdit <waldodelport@gmail.com>
Date:   Sat Aug 1 01:41:13 2009 +0800

    Fixes sourceForge bug:
    When assertEquals(Object expected, Object actual) is failed, it outputs:
    java.lang.AssertionError: expected:<XXX> but was:<YYY>.
    assertNull(Object) could use the same message: expected:<null> but
    was:<YYY>.
    
    Signed-off-by: dsaff <david@saff.net>

[33mcommit 74bb7d862f2530d204b53a2cc45ae22ade6fa9e6[m
Merge: ee598b38 46036e71
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Tue Oct 20 11:31:58 2009 +0800

    Merge branch 'master' of git://github.com/KentBeck/junit into AlistairIsrael-classrules

[33mcommit 46036e7146f9dd0ca44baaec490692b967edd0ce[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 19 23:11:19 2009 -0400

    javadoc'ed, and with better names

[33mcommit ce810b763e5021629248702993f226e3bf969db8[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 19 22:51:12 2009 -0400

    Multiple categories on tests, category inheritance, production classes in production package.

[33mcommit ee598b3836fa23c5d8a936d2b621cb3f32f3794e[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:38:42 2009 +0800

    Added ClassrulesTest to exercise class-level @Rules

[33mcommit 31213175b4a349b1e6ab16f553570533bc81e579[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:14:08 2009 +0800

    Clarified Javadoc and exception message; finalized parameter

[33mcommit 01716157f2683f5610d721929a687e7dc3aee558[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:12:16 2009 +0800

    Use Field#getType()

[33mcommit 8313ec5081733230050540899d6047a02d5fb745[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 17:04:50 2009 +0800

    Version 4.7 to 4.7.1-SNAPSHOT in build.xml

[33mcommit 79ef5a7e1d7fa144cc81c9414f4791aaea8b3d75[m
Author: Alistair A. Israel <aisrael@gmail.com>
Date:   Mon Oct 19 16:59:38 2009 +0800

    Proof-of-concept for class-level @Rule support

[33mcommit 9ddffd19ff126e411539940fc54d3e47e2161452[m
Merge: 334bf585 bf01cb02
Author: David Saff <saff@redredrobot.home>
Date:   Tue Oct 13 00:00:17 2009 -0400

    Merge branch 'master' of git@github.com:dsaff/junit

[33mcommit 334bf585b5de1534d7c0ec519fa0df250d00f022[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 12 23:59:14 2009 -0400

    This looks like a usable Category API

[33mcommit e5782ce23b9aa60665cc6f6fc721cd9641bcc346[m
Merge: a268686d 758ec7fd
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 12 22:06:09 2009 -0400

    merged

[33mcommit 758ec7fdc2ea8db0c3cb57b83c2a1a069ee214b6[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 12 22:05:01 2009 -0400

    Removed unused import

[33mcommit 13f652c7ed1c36cfa19a12f662eb0307a9bd2f17[m
Merge: a8629da9 a68ae088
Author: David Saff <saff@redredrobot.home>
Date:   Mon Oct 12 21:54:27 2009 -0400

    Merge branch 'master' of git@github.com:KentBeck/junit

[33mcommit 28d398d01c7a294ca9db34b90e2b1e3c874a8bc0[m
Author: Kristian Rosenvold <kristian@rosenvold.com>
Date:   Mon Oct 5 12:17:49 2009 +0200

    Readed concurrency patch because I had messed up

[33mcommit a68ae0886c1c6274943e6f99d70816d162273d9c[m
Author: KentBeck <kent@threeriversinstitute.org>
Date:   Tue Sep 22 19:32:01 2009 -0700

    Signed-off-by: KentBeck <kent@threeriversinstitute.org>

[33mcommit 2e63af604c9487b9e8acbe002cf9a27230d1d7a0[m
Author: alanharder <alan.harder@sun.com>
Date:   Fri Aug 28 15:24:22 2009 +0800

    Fix @SuiteClasses example in javadoc
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 75614895426a8c121cdb7ddc193d7eba8eac6630[m
Author: alanharder <alan.harder@sun.com>
Date:   Fri Aug 28 15:14:50 2009 +0800

    Fix @SuiteClasses example in javadoc
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit bf01cb023bf18d9c3ff3439886d62d5bb34d49ac[m
Author: watisdit <waldodelport@gmail.com>
Date:   Sat Aug 1 01:41:13 2009 +0800

    Fixes sourceForge bug:
    When assertEquals(Object expected, Object actual) is failed, it outputs:
    java.lang.AssertionError: expected:<XXX> but was:<YYY>.
    assertNull(Object) could use the same message: expected:<null> but
    was:<YYY>.
    
    Signed-off-by: dsaff <david@saff.net>

[33mcommit a268686d96bfbb328e02b363c3f0f72da54f9fc6[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu Aug 20 10:30:12 2009 -0400

    checkpoint

[33mcommit 7e74bfd60ca879d78db96915ce1d8db341db2279[m
Author: David Saff <saff@redredrobot.local>
Date:   Fri Jul 31 16:48:27 2009 -0400

    Here's what categories would look like

[33mcommit a8629da96207e1ce71ead9ba9f85bc324f09bcab[m[33m ([m[1;33mtag: r4.7[m[33m)[m
Author: David Saff <saff@new-host-4.home>
Date:   Mon Jul 27 22:16:50 2009 -0400

    4.7 final

[33mcommit 23ffc6baf5768057e366e183e53f4dfa86fbb005[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 20 23:35:01 2009 -0400

    Updated version to RC1

[33mcommit df85817595e97082eaf8d6c95e2c269b86afff20[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 20 22:34:15 2009 -0400

    org.junit is javadoced except internal and experimental

[33mcommit cc24890c002286ca583518c471b16d143a69a62a[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 20 22:23:33 2009 -0400

    org.junit.runner is javadoced

[33mcommit b0b1c80075abf53597839e6bb430804b17d5c24a[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 20 22:09:23 2009 -0400

    experimental.results is javadoced

[33mcommit 15815f55d2e9ae567ef8fe0a172f498b87a3a880[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 20 22:01:25 2009 -0400

    Last errors gone from Hamcrest rollback

[33mcommit c618504adee4bc91b3bd7e0ff06be6e1fa9d88cc[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Jul 20 10:41:18 2009 -0400

    Cleaning up compile errors from reverting hamcrest change

[33mcommit 4e2455b1f142bdf8f07383082638718695e51224[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Jul 20 10:35:10 2009 -0400

    Rollback to hamcrest 1.1

[33mcommit 017ce048adbc360fed2e8d7ae55dfbb3dbdc76dc[m
Author: David Saff <saff@redredrobot.local>
Date:   Fri Jul 17 17:30:24 2009 -0400

    Re-deleted interceptor classes

[33mcommit 3a6ea36c0aa70282b36b464b6ec5c310a26ddd9a[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu Jul 16 13:47:08 2009 -0400

    Setting version

[33mcommit 44959ec2e4e167ed84b760fb12d291de68fee535[m
Author: David Saff <saff@redredrobot.home>
Date:   Wed Jul 15 22:44:28 2009 -0400

    Created HTML version of 4.7 release notes

[33mcommit d2da6a55bca4582c9a469f568df472a00e90ddf4[m
Merge: 99a84a54 c8657376
Author: David Saff <saff@redredrobot.home>
Date:   Wed Jul 15 22:25:24 2009 -0400

    merged

[33mcommit 99a84a542f2ac532a8425fa0a77884902b1c01b0[m
Author: David Saff <saff@redredrobot.home>
Date:   Wed Jul 15 22:17:25 2009 -0400

    org.junit.Rule, org.junit.Rules

[33mcommit 97afc5e205e1c6ac0f5a9aefabed92d58d88ab81[m
Author: David Saff <saff@redredrobot.home>
Date:   Wed Jul 15 22:12:32 2009 -0400

    No more Interceptors.  Everything is rules

[33mcommit a1813f62876a6c7227ec5c866b621e01cda79664[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jul 7 23:58:33 2009 -0400

    Done with interceptor javadoc

[33mcommit 82169027cce65df0e48f1b0824f6aad308ea8f13[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jul 7 23:34:31 2009 -0400

    Fix javadoc warnings

[33mcommit c8657376d5706cb7cf9e357a152d1263d71fa82d[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jul 7 11:50:23 2009 +0800

    Fixing Interceptor->Rule name changes
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 54917b88aab026dabb4541276ed875117c1e1faa[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jul 7 11:50:14 2009 +0800

    Fixing Interceptor->Rule name changes
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 734ab5187c068599352e5fdc7374c1334d484fef[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jul 7 10:01:56 2009 +0800

    StatementInterceptor takes Object target
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 7a0a6839fe3ae4076cc72a0586e2dbe4b1bc995f[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jul 7 09:44:02 2009 +0800

    FailureList isn't public
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 303f74183714223503216efa037373bfb04bfe1a[m
Author: David Saff <saff@redredrobot.local>
Date:   Fri Jul 3 05:24:29 2009 +0800

    Finished Max javadoc
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit d8da2f699a89857292e5e5b92945b2fe3c0a039a[m
Author: David Saff <saff@dhcp-172-31-204-113.cam.corp.google.com>
Date:   Thu Jul 2 01:43:53 2009 +0800

    Getting started on Interceptors javadoc
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 003f66a2e928691100fbe719d7253b5213e99698[m
Author: David Saff <saff@redredrobot.home>
Date:   Wed Jul 1 11:19:05 2009 +0800

    FrameworkField TODO deletion
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit dee8a47af11dd88139f4d46a1ebee7fc613e367e[m
Author: David Saff <saff@redredrobot.home>
Date:   Wed Jul 1 10:55:03 2009 +0800

    Better extension point for adding interceptors
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 9218455d51cd94b21b4536af793dd4c4c6820bf7[m
Author: David Saff <saff@redredrobot.home>
Date:   Wed Jul 1 10:30:54 2009 +0800

    TODO cleanup
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit dc5b58961ab0edd69e5457b122a5ed9185ecd3ec[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Jun 16 13:33:36 2009 +0800

    Clean up TODOs in ComparisonCriteria and subclasses
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 24466485d2dfb58818ac3abf222558a230cbf4cb[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Jun 16 13:29:46 2009 +0800

    Clean up exceptions in readHistory
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit c1fb11d4e5280cda98c84a910545703b15b1cf67[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Jun 16 13:25:14 2009 +0800

    TODO clean-up
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 58723f03198f62f079cd242f7110a94713a5a90b[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Jun 16 13:24:01 2009 +0800

    Move emptySuite method to Suite
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit b4a19d903c5ec7e5ddad0776e8f611338b58be08[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Jun 16 13:18:42 2009 +0800

    Clean up TODO's, including unnecessary exception catch in max
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 23cee0d142da2296c7a1dad7129da784ad9eb3f7[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Jun 16 13:12:10 2009 +0800

    Advance version, and beef up ErrorCollector with checkThat and checkPasses
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 573ae79e0a1802e1875203d0f30ba3f41afadbc6[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 6 23:50:23 2009 -0400

    Fixing Interceptor->Rule name changes

[33mcommit 409a8e06c9f2ec5aa0d9db8a3d413f394c290f6d[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 6 23:50:14 2009 -0400

    Fixing Interceptor->Rule name changes

[33mcommit 8e313a1e58a56694c0441b2fa60974fa8e1bfe31[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 6 22:01:56 2009 -0400

    StatementInterceptor takes Object target

[33mcommit 4b549360e08dac944ee34b7c7bf1a95b41f72f35[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Jul 6 21:44:02 2009 -0400

    FailureList isn't public

[33mcommit 5501ad5d546427b228b208da15cec997e0b13cc8[m
Author: David Saff <saff@redredrobot.local>
Date:   Thu Jul 2 17:24:29 2009 -0400

    Finished Max javadoc

[33mcommit 223b34b516467bcd9cb7ebc7f49549f2e7362dca[m
Author: David Saff <saff@dhcp-172-31-204-113.cam.corp.google.com>
Date:   Wed Jul 1 13:43:53 2009 -0400

    Getting started on Interceptors javadoc

[33mcommit fc7acc64dbbf5c28ef4bd3b142e35922d6294428[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jun 30 23:19:05 2009 -0400

    FrameworkField TODO deletion

[33mcommit e4c7fac80cac937faf413e3ddd58e0fd091bd367[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jun 30 22:55:03 2009 -0400

    Better extension point for adding interceptors

[33mcommit cb1d4dfd390718002349f2cbb456ec9ea769ff2b[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Jun 30 22:30:54 2009 -0400

    TODO cleanup

[33mcommit 8088946a72634d8d6f91db157f4cbe9a2931d4ea[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Jun 15 22:33:36 2009 -0700

    Clean up TODOs in ComparisonCriteria and subclasses

[33mcommit fea583afc60dfdd67dec3349f0e0203d6cb3a69f[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Jun 15 22:29:46 2009 -0700

    Clean up exceptions in readHistory

[33mcommit be06ab8bfe4991ce64d4dae0655833b060362cda[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Jun 15 22:25:14 2009 -0700

    TODO clean-up

[33mcommit b2ebdc0a3e15d90fe695953fd334408ec1afad77[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Jun 15 22:24:01 2009 -0700

    Move emptySuite method to Suite

[33mcommit e9e9b31a483fc562af4ebf5c59e7c89a8ef83459[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Jun 15 22:18:42 2009 -0700

    Clean up TODO's, including unnecessary exception catch in max

[33mcommit 50b77b1f3108aa77af0906162d552e513936c322[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Jun 15 22:12:10 2009 -0700

    Advance version, and beef up ErrorCollector with checkThat and checkPasses

[33mcommit 077d4657cce12a38d4f34266fc62c190b28235a9[m
Author: David Saff <saff@new-host-3.home>
Date:   Thu Jun 4 12:52:28 2009 +0800

    Added Verifier and ErrorCollector
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 11258fcfd07dd63754fbea374bbba59ea82bc685[m
Author: David Saff <saff@new-host-3.home>
Date:   Thu Jun 4 00:52:28 2009 -0400

    Added Verifier and ErrorCollector

[33mcommit cd6096839b5036f7c44e58ec4264de05535eea6a[m
Merge: 20dd0741 2e9a239f
Author: David Saff <saff@new-host-3.home>
Date:   Thu Jun 4 00:11:15 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 20dd0741fca1009e5f641cd0fd1f319459ceeed0[m
Author: David Saff <saff@new-host-3.home>
Date:   Thu Jun 4 00:09:23 2009 -0400

    Added TemporaryFile and ExternalResource interceptors

[33mcommit 2e9a239f419fa60779b5f1ab191561108e1fe3d4[m
Author: David Saff <saff@dhcp-172-31-204-188.cam.corp.google.com>
Date:   Wed Jun 3 03:47:20 2009 +0800

    ExpectedException allows multiple exceptions
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 7c6809f47fde700f345ded8faaff468dc2d53c08[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Jun 2 04:57:41 2009 +0800

    ExpectedException allows multiple exceptions
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit a423117429dc71bf3068eeae38c6443672beda7f[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Jun 2 04:37:05 2009 +0800

    ExpectedException drastically simplified
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 9ee2808155657ebfa5f6dd27791d7350da0ecfeb[m
Merge: a402014d 3f05aac1
Author: David Saff <saff@dhcp-172-31-204-188.cam.corp.google.com>
Date:   Tue Jun 2 15:54:23 2009 -0400

    merged

[33mcommit a402014d7d4fb320442a73b1e7e151c6bb037899[m
Author: David Saff <saff@dhcp-172-31-204-188.cam.corp.google.com>
Date:   Tue Jun 2 15:47:20 2009 -0400

    ExpectedException allows multiple exceptions

[33mcommit 3f05aac1da5851a1957c3c9ca46148464e5fd513[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Jun 2 03:41:04 2009 +0800

    Note that this Closes gh-1
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit c9e0f1a3a519bdab2d71b48635a9cc7df3cff3fa[m
Author: David Saff <saff@dhcp-172-31-204-188.cam.corp.google.com>
Date:   Mon Jun 1 23:08:41 2009 +0800

    JUnitMatchers.matches creates any type
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit a01928138beb41a189dc1fa43f92942b39393cbb[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Jun 1 16:57:41 2009 -0400

    ExpectedException allows multiple exceptions

[33mcommit d5af0e46c1cd912ef0932ce868517b1e8335531e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Jun 1 16:37:05 2009 -0400

    ExpectedException drastically simplified

[33mcommit 275d17729f7e8ef81711bf3c6fcb150ae2109a21[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Jun 1 15:41:04 2009 -0400

    Note that this Closes gh-1

[33mcommit 0b57f033a94caca38ab1369b117baa1589d7d6d3[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Jun 1 14:43:37 2009 -0400

    Minor updates to assertThat and isAnyOf

[33mcommit 89c38cee73bdcc7505da15d7e5de60cdf45a6c0e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Jun 1 13:13:17 2009 -0400

    Improved documentation of new matchers

[33mcommit 3762b9a6f23454691ad4d61000b148a00edaeace[m
Author: David Saff <saff@dhcp-172-31-204-188.cam.corp.google.com>
Date:   Mon Jun 1 11:08:41 2009 -0400

    JUnitMatchers.matches creates any type

[33mcommit 323e55fbc5dbf8d977b23220fa2316cbfceaeb6b[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 23:57:14 2009 +0800

    Fixed warnings
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 79b7c3e8f1d725460212c659524b9bbf5d8a1461[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 23:56:22 2009 +0800

    Hamcrest 1.2 documented in release notes
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit a5aa7cf7d61162947504060c9d3b6d4db6c073cf[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 23:20:30 2009 +0800

    I think this is the end of hamcrest generics
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 505f7705d932002881b530829f4750e9438a963e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 22:39:33 2009 +0800

    Better tests of both
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 8a9c52df0ef4c0667a3a54bd4c6387c149577c2e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 21:57:31 2009 +0800

    Undeprectated JUnitMatchers.either and .both, with different typing, and created JUnitMatchers.matches
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 96635b8788e3d089450c2791dd2f11100244d9e1[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 21:19:05 2009 +0800

    Needed to mostly compile
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 68e573bb82a183201a9e91d12746cacc061c48bc[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 11:57:14 2009 -0400

    Fixed warnings

[33mcommit 9164fdee10603ebdb2b4a7d78ab00046fa3ad37f[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 11:56:22 2009 -0400

    Hamcrest 1.2 documented in release notes

[33mcommit 67c31453db464a17bd907a8b4ccfb9103ef946f0[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 11:20:30 2009 -0400

    I think this is the end of hamcrest generics

[33mcommit e3f50a17c8c6fb7a33bd8a7afb36235b22422346[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 10:39:33 2009 -0400

    Better tests of both

[33mcommit 7dd6711cb9e552cee8091893d4085fdc3f9996b0[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 09:57:31 2009 -0400

    Undeprectated JUnitMatchers.either and .both, with different typing, and created JUnitMatchers.matches

[33mcommit fd925dc6b23c4fa68de2eab06dc162c4f06ff224[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 29 09:19:05 2009 -0400

    Needed to mostly compile

[33mcommit 2ad9d09e743b55cc5c165ea29ec24fe61c32945a[m
Merge: e35fb32e 52e61a55
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 27 14:05:18 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 52e61a55e8ffcaab2586ea8fec28e4b01336cd30[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu May 28 01:57:07 2009 +0800

    Upgraded to Hamcrest 1.2
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 695ae54ef17fc658734119b5378b19ff754a9951[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 27 23:25:56 2009 +0800

    Updated version
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit e35fb32e07a4cfe69dd86024a79d9cb3b9132e55[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 27 13:57:07 2009 -0400

    Upgraded to Hamcrest 1.2

[33mcommit 7ca2c7d2e052b99526415113b8d5dcc513e7de07[m
Merge: 618d9ac9 26a9910d
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 27 11:27:06 2009 -0400

    merged

[33mcommit 618d9ac96993540d11078fc963af9e9b4d479943[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 27 11:25:56 2009 -0400

    Updated version

[33mcommit 26a9910d4df6899107d78f77795f4aba2eadde12[m
Author: David Saff <saff@new-host-2.home>
Date:   Wed May 27 12:19:49 2009 +0800

    ExpectedException Interceptor added
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit fb7e47081b37842a814e9f35013b9b12a33b3fc3[m
Author: David Saff <saff@new-host-2.home>
Date:   Wed May 27 10:55:58 2009 +0800

    No Interceptors class, interceptors turned on by default
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 5261a76c3014edc93f568ac76e8012d59dc2c831[m
Author: David Saff <saff@new-host-2.home>
Date:   Wed May 27 10:27:24 2009 +0800

    Using getAnnotatedFields in Interceptors, now correctly
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 5ccb8e7c1189ac4a248dc2aa2852d1a760937466[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 26 10:03:53 2009 +0800

    All tests pass
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 610b38e6c9753ab01b8aef093d2fcaeabe3a7a32[m
Author: David Saff <saff@new-host-2.home>
Date:   Wed May 27 11:15:10 2009 +0800

    Updated release notes
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 798b5549a8a7df9357176d8e67982bf8686fdd51[m
Author: David Saff <saff@new-host-2.home>
Date:   Wed May 27 10:12:24 2009 +0800

    Remove throws from TestWatchman.starting
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 356a069f8cbbad2a368fdbc6ceee4e94200e7140[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 26 09:51:47 2009 +0800

    Getting there with FrameworkField, but checking in before everything works, to demo squeezing
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit b5573b70809bed76a0397bb5bb196b6b2144d3d4[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 13 23:23:02 2009 +0800

    ParallelComputer doesn't have to assume BlockJUnit4Runner anymore
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 96fd024b563859eee75b68b071cb736026c47ea1[m
Author: David Saff <saff@new-host-3.home>
Date:   Tue May 12 11:49:06 2009 +0800

    Updated version
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 26fa0a4207e21f058d220c84f8195ee25943400c[m
Author: David Saff <saff@new-host-2.home>
Date:   Wed May 27 00:19:49 2009 -0400

    ExpectedException Interceptor added

[33mcommit f67bd3c32191c77fc7cde6cf1fbb4ac851c89ce0[m
Author: David Saff <saff@new-host-2.home>
Date:   Tue May 26 23:15:10 2009 -0400

    Updated release notes

[33mcommit e6769d4009db8030661815965e2e22829a4619ff[m
Author: David Saff <saff@new-host-2.home>
Date:   Tue May 26 22:55:58 2009 -0400

    No Interceptors class, interceptors turned on by default

[33mcommit 1e54b68d2fe7c4238993b360c7be6fbb05d30528[m
Author: David Saff <saff@new-host-2.home>
Date:   Tue May 26 22:27:24 2009 -0400

    Using getAnnotatedFields in Interceptors, now correctly

[33mcommit 38f920506399298a945ed38e08e18e1dafb62520[m
Author: David Saff <saff@new-host-2.home>
Date:   Tue May 26 22:12:24 2009 -0400

    Remove throws from TestWatchman.starting

[33mcommit 85d42f2ef0ce94448700c90ed99372def66dc2a2[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon May 25 22:03:53 2009 -0400

    All tests pass

[33mcommit bbcb8f416628bc168a2ed8353a30b4e9647abf6f[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon May 25 21:51:47 2009 -0400

    Getting there with FrameworkField, but checking in before everything works, to demo squeezing

[33mcommit a2bf97027581ae4da52a3905642cae3331623808[m
Merge: b3ee106f 5eaf0fb0
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 13 11:23:09 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit b3ee106f9f95e1f4093adb505e13a163df77f341[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 13 11:23:02 2009 -0400

    ParallelComputer doesn't have to assume BlockJUnit4Runner anymore

[33mcommit b8640d1e9e642aa6b2f1a2e416fdbbb87f7a4476[m
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 23:49:06 2009 -0400

    Updated version

[33mcommit 5eaf0fb09857851e8cf6740d2896705bd2014318[m
Author: David Saff <saff@new-host-3.home>
Date:   Tue May 12 11:45:01 2009 +0800

    Added TestName Interceptor
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 7b94e3de5c8eab7e25c8b3be0e822ae6d4175bf0[m
Author: David Saff <saff@new-host-3.home>
Date:   Tue May 12 11:29:36 2009 +0800

    don't wrap statements for before/after/etc unless there's something to wrap them with.
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 507e7b1799801409104fa5054b3bc6ac3fe82e7d[m
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 23:45:01 2009 -0400

    Added TestName Interceptor

[33mcommit 198df01b7b288e57e222a33c74f8ff98bf518d93[m
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 23:29:36 2009 -0400

    don't wrap statements for before/after/etc unless there's something to wrap them with.

[33mcommit 956f86fa4c406a923d5366b5906e3431e9d0717d[m
Merge: 95779101 f2594e30
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 23:17:38 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit f2594e308d784f88715bdc7b9b245b998e947538[m
Author: David Saff <saff@new-host-3.home>
Date:   Tue May 12 09:38:59 2009 +0800

    Another TODO bites the dust
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 3bcf273c37bc31e1f13986b02977cadbcd2b5a76[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 12 04:50:19 2009 +0800

    Removing more TODOs
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit ac837502e0a755850e80bb9feea2071707b5446d[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 12 04:46:15 2009 +0800

    Reduced some visibility where possible
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 13bda470bfa1fe989ce80d616fb096af1b937146[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 12 04:26:51 2009 +0800

    Make ParallelComputer more beautiful by creating a Decorator
    extension point in ParentRunner
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 8435a2a04e66546490344a028052f648b5f9f213[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 12 04:42:24 2009 +0800

    Removed useless TODOs
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit d8267a16675047b6b4ba5a94a951fdde2fb70768[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 8 22:35:06 2009 +0800

    Added parallel tests to AllTests
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 9577910167086e05873565b7ed4df6de4815d3bc[m
Merge: b737131b ff2ff917
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 23:03:26 2009 -0400

    Merge branch 'master' of git@github.com:dsaff/junit

[33mcommit b737131b847c53bb4f1cf6dbf86f586008550eba[m
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 22:54:41 2009 -0400

    Pairing approach to removing duplication from ParallelComputer,
    creating RunnerInterceptor.

[33mcommit ff2ff9176dfb18887a8e6e463e49b00c6f3acc5f[m
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 21:38:59 2009 -0400

    Another TODO bites the dust

[33mcommit 5ea6b12278b14ea490066d28185497b023b4dfae[m
Merge: dafc0ed8 79b869ef
Author: David Saff <saff@new-host-3.home>
Date:   Mon May 11 21:38:33 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit dafc0ed884bbbdba1a7934712c57ed41bc6c9777[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 11 16:50:19 2009 -0400

    Removing more TODOs

[33mcommit 73e8fa8187a58a3ad4c96e6d2f010f8d77d723cb[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 11 16:46:15 2009 -0400

    Reduced some visibility where possible

[33mcommit d596c6a0049235c066df055b4a776e8d90991af1[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 11 16:42:24 2009 -0400

    Removed useless TODOs

[33mcommit ad5971c88fb501f007cf1a75200349fb7cbb4b25[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 11 16:26:51 2009 -0400

    Make ParallelComputer more beautiful by creating a Decorator
    extension point in ParentRunner

[33mcommit 4d6f0702dae590809b808230f027a60aa0a4a345[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 8 10:35:06 2009 -0400

    Added parallel tests to AllTests

[33mcommit 79b869efc27dd878bd0c3d73b2a55b4852b309f2[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 6 23:31:30 2009 +0800

    Ignore test for gump (need better long-term solution)
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit cc84ff1bd98382b0e9483e3be83aef8f02e912ac[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 6 23:23:23 2009 +0800

    starting can throw Exception
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 441ab8503a4f09a670ac6e7686ace1485583164d[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 6 13:40:40 2009 -0400

    starting() can throw exception

[33mcommit 9f1840115193b7d1bc4bc0b2715d762d317689dd[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 6 11:31:30 2009 -0400

    Ignore test for gump (need better long-term solution)

[33mcommit 0a6893304bec85084f963dfd40c1a830685b61a9[m
Merge: 2527d9ad 23865799
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 6 11:27:37 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit
    
    Conflicts:
            src/main/java/org/junit/experimental/interceptor/TestWatchman.java

[33mcommit 2527d9ad37a797530dbd4b1095d3ddc3f5a7ae19[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed May 6 11:23:23 2009 -0400

    starting can throw Exception

[33mcommit 23865799f82e1de0d053f1bc787ae5a95b329f27[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 5 12:06:57 2009 +0800

    Removed duplication by creating a delegating subclass of ParentRunner,
    and introducing temporary ugly public API.
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit b94a710a62228a54b13309c634047ae3ce77d58e[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 5 11:57:10 2009 +0800

    Updated release notes, and added "Oh, yeah, wow" to the test.
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 6aa1fb428b0b6de82ca6288863ce7571b0563017[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 5 11:50:04 2009 +0800

    Added a Timeout Interceptor, to apply the same timeout to all methods.
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 796e723caa0a1f75bb7b48b2454bea633fbf8e4e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 5 04:38:26 2009 +0800

    Removed duplication in ParallelComputer.  Cure worse than disease?
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit d678dd30f6311e05ce0b082ec846a4a2c641acc7[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 5 00:13:17 2009 -0400

    Revert "Signed-off-by: Jon Kean <jkean@palantirtech.com>"
    
    This reverts commit b3a0b515edda3874b4fe4271944934ca11a568e6.

[33mcommit b3a0b515edda3874b4fe4271944934ca11a568e6[m
Author: Jon Kean <jkean@palantirtech.com>
Date:   Tue May 5 02:23:11 2009 +0800

    Signed-off-by: Jon Kean <jkean@palantirtech.com>
    
    Signed-off-by: dsaff <david@saff.net>

[33mcommit 8b87e991c603ac14265fc3dd66b089c2395cb701[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 5 00:06:57 2009 -0400

    Removed duplication by creating a delegating subclass of ParentRunner,
    and introducing temporary ugly public API.

[33mcommit 4f9eee58782d30d873b3739095c8c2e01f59fc7a[m
Merge: 219beb35 b77d9de8
Author: David Saff <saff@redredrobot.home>
Date:   Tue May 5 00:02:34 2009 -0400

    No change

[33mcommit 219beb35ca3cfe068b45a8e4ee28989a526387dd[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon May 4 23:57:10 2009 -0400

    Updated release notes, and added "Oh, yeah, wow" to the test.

[33mcommit e5a301651a359ed4ce2c1dd81a4a73868b4dddcc[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon May 4 23:50:04 2009 -0400

    Added a Timeout Interceptor, to apply the same timeout to all methods.

[33mcommit b77d9de8e3e2894fc6120c95a8e7766c38912d49[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 5 01:40:44 2009 +0800

    Don't edit Version.java manually.  Really.  I mean it.
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 31cbeb4f3c141295d0b0703ccff2b2ffbee780f4[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 5 03:47:26 2009 +0800

    arrayEquals is a better name than internalArrayEquals
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit fdc9cd5ea91f5ae1d7e5991abadd1b3f989626f7[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 5 01:52:47 2009 +0800

    Incorporated James Abbley's patch for ParallelComputer
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 30a17cfdc3e58d7b0bc9723f86098c2a06a77c23[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 5 01:38:04 2009 +0800

    Linked to blog from release notes
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit f5a10efbbdffec756bc055710ebf6b8169e9dbca[m
Author: James Abley <jabley@miq-jabley.(none)>
Date:   Fri May 1 22:42:43 2009 +0800

    remove timeout and try reducing duplication between ParallelSuite and ParallelRunner
    
    Signed-off-by: dsaff <david@saff.net>
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 000826663788e16d0670edf5b8967f82b9ca551e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 5 01:27:34 2009 +0800

    Updated version number
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit bf5199cc461adbd9a17d5a29e16a31e4642de25d[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue May 5 01:14:30 2009 +0800

    Removed unnecessary @SuppressWarnings
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 44e2ed65cd904fc03aecd3b0763856009294bdec[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri May 1 02:52:12 2009 +0800

    Finishing the work of ComparisonCriteria
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 025ccd132c3f3189bcb7f05c2a189ae403e2c1d6[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu Apr 30 04:02:24 2009 +0800

    Fix assertArrayEquals(float[], float[]) javadoc
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 3d08ecc6a661f09520559637794c9a161db90f3d[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 16:38:26 2009 -0400

    Removed duplication in ParallelComputer.  Cure worse than disease?

[33mcommit 0dc3de7fbcf997ca8465ed9e7793a0b4f730121b[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 15:47:26 2009 -0400

    arrayEquals is a better name than internalArrayEquals

[33mcommit d0f619bfbdf4595db3e30fa7a27d7a6fdd08723a[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 15:46:46 2009 -0400

    Reverted needless MaxHistory changes

[33mcommit 4eec09ae1d6eb5cecfa82e222f0e7d085e96f0ba[m
Merge: 11f0abd0 8b507d79
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 15:30:55 2009 -0400

    merged

[33mcommit 8b507d7908603bf6e36ea9e60921b76eb5923d0f[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 13:52:47 2009 -0400

    Incorporated James Abbley's patch for ParallelComputer

[33mcommit 015c02e04d940a4bffc6a8e687751c4610db19b8[m
Author: James Abley <jabley@miq-jabley.(none)>
Date:   Fri May 1 22:42:43 2009 +0800

    remove timeout and try reducing duplication between ParallelSuite and ParallelRunner
    
    Signed-off-by: dsaff <david@saff.net>

[33mcommit a24d1ce6ad8b83c58e0ecb1c9a17897d540d5bd5[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 13:40:44 2009 -0400

    Don't edit Version.java manually.  Really.  I mean it.

[33mcommit 764c97d22e5a71fbfd6e545e6db34b277629da0a[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 13:38:04 2009 -0400

    Linked to blog from release notes

[33mcommit 233f889671ab856e45e62e266d34b50d395c185c[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 13:27:34 2009 -0400

    Updated version number

[33mcommit 82dd2b3cf88647a5167e336fc97ea2b2b72432be[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon May 4 13:14:30 2009 -0400

    Removed unnecessary @SuppressWarnings

[33mcommit 821cf4a882e6b1d596a687dea0a51517dc06e014[m
Merge: 70a58066 e13f8cdc
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu Apr 30 14:52:28 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 11f0abd09655be84d94d3013cf0c46f8239369e6[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu Apr 30 14:52:12 2009 -0400

    Finishing the work of ComparisonCriteria

[33mcommit e13f8cdc5c3394962fc6eddde235980181b3bb8c[m
Author: KentBeck <kent@threeriversinstitute.org>
Date:   Thu Apr 30 08:39:29 2009 -0700

    Signed-off-by: KentBeck <kent@threeriversinstitute.org>

[33mcommit 19869a298da02326cba2951dcc7c1a84fae91b89[m
Merge: c7874453 6c942aec
Author: KentBeck <kent@threeriversinstitute.org>
Date:   Wed Apr 29 14:34:48 2009 -0700

    Merge branch 'HEAD' of git://github.com/KentBeck/junit.git
    
    Conflicts:
            src/main/java/junit/runner/Version.java

[33mcommit c7874453182cde8e7b38cf3ce356d16d3d1dcde8[m
Author: KentBeck <kent@threeriversinstitute.org>
Date:   Wed Apr 29 14:19:36 2009 -0700

    Fixed error message for malformed JUnit 3.8 test.
    
    Signed-off-by: KentBeck <kent@threeriversinstitute.org>

[33mcommit 3d6e99e93d7ba7360bfed1c213114648e8c70849[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed Apr 29 16:02:52 2009 -0400

    Removed commented-out code

[33mcommit 2b9ba5540f5051239a9fde65f195cefc532efadc[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed Apr 29 16:02:24 2009 -0400

    Fix assertArrayEquals(float[], float[]) javadoc

[33mcommit 70a58066e7751524b13068ce740316df4b9c3f91[m
Merge: 28d40d93 6c942aec
Author: David Saff <saff@new-host-4.home>
Date:   Tue Apr 28 23:34:27 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 6c942aec322e039d2c6fc82c4d5c1a63cf6fb244[m
Author: David Saff <saff@new-host-4.home>
Date:   Wed Apr 29 11:29:50 2009 +0800

    Interceptors and Watchmen, because we're just that cool.
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit e18695898f7260f0f6ed99eaf26c0f0bcabeb863[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed Apr 29 04:17:15 2009 +0800

    Added note of fixed bug
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit c04b0d3a007c96d53a0c64c110f71ac0d0d53771[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 04:02:51 2009 +0800

    Fixed AfterClass javadoc
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 3e06324ab77f9b9f7dbfe60b41324bcea06f7824[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed Apr 29 04:09:42 2009 +0800

    updated snapshot version
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 34e4e5ac519422cfa317713271be716c1897d7d1[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 03:08:34 2009 +0800

    Fix javadoc on Parameterized
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit ac7a1f1b2cb3ed60f87cc081fe61017f8bb8e93e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed Apr 29 04:12:32 2009 +0800

    SuiteClasses is inherited
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 597c3eb4755bb261c17141e4edb84eab1387cbcc[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 03:59:44 2009 +0800

    upload_docs.sh updated to include homepage
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 503a3b0d79d395ae5c05fee40cd4de2b927b7808[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 03:35:42 2009 +0800

    We're 4.7 now
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit b23559962c4183e056e2bd70427d04e1f9a38d65[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 03:35:15 2009 +0800

    jars target should depend on build
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 3989f9278ea1a04d4058c526b374be6d1e35fa6c[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 03:35:01 2009 +0800

    Checking in the homepage text
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit e281409e679311c479e16097b6156cf30b71b02b[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 03:04:35 2009 +0800

    documentation updates
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 28d40d93420cacdb4d420b04475bafdc7d89d922[m
Author: David Saff <saff@new-host-4.home>
Date:   Tue Apr 28 23:29:50 2009 -0400

    Interceptors and Watchmen, because we're just that cool.

[33mcommit 3e7f1f74fff77f46d292e6b7828c020d67b148ae[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 28 16:17:15 2009 -0400

    Added note of fixed bug

[33mcommit f5fa4205f74a090e0c5e567a1deb64edd5f530d7[m
Merge: c8059f09 fd1111ed
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 28 16:13:16 2009 -0400

    Merge branch 'inherit-suiteclasses'

[33mcommit fd1111ed097e0db6602c2f388d41c7ad817c7f9f[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 28 16:12:32 2009 -0400

    SuiteClasses is inherited

[33mcommit c8059f0991a7c85561b851ee8feb3319bd1c11aa[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 28 16:09:42 2009 -0400

    updated snapshot version

[33mcommit d32a0713128faedd61c48a119a5efbf72a0181d3[m
Merge: 71ad9474 c7fe9c82
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 28 15:56:21 2009 -0400

    merged with remote release notes

[33mcommit 71ad947417f7e99014a7ffa1b431bbc2f15bfa36[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 16:02:51 2009 -0400

    Fixed AfterClass javadoc

[33mcommit 743e46647a6c4cc7d697b164c9617d0f624610af[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 15:59:44 2009 -0400

    upload_docs.sh updated to include homepage

[33mcommit e5fa2ab32ad21b37d91a4f4173dc31a9bf3717a6[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 15:35:42 2009 -0400

    We're 4.7 now

[33mcommit a06b6ba49437ac4ee2b46dbc6b57283f27d757cf[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 15:35:15 2009 -0400

    jars target should depend on build

[33mcommit 5725c6951ede434a40e0dd0313334a4f82d60d77[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 15:35:01 2009 -0400

    Checking in the homepage text

[33mcommit c7fe9c82850d54468bfbc900a418873d4d5107fe[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 02:57:58 2009 +0800

    link to JDK javadoc from our javadoc
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit c7bae8537a3080fe5048ffc8bf8d7fe5c8844a93[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 21 02:29:00 2009 +0800

    Include timeout change in release notes
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit f9168cb066a53dc63f7346f6bb3d25a46d0ccbed[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 15:08:34 2009 -0400

    Fix javadoc on Parameterized

[33mcommit 231238f2677c4c7130e5f44522b852ed6346132e[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 15:04:35 2009 -0400

    documentation updates

[33mcommit f97081d6c157bc2ad16aca631b77f2fa3088648d[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 14:57:58 2009 -0400

    link to JDK javadoc from our javadoc

[33mcommit aeab84eabbdb6a30afc44a9e81064c56ae149e6f[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 14:29:00 2009 -0400

    Include timeout change in release notes

[33mcommit b923fa8afb7ad79452656f1005899feec32c3634[m
Merge: 17087303 912e94ca
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 14:01:22 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 17087303ee4f7f5c801e0d652a7e51a9f5d68297[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 20 13:57:25 2009 -0400

    Fixed bug 1812200

[33mcommit 912e94cafbc1f7074c39dbbd286a487c7ebe7ace[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Sat Apr 18 03:27:26 2009 +0800

    Holy cow, vanilla threads work
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit c1642724c8525c3cd158df2054dd89283e77149c[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu Apr 16 20:44:48 2009 +0800

    Remove a period, pursuant to bug 2768146
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 0cb606ac2c77a4460bec1efa22a1c8e8d473b11c[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 14 21:02:31 2009 +0800

    Removed inane javadoc comment
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 480b98e7f1bce46382e47fc30db2ef1a98a58b66[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Fri Apr 17 15:27:26 2009 -0400

    Holy cow, vanilla threads work

[33mcommit 60f3a3f3ba53ca3e44f13acb2d200a7c92a84551[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Thu Apr 16 08:44:48 2009 -0400

    Remove a period, pursuant to bug 2768146

[33mcommit b5e9885854a0d594451800b9127eb50afb645433[m[33m ([m[1;33mtag: r4.6[m[33m)[m
Author: David Saff <saff@new-host-3.home>
Date:   Mon Apr 13 22:07:14 2009 -0400

    Revert "Added AfterParameterize and BeforeParameterize to allow methods to run before and after parameterized tests"
    
    This reverts commit 6abd4e65122ac6e3b56cf53a9a7540b61e4e687e.
    
    This should be considered in a branch, not ready for master
    on this yet.

[33mcommit b5e956d7b8cea2486d667b0f3d047343db0cafb7[m
Merge: ef929258 469dcc78
Author: David Saff <saff@new-host-3.home>
Date:   Mon Apr 13 21:46:58 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 469dcc78a7610916ffa29e2cefc21f80430df8c0[m
Author: David Saff <saff@new-host-3.home>
Date:   Tue Apr 14 09:43:51 2009 +0800

    Updated to 4.6 final
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit ef929258653948dc6d6b2d188a9360fe48c7cb87[m
Author: David Saff <saff@new-host-3.home>
Date:   Mon Apr 13 21:43:51 2009 -0400

    Updated to 4.6 final

[33mcommit af500af73843463ded2f181bcd32408c401e4c57[m
Merge: e980c593 1bb1eafe
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 13 15:47:00 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 1bb1eafe3a6880ba9c691b2e7478599f225add60[m
Author: David Saff <saff@new-host-2.home>
Date:   Tue Apr 7 10:42:56 2009 +0800

    The version really is 4.6-RC1
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit e980c593c0e79da110fc27389918445e1a8023e0[m
Author: David Saff <saff@new-host-2.home>
Date:   Mon Apr 6 22:42:56 2009 -0400

    The version really is 4.6-RC1

[33mcommit 70986438ca98df55899e293a72931fc12bb737d9[m
Author: David Saff <saff@new-host-2.home>
Date:   Tue Apr 7 10:31:18 2009 +0800

    Last changes with Kent.
    
    Added fixed bugs to Release notes.
    Updated version number.
    Updated README.html
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 06d515560f8c0e2f080e5382c555613035e8cf28[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Apr 7 01:17:11 2009 +0800

    Final release notes changes
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 68e5927ecf49bb21c396c423c3669ada15b7fe1b[m
Author: David Saff <saff@new-host-2.home>
Date:   Mon Apr 6 22:31:18 2009 -0400

    Last changes with Kent.
    
    Added fixed bugs to Release notes.
    Updated version number.
    Updated README.html

[33mcommit 6abd4e65122ac6e3b56cf53a9a7540b61e4e687e[m
Author: Mike Forsberg <bigmike@io.com>
Date:   Mon Mar 23 04:13:50 2009 +0800

    Added AfterParameterize and BeforeParameterize to allow methods to run before and after parameterized tests
    
    Signed-off-by: dsaff <david@saff.net>

[33mcommit 5ace93399cbfd049dc7ea16b6392cca5246b7e4f[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 6 13:17:11 2009 -0400

    Final release notes changes

[33mcommit c62a7f4296366e291b3ec6872b42e64f5e1de780[m
Merge: f3c21145 8e20f520
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Mon Apr 6 13:16:18 2009 -0400

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 8e20f520565dc52f5599eafd54b603043bfecbaf[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Mar 10 22:44:22 2009 +0800

    Finished release notes, I think
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit f3c211455b9e09be36e4bf7ccc499fbdd35a527a[m
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Tue Mar 10 10:44:22 2009 -0400

    Finished release notes, I think

[33mcommit 95da39292ea777ec3ff99be2bb23d46f704f683a[m
Author: David Saff <saff@new-host.home>
Date:   Tue Mar 10 11:10:54 2009 +0800

    Got rid of unnecessary forget() method
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 9a2e993c544a2cd1a0b93c9f59340910f51366b4[m
Author: David Saff <saff@new-host.home>
Date:   Mon Mar 9 23:10:54 2009 -0400

    Got rid of unnecessary forget() method

[33mcommit d6c79c0f626afd12506b6a5a672cdec84683c3ca[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Mar 3 12:49:40 2009 +0800

    Some test edits for release notes, but especially experimenting with MaxComputerTest: can MaxCore be written in terms of the Computer abstraction?
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 6664bd272c43bcdf00f9ef9ce6f2d73af82036b1[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Feb 24 13:00:44 2009 +0800

    Experiment in filtering JUnit 3 warnings through to the command line
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 474df716f498aa2695c422cceb3e46cad999e972[m
Author: David Saff <saff@redredrobot.home>
Date:   Mon Mar 2 23:49:40 2009 -0500

    Some test edits for release notes, but especially experimenting with MaxComputerTest: can MaxCore be written in terms of the Computer abstraction?

[33mcommit 6eb76c8b08c738823546fe5b935b653951fc773e[m
Author: David Saff <saff@redredrobot.home>
Date:   Tue Feb 24 00:00:44 2009 -0500

    Experiment in filtering JUnit 3 warnings through to the command line

[33mcommit 894bfd3caea6a70f15aaf317bc031af6b6a588c9[m
Merge: f2ec67ec 28fb91ac
Author: David Saff <saff@dhcp-172-31-197-71.cam.corp.google.com>
Date:   Wed Feb 11 09:48:16 2009 -0500

    Merge branch 'master' of git://github.com/KentBeck/junit

[33mcommit 28fb91ac246e4d8a557358ec9f89d9cb80473100[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Feb 10 12:32:55 2009 +0800

    Added Mark Shapiro to acknowledgements
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit f2ec67ec7a48b82d59779f8cfdf497de6e315383[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Feb 9 23:32:55 2009 -0500

    Added Mark Shapiro to acknowledgements

[33mcommit a20a0181362d470fbfcb1dff865dfb321fe3b8b1[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Feb 10 12:17:49 2009 +0800

    Removed misguided fIgnoredDuringRun flag
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit 37c590a7174da5b260d13b694898df4ecdb9ac6e[m
Author: David Saff <saff@redredrobot.local>
Date:   Tue Feb 10 12:14:33 2009 +0800

    Added .gitignore
    
    Signed-off-by: Kent Beck <kent@threeriversinstitute.org>

[33mcommit b0c9945e21e66efcc947b3859f947185a87c59a9[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Feb 9 23:17:49 2009 -0500

    Removed misguided fIgnoredDuringRun flag

[33mcommit b58da5a388357ab124feefa5280e2116ac31de53[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Feb 9 23:14:33 2009 -0500

    Added .gitignore

[33mcommit 72b5cecd5639886f6abf54d842d3abb03fb1e803[m
Author: David Saff <saff@redredrobot.local>
Date:   Mon Feb 2 22:47:49 2009 -0500

    testing README change

[33mcommit 82672bf48672d7f9d60aabdbc61cb7b3e7e3807b[m
Merge: d9c81356 b00f4c6d
Author: David Saff <saff@redredrobot.local>
Date:   Mon Feb 2 22:37:43 2009 -0500

    Merge branch 'master' of git@github.com:KentBeck/junit into master_import

[33mcommit d9c81356e3a2fbb165c71b32d63d0cc39a1bd861[m
Author: kbeck <kbeck>
Date:   Wed Jan 28 04:18:38 2009 +0000

    Preparing for 4.6

[33mcommit b00f4c6dae1520ad3f116fe6f6b2671ea2a14b1b[m
Author: unknown <Kent Beck@.(none)>
Date:   Mon Jan 12 19:49:02 2009 -0800

    first commit, again

[33mcommit 34dd9f4e2bebbcf694dcb855a29edff9243a10d3[m
Author: kbeck <kbeck>
Date:   Tue Jan 6 04:02:00 2009 +0000

    Fixed 2191102 and 2196462.

[33mcommit 90bf3119a6326671cc467386036302cc6040f752[m
Author: kbeck <kbeck>
Date:   Sat Dec 20 15:36:48 2008 +0000

    Description seems to be heading towards Composite. Added "getTestName"

[33mcommit c12af8eb53b2464efff959b633f4c189caf2f1e7[m
Author: kbeck <kbeck>
Date:   Sat Nov 22 00:36:54 2008 +0000

    A diff got inserted somehow.

[33mcommit 421ab330509a53302f56b209595f55b23bfdfc0e[m
Author: dsaff <dsaff>
Date:   Tue Nov 18 22:52:31 2008 +0000

    Max now runs the right number of tests

[33mcommit 41cbbf7e228b8f7908e672a79863ff970316b120[m
Author: dsaff <dsaff>
Date:   Tue Nov 18 22:51:29 2008 +0000

    Asserting on arrays of doubles

[33mcommit fa6483264ce2530585b374c276c2266d0d0c4ef0[m
Author: kbeck <kbeck>
Date:   Thu Nov 13 19:32:26 2008 +0000

    closing in on 3.8 multiple run defect

[33mcommit b294a12beffb7952de6aef3198d47f7cd08486d7[m
Author: kbeck <kbeck>
Date:   Thu Nov 13 19:30:29 2008 +0000

    *** empty log message ***

[33mcommit 8d9ac8d65204fe8cd7e1d9146f123a461952bae9[m
Author: kbeck <kbeck>
Date:   Wed Nov 12 22:17:56 2008 +0000

    Zeroing in on the JUnitMax error where it runs JUnit 3.8 tests multiple times.

[33mcommit 85578d48f6459a05665329faa9b52a861e9142cb[m
Author: kbeck <kbeck>
Date:   Thu Nov 6 20:15:27 2008 +0000

    Now sorting tests globally

[33mcommit d6662fcc06ec7b07c696eb703c47d3731e4e11c7[m
Author: kbeck <kbeck>
Date:   Fri Oct 31 00:24:00 2008 +0000

    Oops, checked in some scaffolding and temporary changes

[33mcommit fab8f0da7e35f0436b80bf5cfe799882b2cb4db5[m
Author: kbeck <kbeck>
Date:   Tue Oct 28 20:03:43 2008 +0000

    Eclipse isn't quite calling Max just yet. Keep sinning until it does.

[33mcommit df48b66e73c740acb15f065eb7a4bad433930891[m
Author: kbeck <kbeck>
Date:   Tue Oct 28 19:50:31 2008 +0000

    AllTests passes, but Eclipse doesn't cal JUnitCore, so first attempt at dogfooding failed.

[33mcommit ce7bda3346278aab6ccebedcd5b8c8d4ab27ba02[m
Author: kbeck <kbeck>
Date:   Tue Oct 28 19:17:15 2008 +0000

    Persistence for MaxCore

[33mcommit 451ca12156d5704809a1feff78a10a9451cd2023[m
Author: kbeck <kbeck>
Date:   Thu Oct 23 19:38:08 2008 +0000

    Cleaned up MaxCore and the tests

[33mcommit 378e17964a4188bad9b3d966207a2f682072148e[m
Author: kbeck <kbeck>
Date:   Thu Oct 23 18:59:35 2008 +0000

    Better test sorting in MaxCore

[33mcommit a72b0dbef4b01e8ad0b832d9a579dd7fabd5a071[m
Author: kbeck <kbeck>
Date:   Fri Oct 17 22:35:23 2008 +0000

    Clean up parallel execution naming.

[33mcommit 143c96470aec3221f76f9dcc8042fb36cc88b852[m
Author: dsaff <dsaff>
Date:   Wed Sep 24 13:25:23 2008 +0000

    Update version to 4.6-SNAPSHOT

[33mcommit cec4a6baf600b8dee3d1318c242a67b56874288a[m
Author: kbeck <kbeck>
Date:   Tue Sep 9 20:57:17 2008 +0000

    *** empty log message ***

[33mcommit 432e3e27df0b072f3bab066cd33214913f4c7f32[m
Author: kbeck <kbeck>
Date:   Tue Sep 9 20:46:02 2008 +0000

    Run methods and classes in parallel

[33mcommit 8c91ac2cb9da29edf75ae22dba1e1aaa60275176[m
Author: kbeck <kbeck>
Date:   Fri Sep 5 21:00:16 2008 +0000

    Experimenting with parallel execution

[33mcommit 3a961b7fd1e7a85b5e293f9e32ea6ced3f361f69[m
Author: dsaff <dsaff>
Date:   Tue Aug 19 18:54:34 2008 +0000

    Indicate when deprecation is likely to end

[33mcommit 8760e505d64d69534073f28bdf47886d20dbca4e[m
Author: dsaff <dsaff>
Date:   Tue Aug 19 18:46:27 2008 +0000

    build.xml should be in junit*.zip

[33mcommit 68f1e62d7df34bd2781cc7df583db9ba6fea497c[m
Author: kbeck <kbeck>
Date:   Tue Aug 19 17:59:50 2008 +0000

    Beginnings of data gathering

[33mcommit c4e7dfe1ea2722c7d8a29373744e9a4a4f2f9c66[m
Author: dsaff <dsaff>
Date:   Mon Aug 18 14:54:26 2008 +0000

    Remove unused imports

[33mcommit 829ca4d37671b20df3f2451915aa91c804b7de97[m
Author: dsaff <dsaff>
Date:   Mon Aug 18 14:52:14 2008 +0000

    Indicated that Before guarantees no particular order.

[33mcommit c80a254082e624d1e8f32e62cccb16a2c035298f[m
Author: dsaff <dsaff>
Date:   Mon Aug 18 14:32:56 2008 +0000

    Add command-line running info to cookbook

[33mcommit 5a7824ae153484cb898c3850aa71b2cadf6f3fcc[m
Author: dsaff <dsaff>
Date:   Mon Aug 11 20:10:58 2008 +0000

    Non-static BeforeClass test has better name

[33mcommit 1c1a6f8020c615c9d723f79a8405e57f1c66ea1e[m
Author: dsaff <dsaff>
Date:   Mon Aug 11 20:08:18 2008 +0000

    Tagged old version as 4.5.  Docs now say 4.6, and doc'ed a few missing classes

[33mcommit 336d9460c7709ccd426c72431836a1a82374cf7c[m
Author: dsaff <dsaff>
Date:   Fri Aug 8 18:59:26 2008 +0000

    Ignore build folders

[33mcommit 7e77e49c40afb951ae5a5cbdf75ebb4a478e2bb7[m
Author: dsaff <dsaff>
Date:   Fri Aug 8 18:59:13 2008 +0000

    Updated README.html

[33mcommit c68a2ac49fac68864fb3e6f3b1a124446bbaaa41[m
Author: dsaff <dsaff>
Date:   Fri Aug 8 18:06:37 2008 +0000

    This is 4.5.

[33mcommit 71ce2b015df78f167e4681b097cadc2e0e6655e2[m
Author: dsaff <dsaff>
Date:   Wed Aug 6 13:29:14 2008 +0000

    JUnit4 runner as a pointer to the current default

[33mcommit a36466e1aed381e2973e5550969474a043879611[m
Author: kbeck <kbeck>
Date:   Tue Aug 5 17:15:45 2008 +0000

    Cleaned up formatting

[33mcommit 3dd6b9fca5ccbd02a4d1cb5c5b3c921e369662a0[m
Author: dsaff <dsaff>
Date:   Fri Aug 1 15:28:05 2008 +0000

    validation errors in JUnit4ClassRunner are again reported.

[33mcommit c5ece65fe537092b9552f0efcca8a1e144ca4182[m
Author: dsaff <dsaff>
Date:   Fri Aug 1 13:53:42 2008 +0000

    Fixed a javadoc on BlockJUnit4ClassRunner

[33mcommit 0b65be5d4d0aaf5867ed414765c0c48ceeb00e18[m
Author: kbeck <kbeck>
Date:   Thu Jul 31 23:44:19 2008 +0000

    Fixed AfterClass javadoc and added a ValidationTest that appears to already be working in spite of complaints to the contrary.

[33mcommit ca6d91f41d566b21b643b013e843732e1315652f[m
Author: dsaff <dsaff>
Date:   Thu Jul 31 14:57:25 2008 +0000

    Failing assumptions can be listened for.

[33mcommit b5bf89de628350e58514421150839318c1338c55[m
Author: dsaff <dsaff>
Date:   Thu Jul 31 14:29:15 2008 +0000

    Javadoc on FrameworkMethod augmented

[33mcommit 50b9c949876189d8c4871471ec346988e4ccae06[m
Author: dsaff <dsaff>
Date:   Thu Jul 31 14:28:18 2008 +0000

    Better validation in Theories

[33mcommit 095d3f8df0708f98d41f5894a892388b6985c44f[m
Author: dsaff <dsaff>
Date:   Thu Jul 31 14:20:56 2008 +0000

    Validation of constructors that can take parameters, commenting about an exception
    that should never occur

[33mcommit a07f1be1bc7eb7f7d757da48d0a3110452cca4d4[m
Author: dsaff <dsaff>
Date:   Thu Jul 31 13:59:58 2008 +0000

    Cleaned up implementation of Parameterized to better use its Suite subclass, and better validate the test class

[33mcommit 94d454a32857d85e08600e38728418863478501c[m
Author: dsaff <dsaff>
Date:   Thu Jul 31 13:59:26 2008 +0000

    Remove bogus TODO

[33mcommit dd9ee989f3f322c7c6793f95a73b28f3cc11c11e[m
Author: dsaff <dsaff>
Date:   Thu Jul 31 13:59:08 2008 +0000

    Better name for validateConstructor

[33mcommit b0b34427e9e644868f2b63d40d0556c35e818a63[m
Author: dsaff <dsaff>
Date:   Wed Jul 30 20:39:27 2008 +0000

    Make sure constructor has no args

[33mcommit 30a039854fd7f8cda135222054b247c158b91fa7[m
Author: dsaff <dsaff>
Date:   Wed Jul 30 20:28:46 2008 +0000

    All javadoc added

[33mcommit 161229441b7365fa06f0d82e272e15f1f378b315[m
Author: dsaff <dsaff>
Date:   Wed Jul 30 19:29:21 2008 +0000

    Updated release notes to include TestClass and ParentRunner

[33mcommit 5d957024be0d1b181879d48b7915b3b8aad8f5d5[m
Author: dsaff <dsaff>
Date:   Wed Jul 30 19:23:24 2008 +0000

    TestClass documented, validation logic pushed, almost entirely, to BlockJUnit4ClassRunner, and some holes noted.

[33mcommit e07e59eb9d24f6e4fa85dd99f311c1feca6ea983[m
Author: dsaff <dsaff>
Date:   Wed Jul 30 02:56:52 2008 +0000

    ErrorReportingRunner is not a ParentRunner.  This means that all ParentRunners validate, for sure, during construction.

[33mcommit 1fcd990f60518c941a44bae2596392021614a20b[m
Author: kbeck <kbeck>
Date:   Tue Jul 29 18:55:58 2008 +0000

    Javadoc and various cleanup

[33mcommit 979e8abbe974e8847668f5887403da78a6165ebc[m
Author: dsaff <dsaff>
Date:   Tue Jul 29 17:12:00 2008 +0000

    Only one ParentRunner constructor

[33mcommit 9a789a40295a91844e4e16afee93d5ff7218951a[m
Author: dsaff <dsaff>
Date:   Tue Jul 29 17:11:20 2008 +0000

    Publishing TestClass and doc'ing ParentRunner

[33mcommit 123432f737b8d6e54937cf9f2e939b1e8f882e76[m
Author: dsaff <dsaff>
Date:   Wed Jul 23 20:39:42 2008 +0000

    TestClass and ParentRunner presently published proudly.  TestMethod and TestElement die deserved deaths.

[33mcommit 6aea93112f3508c955b1ccf8f8909fc375caab3d[m
Author: dsaff <dsaff>
Date:   Wed Jul 23 20:33:09 2008 +0000

    Acknowleding Daniel Brolund

[33mcommit 9df5017f33de5a1af5f6994928e58ee308bd865e[m
Author: dsaff <dsaff>
Date:   Wed Jul 23 17:15:25 2008 +0000

    Patched in Daniel Brolund's build.xml patch

[33mcommit 28124c61f58334eb6dc8e4c024fc346509d03108[m
Author: kbeck <kbeck>
Date:   Wed Jul 23 16:04:02 2008 +0000

    *** empty log message ***

[33mcommit 7a3e99635d7ffcc4d730f27835eeaeb082003199[m
Author: dsaff <dsaff>
Date:   Wed Jul 23 15:59:22 2008 +0000

    Draft javadoc for review

[33mcommit 5cac7b8bbe41253d3122c434b3887a2be577017e[m
Author: dsaff <dsaff>
Date:   Wed Jul 23 15:08:18 2008 +0000

    Switched classpath to Execution Environment J2SE 1.5, in hopes all developers will match that.

[33mcommit 0b6e837fbf3a02fd28b4930e12cfcf86801b1d75[m
Author: dsaff <dsaff>
Date:   Tue Jul 22 20:33:24 2008 +0000

    Added 4.5 release notes, and removed two tests

[33mcommit a9815c0f1419e20b6282c3944195083bb38deaa9[m
Author: kbeck <kbeck>
Date:   Tue Jul 22 17:50:44 2008 +0000

    4.5 release candidate minus javadoc and release notes (surprise, surprise)

[33mcommit c96215c5d025336d8ab1d7d2ab57daee20869cea[m
Author: kbeck <kbeck>
Date:   Tue Jul 22 17:43:13 2008 +0000

    Preparing for 4.5 release. Published InitializationError and FrameworkMethod. Reverted failed assumptions so they work as in 4.4, counted as passing (later we'll give them their own category or typed events with callback).

[33mcommit 8e3f361443ddf8bca21c3db661c75d374fe78dba[m
Author: kbeck <kbeck>
Date:   Wed Jul 16 00:21:15 2008 +0000

    Refactored to eliminate Notifier and its subclasses. You don't pull your weight around here and you're history.

[33mcommit 412519b20d4cb96466c03466fa003068e9fb5eca[m
Author: kbeck <kbeck>
Date:   Thu Jul 10 20:50:01 2008 +0000

    Added FilterableTest to AllTests

[33mcommit 29f117914afa33c2538479c785f349daa787bf60[m
Author: kbeck <kbeck>
Date:   Thu Jul 10 20:48:29 2008 +0000

    Refinement of BlockJUnit4ClassRunner to make it easier to override.

[33mcommit e2033a1894451c2b90ab4c43ff1eed0aad3f14ce[m
Author: dsaff <dsaff>
Date:   Thu Jul 10 20:06:38 2008 +0000

    Remove caching filtered and sorted results, which led to spooky ordering dependencies in ParentRunner

[33mcommit d8b6eb74e0e3466d66c9ff75e55f087c09a959b1[m
Author: kbeck <kbeck>
Date:   Thu Jul 10 01:02:06 2008 +0000

    Cleaned up ParentRunner in search of the elusive filter bug

[33mcommit 0b1337a4536d95480ef94b27310cde48a552d634[m
Author: kbeck <kbeck>
Date:   Wed Jul 9 21:01:39 2008 +0000

    Added failed test for filtering

[33mcommit 96d7dd609920deb1336cf85dc6c9a3a0d5e30d15[m
Author: kbeck <kbeck>
Date:   Tue Jul 1 18:29:54 2008 +0000

    Reorganizing visibility to publish BlockJUnit4ClassRunner and friends. Not sure if this is done. Check with Structure 101?

[33mcommit eb2750d861ac1ecf2dbd0425e457fe833468a169[m
Author: kbeck <kbeck>
Date:   Tue Jul 1 17:01:37 2008 +0000

    Added Johannes Link's test for running subclasses of Suite

[33mcommit 8c61443793e4c2e90a4056ee528c3880febb53d2[m
Author: dsaff <dsaff>
Date:   Thu Jun 26 15:20:39 2008 +0000

    Move deprecated classes back where they used to be.

[33mcommit 3ef1b3ac5d45cd0023afc18739aadf4f15b9d80c[m
Author: kbeck <kbeck>
Date:   Thu Jun 26 13:55:23 2008 +0000

    Turned off javadoc and deprecated warnings and deleted java.hprof.txt.

[33mcommit 0c8452532da8f8e9d5ccc737f3cc7e95f65df160[m
Author: kbeck <kbeck>
Date:   Thu Jun 26 13:39:13 2008 +0000

    Added protected Suite(Class<?> klass, Class<?>[] suiteClasses) to support ClasspathSuite. This still needs a test.

[33mcommit 9bd1be07aa38d7fa2de048845f7b13458c9420d7[m
Author: dsaff <dsaff>
Date:   Tue Jun 24 16:34:19 2008 +0000

    Parallelize Statement builder methods in BlockJUnit4ClassRunner

[33mcommit 078e45bd31a9920e00633ad6ce658e22529304f2[m
Author: kbeck <kbeck>
Date:   Mon Jun 16 17:52:02 2008 +0000

    Brought in old JUnit4ClassRunner for compatibility. Renamed new JUnit4ClassRunner to BlockJUnit4ClassRunner.

[33mcommit f49fb25b6fbffcc7a68b28824ed3856ffa9d6fdd[m
Author: dsaff <dsaff>
Date:   Tue Jun 10 19:50:14 2008 +0000

    Javadoc for JUnitMatchers, final missing javadoc

[33mcommit 5c61adf678d0f736846e95cf7062b9102a51afa9[m
Author: kbeck <kbeck>
Date:   Tue Jun 10 18:08:34 2008 +0000

    Half done doc'ing JUnitMatchers

[33mcommit 23ce44aec824a38dc117fee49a79d52d9cd83522[m
Author: dsaff <dsaff>
Date:   Tue Jun 10 17:47:29 2008 +0000

    Finish javadoc

[33mcommit 99b37a20e91078d3f0cc641e4dbfc4ad4cac1e4e[m
Author: kbeck <kbeck>
Date:   Tue Jun 10 17:45:57 2008 +0000

    *** empty log message ***

[33mcommit 65ff7563cc41bc7158d05e69ea0e1ec7bc0f6bd5[m
Author: dsaff <dsaff>
Date:   Mon Jun 9 15:19:20 2008 +0000

    Finishing javadoc for org.junit.runner.*

[33mcommit f691c8f29653e75a8bac5e7bec1861e948966978[m
Author: dsaff <dsaff>
Date:   Tue Jun 3 17:14:15 2008 +0000

    Javadocs for three more classes

[33mcommit 3a7fe9fb7714a890a307ff6d7695e70548ebc457[m
Author: dsaff <dsaff>
Date:   Tue Jun 3 16:16:52 2008 +0000

    Added profile task to build.xml

[33mcommit 217bb1bf62aafc466cb5ee794983e589513650fb[m
Author: dsaff <dsaff>
Date:   Thu May 29 13:32:06 2008 +0000

    org.junit base package all javadoc'ed

[33mcommit 56dcf5286f5bbb90532f39d407e12e4255670fb9[m
Author: dsaff <dsaff>
Date:   Thu May 29 13:31:06 2008 +0000

    Remove Assume.fail, which is uncalled

[33mcommit 6b182284c1a0452cf175852f2c808b08167c2f72[m
Author: dsaff <dsaff>
Date:   Thu May 29 13:30:13 2008 +0000

    If there are no data points that pass the assumption, the test fails.

[33mcommit ef32d036d0ff96328f622942514ca73b5f69556d[m
Author: kbeck <kbeck>
Date:   Tue May 13 18:03:51 2008 +0000

    Adding javadoc. Move Enclosed to experimental.

[33mcommit b5a8d4e8e57d494ddebf3d3792ff883cee7d83f6[m
Author: dsaff <dsaff>
Date:   Mon May 12 15:48:18 2008 +0000

    Fixed test

[33mcommit 98555e6c5b77b59017eeaa6b54f65c1717c16b72[m
Author: dsaff <dsaff>
Date:   Mon May 12 15:48:00 2008 +0000

    JavaDoc cleanup

[33mcommit ae725a017f8193955719e373352caa20278ddee4[m
Author: dsaff <dsaff>
Date:   Mon May 12 15:46:26 2008 +0000

    Javadoc cleanup

[33mcommit b521f9fbcc141e0a0925eaf5a0fd7f5285fa527c[m
Author: kbeck <kbeck>
Date:   Wed May 7 00:32:09 2008 +0000

    Cleaned up javadoc and ant build problems.

[33mcommit d61e2885bfae9add429f42d9ce0d9bc8c3ef72b0[m
Author: kbeck <kbeck>
Date:   Tue May 6 16:42:11 2008 +0000

    Adding javadoc and tweaking visibility.

[33mcommit d9c908b9aab5f610e2f42aba1863ce25e36423f2[m
Author: dsaff <dsaff>
Date:   Mon Apr 7 17:59:21 2008 +0000

    API clean-up before 4.5 release

[33mcommit 37a611801fbea6ecc9b6356d9616e761c8b59b91[m
Author: dsaff <dsaff>
Date:   Thu Mar 20 22:53:19 2008 +0000

    Theory failures show names of sources, not values

[33mcommit 67e3edf20613b1278f4be05353b31b5129e21882[m
Author: dsaff <dsaff>
Date:   Wed Mar 19 02:57:33 2008 +0000

    Broke out runner construction into a list of RunnerBuilders

[33mcommit 6ff2381af213bf699e62244315debec66b373d81[m
Author: kbeck <kbeck>
Date:   Thu Feb 14 21:37:51 2008 +0000

    Found a final home for runBefores() and runAfters()

[33mcommit 54af3dfcf6f61839cb2d531a28fc0395cdcdb790[m
Author: kbeck <kbeck>
Date:   Tue Feb 5 22:16:01 2008 +0000

    Cleaned up TestElement

[33mcommit a90f320bbb189f07ff2fca81a9b5e4e0c8381978[m
Author: kbeck <kbeck>
Date:   Tue Feb 5 22:06:47 2008 +0000

    Fixed 1857283, assertEquals(null, "null)

[33mcommit 47114275293f28be0f1cb9606a43ef1fe3173cb3[m
Author: dsaff <dsaff>
Date:   Fri Jan 25 16:51:18 2008 +0000

    Added assumption to TheoriesPerformanceTest, to prevent continuous integration from breaking on other boxes.

[33mcommit 5042f695491027730cca2918616399d869de3973[m
Author: dsaff <dsaff>
Date:   Fri Jan 25 14:11:31 2008 +0000

    By passing TestClass to AllMembersSupplier, we can reuse the annotation parsing already supplied, and improve performance

[33mcommit 752727de89a6bab731f49597c7ec3858ebb3e0a3[m
Author: dsaff <dsaff>
Date:   Fri Jan 25 13:51:07 2008 +0000

    Exceptions are expensive to create if we don't plan to throw them (the stack trace is always filled in)

[33mcommit 4f405a49eba4822fbdda0c9415d2dc4fd82fb14b[m
Author: dsaff <dsaff>
Date:   Fri Jan 25 13:49:59 2008 +0000

    By passing TestClass to AllMembersSupplier, we can reuse the annotation parsing already supplied, and improve performance

[33mcommit cde32fb62ad8f5a05d700ce3189e131fa51739cb[m
Author: dsaff <dsaff>
Date:   Mon Jan 21 20:35:00 2008 +0000

    Theories are a lot faster, by caching the @Before and @After methods and sharing them between all Theory method invocations.

[33mcommit 9f52d1c93e0f8246ab5430007107e0c2599563dd[m
Author: dsaff <dsaff>
Date:   Wed Jan 16 15:38:11 2008 +0000

    Simplified addToAnnotationList

[33mcommit 74fe2493715dfe5b7d408411ce5d63a17398db48[m
Author: dsaff <dsaff>
Date:   Thu Jan 10 05:22:13 2008 +0000

    Profiling a JUnit 4.4 suite shows that getAnnotatedMethods accounts for at least 13% of running time (all running time, including user test code!)  This is a fix

[33mcommit af9634a3656bcd9c3988692c32381d0772077584[m
Author: dsaff <dsaff>
Date:   Thu Jan 10 04:59:22 2008 +0000

    Organized classes and methods for reporting ignored and invalid tests

[33mcommit c732aa178a822671d3de88e5ece05f9bf464172b[m
Author: dsaff <dsaff>
Date:   Thu Jan 10 04:52:51 2008 +0000

    Remove unnecessary code, and document Suite constructors

[33mcommit 497ebf11c284bcc2b32eecc4a063589b4f17d250[m
Author: dsaff <dsaff>
Date:   Thu Jan 10 04:26:23 2008 +0000

    Rename testFailedAssumption to testInvalidAssumption, and update documentation

[33mcommit d148bce8682505082a3cc634acbd36ac13a10c9a[m
Author: dsaff <dsaff>
Date:   Thu Jan 10 04:12:53 2008 +0000

    A SuiteBuilder can be explicitly passed to a Runner class that needs one in its constructor.  This eliminates the ugly global constant SuiteBuilder in Suite, and breaks the cyclic dependency between runners and requests

[33mcommit a916d4133c7e394130d7953da427aae9917ab92c[m
Author: dsaff <dsaff>
Date:   Thu Jan 10 03:32:15 2008 +0000

    Invalid assumptions, failed tests, and ignored tests now all print similarly

[33mcommit 4dcf3a499652b3c089d91e209c6f01313115ff76[m
Author: dsaff <dsaff>
Date:   Fri Jan 4 18:31:45 2008 +0000

    Found untested line

[33mcommit 1fb24143dc38d0b00f7e7b13b23e6619cc216f9b[m
Author: dsaff <dsaff>
Date:   Sun Dec 30 22:02:05 2007 +0000

    Assumption failures and ignore are different events

[33mcommit 58d1b6209b82451ff54f443bd265eef96135bca0[m
Author: dsaff <dsaff>
Date:   Fri Dec 28 19:48:32 2007 +0000

    Remove unnecessary @SuppressWarnings

[33mcommit e37e11647893739777a7b4739822def1aa996ba3[m
Author: dsaff <dsaff>
Date:   Fri Dec 28 19:48:09 2007 +0000

    Added TODO to remove cyclic dependency

[33mcommit 18299dc8f8aaae0e64345795b2884eb7f42ad460[m
Author: dsaff <dsaff>
Date:   Fri Dec 28 19:47:37 2007 +0000

    Assignments depends on TestClass, rather than directly on java.lang.Class

[33mcommit 248bdb8248d80ac57d8b485ef73e758103a0c312[m
Author: dsaff <dsaff>
Date:   Sun Dec 16 02:46:45 2007 +0000

    Slight organization in Suite

[33mcommit b067fc9b47471e5b3561b545cb63ea1ec892922d[m
Author: dsaff <dsaff>
Date:   Sun Dec 16 02:29:10 2007 +0000

    Pushed down call to getParametersList to the lowest point possible

[33mcommit 7ceaea00ee1af6168d737b785460a803d6f3c50c[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 07:57:28 2007 +0000

    Remove some anemic Request implementations

[33mcommit b8008562db24f9189b90dd0e3864a381681d527f[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 07:45:29 2007 +0000

    Sort members of Suite

[33mcommit 09fcafc04e07b3481ef60159de2d6ae3464b98ac[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 07:44:57 2007 +0000

    Make ParentRunner.fTestClass private

[33mcommit 5af049cac0c976c586d955607fa459aacb778d3c[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 07:43:48 2007 +0000

    Remove unnecessary comments

[33mcommit 5e4f8e7fb82919d992887fca1741bb04ef1c8f4a[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 07:43:13 2007 +0000

    New Suite implementation makes ClassesRequest crazy simple

[33mcommit 9c8d59d9869280a698c3f3a119eb69f0e897c94b[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 06:35:44 2007 +0000

    Remove CompositeRunner, which has nothing to add to Suite

[33mcommit 95bd62b2ffd80394d1a17e9078a4d79478423030[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 06:35:04 2007 +0000

    Start separating the idea of failed assumptions from ignored tests

[33mcommit e727dd6b1cb2caa1699da3b2df7625c9554adc36[m
Author: dsaff <dsaff>
Date:   Thu Dec 13 06:34:26 2007 +0000

    Remove unnecessary SuppressWarnings

[33mcommit 163b0fe01b06f9993a03049c4aecad4ea5d04814[m
Author: kbeck <kbeck>
Date:   Tue Dec 11 20:40:13 2007 +0000

    Removed unnecessary null check

[33mcommit 478900d7d7af563a3b75b6ca9d7d44e37e2aff5b[m
Author: kbeck <kbeck>
Date:   Mon Dec 10 19:31:40 2007 +0000

    Steps towards eliminating CompositeRunner

[33mcommit 65e9f226760647823a2d4b08bc4d2317ab62fc7d[m
Author: dsaff <dsaff>
Date:   Mon Dec 10 18:57:12 2007 +0000

    Added TODOs to finish 4.5

[33mcommit 490964dabd61e672176a12266cf9314b302f807a[m
Author: dsaff <dsaff>
Date:   Mon Dec 10 18:40:01 2007 +0000

    Removed completed TODOs

[33mcommit 9e4dcfe471791bb3aada80810bcbaf6c8b9cd068[m
Author: dsaff <dsaff>
Date:   Mon Dec 10 18:39:41 2007 +0000

    Extracted parent logic into a SuiteBuilder class

[33mcommit 56ac86372fa1ff9b3840ffdbfd30106f10c203a5[m
Author: dsaff <dsaff>
Date:   Mon Dec 10 18:39:11 2007 +0000

    Added TODO about statically ignored tests

[33mcommit 42beed3ad166a9cceefc59f6c79a16844cae0d02[m
Author: dsaff <dsaff>
Date:   Mon Dec 10 18:38:41 2007 +0000

    ParentRunner handles filtering and sorting for all runners, now including CompositeRunner

[33mcommit 8964b10541f840e559a3308a043b64a8c1f6af57[m
Author: dsaff <dsaff>
Date:   Mon Dec 10 18:37:55 2007 +0000

    Removed unnecessary SuppressWarnings

[33mcommit 840b02e455b1da9741ea02160160acd6d63865d2[m
Author: dsaff <dsaff>
Date:   Sat Dec 8 19:49:51 2007 +0000

    FrameworkMethod now obeys object contract

[33mcommit 7fe2a0e69eaa06c445238906739c4d05503973cc[m
Author: dsaff <dsaff>
Date:   Sat Dec 8 19:45:41 2007 +0000

    Remove stale TODO

[33mcommit 1e4a3ba03cca7cfc03b2565952f74d2ae964facc[m
Author: dsaff <dsaff>
Date:   Sat Dec 8 19:36:58 2007 +0000

    A method marked @Theory and @Test should only be executed once

[33mcommit 03411db6286fe1be8e5b549a8affec5de35fa10c[m
Author: dsaff <dsaff>
Date:   Sat Dec 8 19:36:13 2007 +0000

    Remove stale TODO comments

[33mcommit 0fa19baf003c5808831c59f8a839cc871586f30e[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 19:14:40 2007 +0000

    Small runner definition cleanup

[33mcommit 44fabd25eb7d8c5291094b033007c32b7a1b8da2[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 19:06:00 2007 +0000

    Reorganize ParentRunner and children

[33mcommit 2a6d6365c593149da094d7512028a2d008ea6cff[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 19:05:27 2007 +0000

    Use single-arg assumptionFailureException constructor to beautify reporting

[33mcommit ea47086066445ba537d1573fd7458de8875d6c45[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 18:52:01 2007 +0000

    Allow AssumptionFailedExceptions to have a simple, string based reason

[33mcommit 8a8008c96936d468a2f579bcea9a71e965558d57[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 18:44:09 2007 +0000

    Ignored tests should be shown differently in stack trace section of report

[33mcommit da9a91f77d9e3045b2692afb4fe9fc12eeb8a93f[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 18:43:47 2007 +0000

    Remove duplication in test logic

[33mcommit a7c07de664a4562c3ff171102729f06a5f572d9b[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 18:43:03 2007 +0000

    Remove duplication between printing failures and ignorances

[33mcommit 0d6cd750d53486f01f12ddfee8657d94b5940574[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 18:42:28 2007 +0000

    Remove old todo

[33mcommit 5ca9ec43b61e5353296c69a307cd7b71e630b2e0[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 18:28:27 2007 +0000

    Don't need to pass instance in to calculate values

[33mcommit 70fcf98c69eace2e6cc6dc37b54e70fe57c490f1[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 18:27:49 2007 +0000

    Improve description of hasFailureContaining

[33mcommit 4d1d0bb9ee6926b5a85ebc2ad077eb31f94e1181[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 17:53:27 2007 +0000

    if DataPoints annotation present on a field, and looking for Object parameter, interpret as array, not object

[33mcommit 1796fa2ddd8ab6e2551d40b1b1a63cd954837b19[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 17:45:07 2007 +0000

    Suite is again a CompositeRunner

[33mcommit 9ba0d7a6ada9742d3f7a721cfab09c29e80ca39d[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 17:44:39 2007 +0000

    Complain if class has more than one constructor

[33mcommit 23415d78793163c399ec376bed6c72cc86d885e3[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 17:44:01 2007 +0000

    Complete moving filtering and sorting to ParentRunner

[33mcommit 4892e000aa5b890795b5082f636d6623b6f3820d[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:57:39 2007 +0000

    Inline invokeWithActualParameters

[33mcommit 75f789242bd1859cf6798c3c49f45a9216ff553f[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:55:10 2007 +0000

    Removed nascent category implementation

[33mcommit 3a791ec79fff66aebc332fe4e4cbf626e39bd3d3[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:54:31 2007 +0000

    - Organize ParentRunner better

[33mcommit 77ecd2119d3124b72935038effffadf7b98eccd9[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:36:33 2007 +0000

    Properly handles ignore notifications from inside a started/ended block

[33mcommit 647e9ff7881d796ea6b87472e3c1bd40e2e19c76[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:36:05 2007 +0000

    Removed old TODO comment

[33mcommit 4dd7049a053dec125afbfd40ed05a5124d94aa9a[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:35:49 2007 +0000

    Moved TestMethodElement into proper package

[33mcommit f06b01dcd0b9b0be4f0bd62eaf00b5cc3b0f8a65[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:35:00 2007 +0000

    Indicate reason when a class is ignored

[33mcommit 9a5dfd996ab7007994fcf60752441835dbdbb5d0[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:34:18 2007 +0000

    Moved InitializationError into proper package

[33mcommit 2b56dbb49ba6595e54baa0285b76ddaae35f0c33[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:33:31 2007 +0000

    Moved Ignorance into proper package

[33mcommit 81ef67251efba98fd6bb1065e9ab97c102dbcc24[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:32:57 2007 +0000

    No matching parameters is now an assumption failure, not an assertion failure

[33mcommit b52e4af4eb7b26619e1d80537952aed7276766cb[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:31:54 2007 +0000

    Remove

[33mcommit 1e2c9d6451e587981d7be7a1a01dd5f3a722ca4d[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:31:40 2007 +0000

    Added Assume.fail

[33mcommit 79eaab79a64788273989403e259ca9584a9a5254[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 16:04:29 2007 +0000

    Ignore target directory

[33mcommit 8226e3e64a7d4ace29eb08ab6c9fc9d4055f20c9[m
Author: dsaff <dsaff>
Date:   Fri Dec 7 15:43:03 2007 +0000

    - Moved src directory into two directories, similar to a maven layout, to simplify build, and make it easier for maven-familiar developers to find the tests.
    
    - Improved display of ignored tests, so that build results are hopefully not confusing

[33mcommit 804f76fdf00c9f9fcbef58f03bbeda1f80b3ad8e[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:47:09 2007 +0000

    Removed CompositeRunner constructor with just a class

[33mcommit f8a42db55bdb365a111ca0ab2175d804c55002af[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:46:41 2007 +0000

    Pass nullsOk into Assignments constructor (requires further cleanup)

[33mcommit eb095d6d587fac4d1b8693cf4e1bd5146df9902d[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:46:11 2007 +0000

    Test that non-static data points are flagged failures

[33mcommit af8967fa2943deb488c76faaa91ee0a446826ec9[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:45:43 2007 +0000

    Test for failing assumption in constructor

[33mcommit 6b3b9ebab7ffe91bc231ab43521a6844ad030f92[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:45:22 2007 +0000

    ParentRunner includes filtering--noted that we should use it

[33mcommit f94a70c6572e98cddd45d741c83bb7c410b3d109[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:44:49 2007 +0000

    Added getOnlyConstructor API to TestClass, using it here

[33mcommit 2754ea861da92e0d0f25fe9e5678dcb0d6fa3483[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:44:23 2007 +0000

    Added getOnlyConstructor API

[33mcommit 897fa2227e26f221e5efa4f95a805f7ff1ccac5f[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:43:52 2007 +0000

    Now includes filtering

[33mcommit 833a511d59e2cc5314283d5ce27ff6fd6514b459[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:43:29 2007 +0000

    Clean out old TODOs

[33mcommit fc7d4be813c4c89963bb90cd884efc849f334c31[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:42:59 2007 +0000

    Absorb a lot of functionality into ParentRunner

[33mcommit a3e0b1c6cbd770405cb7fdd4291090afc8e49df7[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:42:28 2007 +0000

    Pass nullsOk into constructor (requires further cleanup)

[33mcommit 9423b224d0bafeeabe485e51a7f3080cfac0a368[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:41:50 2007 +0000

    Force DataPoint fields to be public

[33mcommit b9ce87013e5389857956d785d14fc4f3fc2490c3[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:40:56 2007 +0000

    Cleaning up TODOs

[33mcommit 36beacd221a4837af2a6d684b3a4fb79775a5231[m
Author: dsaff <dsaff>
Date:   Wed Dec 5 15:39:56 2007 +0000

    Removed duplication in signatures method

[33mcommit 7ac5c16b8bb598daca92554d776f4085e931b2d3[m
Author: dsaff <dsaff>
Date:   Tue Nov 27 02:10:36 2007 +0000

    Updated documentation to include at least references for our work of the last few weeks

[33mcommit 94ebd93396420bcd03ab99a352e38df822d59f67[m
Author: dsaff <dsaff>
Date:   Tue Nov 27 02:05:39 2007 +0000

    - Assumption failures now cause their tests to be ignored
    - Ignored tests broadcast their reasons
    - TextListener displays reasons for ignored tests
    
    Still some clunkiness (TextListener claims the ignored tests are failures) to be worked out in further releases.
    Since this version has breaking changes, the previous version is tagged as r45_before_failed_assumptions_made_ignored_tests

[33mcommit a6368e40e787e7a23c9f1e58d6a47bf9fa2d0a2c[m
Author: dsaff <dsaff>
Date:   Mon Nov 26 17:07:36 2007 +0000

    Pull classBlock up into ParentRunner

[33mcommit 7ae578fb953b5e4ea969cb435f702d2c5478e43c[m
Author: dsaff <dsaff>
Date:   Mon Nov 26 17:06:52 2007 +0000

    Removed an unnecessary exception catch

[33mcommit 08ee65bccfde21186fb1d1303b36e966c9008c99[m
Author: dsaff <dsaff>
Date:   Wed Nov 21 16:25:21 2007 +0000

    Can now handle any kind of Throwable thrown from FailOnTimeout

[33mcommit 2807ff63d6b408a927fd3dd684a42a2366677657[m
Author: dsaff <dsaff>
Date:   Wed Nov 14 18:44:01 2007 +0000

    Improved error message when parameter-producing method produces wrong types.  In the meantime, increased the number of errors in such situations, since the runner now lazily assumes the parameters are OK until proven otherwise at runtime

[33mcommit 8bed6c9278517d9fb13f274bc5a6ade358a39745[m
Author: dsaff <dsaff>
Date:   Wed Nov 14 18:21:30 2007 +0000

    - Moved InitializationError to ParentRunner, since it was only used by
      subclasses of ParentRunner.
    - Broke up TestMethod into FrameworkMethod (which makes it more clear
      that these methods can also be Before, After, etc.), and
      TestAnnotation (for specific information only available on the @Test
      annotation).
    - Created TestMethodElement to encapsulate the relationship between
      @Test, @Before, and @After.  This class may go away again quickly
    - Updated version in docs to 4.5
    - Included docs about junit-dep jar

[33mcommit 53e85db0bec2e03bf93afc73dced9b4a0b231644[m
Author: dsaff <dsaff>
Date:   Wed Nov 7 19:04:17 2007 +0000

    Simplified Parameterized by making it a CompositeRunner

[33mcommit 0c5906ab0068de4852dc593ebe93356aeea639ca[m
Author: dsaff <dsaff>
Date:   Wed Nov 7 18:28:47 2007 +0000

    Make CompositeRunner into a subclass of ParentRunner
    build.xml produces junit-dep-x.x.jar

[33mcommit 07b834616b9c3ce07af47165c55fe64f93f165f4[m
Author: dsaff <dsaff>
Date:   Mon Nov 5 14:48:31 2007 +0000

    Simplified theories.internal.Assignments

[33mcommit 24a5aad1f49b4decf946f1df701e354a18544132[m
Author: dsaff <dsaff>
Date:   Wed Oct 31 13:57:12 2007 +0000

    Progress on ParentRunner

[33mcommit 1d982e5310d57fe0ea4b63e05f20215ee3add1fe[m
Author: dsaff <dsaff>
Date:   Wed Oct 24 15:20:31 2007 +0000

    Ignore snapshots

[33mcommit 73015005c155a0a7efdfe9edef87a95bb6fcc2de[m
Author: kbeck <kbeck>
Date:   Tue Oct 16 15:36:58 2007 +0000

    Tweaked Theories a bit. It still seems strange that the class runner creates a statement which creates another class runner (or perhaps more class runners?).

[33mcommit 4cb9a65f450efa5f2a42128856c7b56e6d283386[m
Author: dsaff <dsaff>
Date:   Sat Oct 13 04:09:27 2007 +0000

    Fixed a bug in Theories classes with constructor parameters, where the method parameters and constructor parameters were switched

[33mcommit 4e1018a940699a38673b1861977110e6b558afb1[m
Author: kbeck <kbeck>
Date:   Fri Oct 12 19:12:27 2007 +0000

    Now using Statements to run test classes, removing before/after duplication. Also factored out a JUnitSystem object so tests that verify return codes can run with a mock system and so run much faster (almost doubled the speed of the whole suite).

[33mcommit 59b1e2926cdebfd257c6c091ee2bd478d8aa04d2[m
Author: dsaff <dsaff>
Date:   Fri Oct 12 17:27:32 2007 +0000

    Theory classes can take constructor parameters

[33mcommit de43b277b8f2e63051368a36e27a35c5ed0f0e0b[m
Author: kbeck <kbeck>
Date:   Fri Oct 12 16:58:19 2007 +0000

    I renamed Link->Statement and adjusted the names of the other statements according to my preference. These names are negotiable. I also simplified a few flows of control.

[33mcommit 0dbe9eefa369da78ca67bf5487797a8de5b2d631[m
Author: dsaff <dsaff>
Date:   Fri Oct 12 14:49:03 2007 +0000

    Change to Link signature (to be discussed soon by phone)

[33mcommit 0e1c92693e70e52ad9af23ee6180500c74fc9c95[m
Author: dsaff <dsaff>
Date:   Wed Oct 10 17:15:25 2007 +0000

    - Fix potentially bottomless recursion in
      ParameterSignature.findDeepAnnotation
    
    - Simplified chain method, which simplified Theories

[33mcommit f0ef837a40922ac08c608661385abf71732975d3[m
Author: dsaff <dsaff>
Date:   Wed Oct 10 15:57:15 2007 +0000

    Link no longer throws Throwable, but handles exceptions with a FailureListener

[33mcommit a4c68872a91681139d404825c2bb04bd5ba804dd[m
Author: kbeck <kbeck>
Date:   Wed Oct 10 01:57:12 2007 +0000

    Deleted ErrorList

[33mcommit bd8a96dbbfe93f134f75c768e5c1254cff8a9e9f[m
Author: dsaff <dsaff>
Date:   Wed Oct 10 01:17:11 2007 +0000

    - Simplified Theory code by assuming that all datapoints are static
      (every one I've ever written is)
    
    - Removed EachTestNotifier from Assignments (makes the class more
      cohesive, but requires the notifier to get passed around a bunch.
      TODO added to look at this.)
    
    - Extracted AllMembersSupplier, absorbed AssignmentRequest into
      Assignments.  Better cohesion, less coupling
    
    - EachTestNotifier.withNewInstance is no longer needed.  It was a
      nasty little beast and will not be missed.
    
    - Added comment to ErrorList TODO
    
    - Added TestMethod.getTestClass--will probably change in upcoming
      model package revamp anyway

[33mcommit 1350d0562466adbea1a9f8408084acdd005bfc13[m
Author: kbeck <kbeck>
Date:   Tue Oct 9 20:19:08 2007 +0000

    Cleaned up odds and ends.

[33mcommit 4d9c88e37dfed614a1bd1ae2ca2ecc86122aa9f1[m
Author: dsaff <dsaff>
Date:   Tue Oct 9 19:00:41 2007 +0000

    Removed MethodValidator, replaced with ErrorList, which moved to model package with InitializationError

[33mcommit b333208ccfbef77c556a270bd4385586523dcafc[m
Author: dsaff <dsaff>
Date:   Tue Oct 9 18:20:39 2007 +0000

    What was Roadie was actually an EachTestNotifier plus a tacked-on Object target.  These have been divorced: the result is more understandable, but points to some new objects that may want to be created.

[33mcommit 6887479f1b64c5a18f5708ea6905bb59804a9a0f[m
Author: kbeck <kbeck>
Date:   Tue Oct 9 16:25:42 2007 +0000

    Simplified Theories. Factored out ignoring violated assumptions into its own Link.

[33mcommit 2bb6d5de002052680d443065e1c26f59be212e4b[m
Author: dsaff <dsaff>
Date:   Mon Oct 8 21:09:55 2007 +0000

    A couple more quick fixes checked in

[33mcommit 44e7458b19d5cd1900a765a440c96e85b81d25fc[m
Author: dsaff <dsaff>
Date:   Mon Oct 8 21:07:43 2007 +0000

    - Renamed link classes.
      Absolute actions are verbs: IgnoreTest, Invoke.
      ActionModifiers are modifying phrases: ExpectingException, WithTimeout, etc.
    
    - Moved isShadowedBy(List) to TestMethod

[33mcommit 576377b9ad44028dc84c2f8487cfe8dbccb8c252[m
Author: dsaff <dsaff>
Date:   Mon Oct 8 19:40:31 2007 +0000

    - Split links into their own package
    - Combined JUnit4ClassRunner and JUnit4MethodRunner, allowing extensions to be written with a single class
    - Created a separate model class for TestMethod, TestClass, and other runnable Java elements (TODO: still messy separation of concerns there)
    - Absorbed ExplosiveMethod into TestMethod.invokeExplosively
    - Absorbed MethodValidator into TestClass and TestMethod.
    - Removed deprecated OldTestClassRunner and TestClassRunner
    - Changed testAndTeardownFailure so that the order of failures is undefined
    - Added test for Before defined on subclass run on Test defined on superclass.
    
    This is not yet the finished refactoring.  More to come, but needed a checkpoint

[33mcommit 57302f0df76fba83ba72a676bd660efeb5881af6[m
Author: kbeck <kbeck>
Date:   Fri Oct 5 20:47:53 2007 +0000

    Further refinement--I got rid of the Link/Anchor distinction. The bits of functionality are all Links at the moment. I also took error reporting out of Timeout (Roadie.runAfters() reports multiple errors without engaging the Link). There still seem to be some loose ends to tie up--naming, duplication, getting rid of dependencies on the enclosing instance as part of making the Links top-level classes, repackaging.

[33mcommit a58514aec7e843339be24980e92aeeb759327ffb[m
Author: dsaff <dsaff>
Date:   Fri Oct 5 16:54:35 2007 +0000

    Allowed more classes to be Anchors, more cleanup still to do

[33mcommit 4081076e513e84bb2376f889d4108e64e9a18653[m
Author: kbeck <kbeck>
Date:   Fri Oct 5 04:59:38 2007 +0000

    Big reorganization of how test methods are run. Now there are a nested set of Links which each handle one aspect of running a method. Custom runners can create their own chain of Links to introduce new behavior. This isn't done--it needs organization like extracting inner classes to top level classes and refinement of visibility.

[33mcommit 679e5dd3e4af3115492fabed45ea8c48bfa9d9bf[m
Author: dsaff <dsaff>
Date:   Wed Oct 3 18:11:21 2007 +0000

    Started to convert to Links.

[33mcommit 43b0fe352d5bced0c341640d0c630d23f2022a7e[m
Author: dsaff <dsaff>
Date:   Wed Oct 3 14:42:16 2007 +0000

    Rename TestMethod -> JUnit4MethodRunner
    Rename methods in JUnit4MethodRunner to make run order clear

[33mcommit f98130957df08de9cae93169298e04bf84388cae[m
Author: dsaff <dsaff>
Date:   Wed Oct 3 13:59:04 2007 +0000

    - Unified handling of InvocationTargetExceptions in After, Before, Test, and Theory
    - Reorganized Theory tests
    - Added Ignored test for Feature Request 1804350

[33mcommit 1fe4f2534d39f819eae3ae1a6e6169c651b0a8a8[m
Author: dsaff <dsaff>
Date:   Fri Sep 28 14:54:09 2007 +0000

    Added a test to make sure that theories can accept arrays as parameters

[33mcommit 787ed4e5bc2b68e8b5cdb6190ff1fc053f1a5b13[m
Author: dsaff <dsaff>
Date:   Tue Sep 4 17:59:38 2007 +0000

    Refactored Theory runner to make it easier to extend (See StubbedTheoriesTest for one possible extension)

[33mcommit 149ecd4dcd99697710aa350e9cd3b3bcac877125[m
Author: kbeck <kbeck>
Date:   Mon Aug 27 19:27:13 2007 +0000

    Added explicit test for subclasses that only inherit test methods.

[33mcommit 72fad621975ebd57dd608f0f36be4b81c5913bad[m
Author: dsaff <dsaff>
Date:   Mon Aug 20 15:07:34 2007 +0000

    First try at creating .releaserc for Perl release script

[33mcommit 061018f94cf1f8ad5ff86fd89e5e677e603feed2[m
Author: dsaff <dsaff>
Date:   Mon Aug 20 13:41:59 2007 +0000

    Fixed tests with hard-coded package names, broken in reorg
    Made TestMethod.getBefores and TestMethod.getAfters public

[33mcommit 35f5f3a78cdc49954e9542dafeea86f13705fdf8[m
Author: dsaff <dsaff>
Date:   Mon Aug 20 13:29:16 2007 +0000

    Reorganize tests

[33mcommit 9a192ede27ad2936b0c4a31fe5d0180dfd556d8b[m
Author: dsaff <dsaff>
Date:   Wed Aug 15 10:55:07 2007 +0000

    - Added ParameterSignature.getAnnotations
    - Broke some design dependencies

[33mcommit 0174b15e97908a4a68625cb029a07e8f7d593afc[m
Author: dsaff <dsaff>
Date:   Mon Aug 13 19:47:37 2007 +0000

    Exposed API ParameterSignature.getType

[33mcommit c43c3c5d4dc53c8477d492ed5e13d7f7c8e3d2ad[m
Author: dsaff <dsaff>
Date:   Mon Aug 13 19:32:47 2007 +0000

    Started implementing categories

[33mcommit 7ce9e33e556cf1817d94f769e09c9d22b8d2764d[m
Author: dsaff <dsaff>
Date:   Mon Aug 6 20:00:50 2007 +0000

    Leave this method in--it's used by the JMock custom runner, and possibly others

[33mcommit 79d696c81cb996e6a199b062c0ae1f53408d5ebd[m
Author: dsaff <dsaff>
Date:   Fri Jul 20 21:00:23 2007 +0000

    - `@Before` and `@After` methods are run before and after each set of attempted parameters
      on a Theory
    
    - Refactoring removed duplication that used to exist in classes MethodRoadie and ClassRoadie

[33mcommit 85c570ea92f0ee7d17573966dd7f94f4c3b0b61a[m
Author: dsaff <dsaff>
Date:   Thu Jul 19 21:13:08 2007 +0000

    Failed assumptions in @Before and @BeforeClass cause the test to pass

[33mcommit d322fe6d909c929be5e637b2adbd7da8f9264b3a[m
Author: dsaff <dsaff>
Date:   Thu Jul 19 20:32:23 2007 +0000

    Reorganization of Theory design

[33mcommit 0096ac6e8af5696387b635274ee699112f07524b[m
Author: dsaff <dsaff>
Date:   Wed Jul 18 20:26:00 2007 +0000

    Change version number and dates

[33mcommit 4ada00f2b443608ebd70869f9bfa314566bd9aa7[m
Author: dsaff <dsaff>
Date:   Wed Jul 18 20:03:32 2007 +0000

    Updated release notes with links, and read through for corrections

[33mcommit 5999d21cfbc23dcaa8aa898fa97823ff3e079d5a[m
Author: dsaff <dsaff>
Date:   Wed Jul 18 19:43:24 2007 +0000

    Brought up to date with 4.4 features

[33mcommit 1299fcddc57ce7956d87022c3e32c09b447690a3[m
Author: dsaff <dsaff>
Date:   Wed Jul 18 19:42:18 2007 +0000

    Filters and Sorters work in the presence of suite() methods

[33mcommit 7a2a3811a762d7988dc153d59c4222a6ab96bf82[m
Author: dsaff <dsaff>
Date:   Tue Jul 17 17:01:16 2007 +0000

    Refactor MethodRoadie to remove duplication
    Remove stale TODO comments in code

[33mcommit 45899955c670e52681c3a7655e1b110fa5570eb9[m
Author: dsaff <dsaff>
Date:   Mon Jul 16 15:20:09 2007 +0000

    Added both(matcher).and(matcher)
    Added either(matcher).or(matcher)
    
    allOf and anyOf did already exist, but produced typing problems

[33mcommit 7352be877c7f952d6e9e4a7ef6e85f7127b907f1[m
Author: dsaff <dsaff>
Date:   Thu Jul 12 20:05:13 2007 +0000

    Trying to explain assertThat as a new feature

[33mcommit 72ee45bed6422cbc13e7a9e64b422bb4d140f225[m
Author: dsaff <dsaff>
Date:   Thu Jul 12 17:17:38 2007 +0000

    Fix reference to experimental tests in build file

[33mcommit ee235bc8c5cf5d4345a690f1bd7e3fd1967ef8ea[m
Author: dsaff <dsaff>
Date:   Thu Jul 12 17:08:19 2007 +0000

    Re-organize theory packages

[33mcommit 3c50431945d6940d5a557ccafb4c47ff98c430f0[m
Author: dsaff <dsaff>
Date:   Thu Jul 12 16:43:57 2007 +0000

    Re-added OldTestClassRunner and TestClassRunner, since they may have been used with @RunWith to override JUnit default behavior in the past.

[33mcommit 97cc9acfa0c81cc440eb8c75c39d590f345b362b[m
Author: dsaff <dsaff>
Date:   Mon Jul 9 20:53:58 2007 +0000

    Fixed build.xml after adding Theories

[33mcommit cf84e7073227c457a3fcd59b515dd6ca25d95c51[m
Author: dsaff <dsaff>
Date:   Mon Jul 9 19:38:30 2007 +0000

    Checked in new tests to clarify behavior of JUnit4TestAdaptor in the presence of @Ignore'd tests and suite() methods, in response to bug 1700187

[33mcommit b7bb33dd040e87bb08831ee950fd788f206bb59a[m
Author: dsaff <dsaff>
Date:   Mon Jul 9 18:49:20 2007 +0000

    No tests rely on hamcrest-all

[33mcommit fcf95d1d6bfdd046f1328af108ad5376c62d50d4[m
Author: dsaff <dsaff>
Date:   Fri Jul 6 16:04:08 2007 +0000

    Tests pass without hamcrest-library

[33mcommit 22a6c6857eaef07a5d54fecfaea8db7c66f65de7[m
Author: dsaff <dsaff>
Date:   Mon Jul 2 20:59:57 2007 +0000

    Fixed bug 1745048: @After method not called after my test timeout in 4.3.1

[33mcommit 6acc164b4125da775cccd4035c1b99e9d404bacd[m
Author: dsaff <dsaff>
Date:   Mon Jul 2 18:10:57 2007 +0000

    - The hamcrest-core-1.1 library is now included in the JUnit distribution.  For more hamcrest matchers, see the hamcrest-library jar from http://code.google.com/p/hamcrest
    - The Popper Theory runner (http://popper.tigris.org) has been absorbed into the JUnit project, under the package name org.junit.experimental.theories
    - Several additional libraries used in the theories tests have been added in a new testlib directory
    
    - New "assertThat" statement to work with hamcrest matchers:
    
    // same as assertEquals(3, x)
    assertThat(x, is(3));
    
    // same as assertNull(y)
    assertThat(y, nullValue());
    
    - New feature: assumeThat.  A failed assumption will cause the test to pass, without further execution.  (The behavior of assumeThat may change in the future to allow richer reporting of tests that are skipped because of failed assumptions)
    
    // pass on any non-Windows system
    @Test public void getRootDrive() {
      assumeThat(getOsString(), is("Windows"));
      getFile("C:\");
      // ...
    }
    
    - Convenience assumption functions:
    
    // none of these are null
    assumeNotNull(a, b, c);
    assumeTrue(everythingOk());
    
    try {
      getDatabaseConnection();
    } catch (Exception e) {
      assumeNoException(e);
    }
    
    - Documentation fixed for many assertEquals array methods
    
    - Two bugs in numeric equality fixed:
    
    1718905: assertEquals does not compare float correctly
    1715326: assertEquals does not compare java.math.BigDecimal properly
    
    - The protocol for overriding JUnit4ClassRunner has changed again.  Please see the source for details.
    
    - Extenders can now extend TestMethod to describe the behavior of running methods that do not have a @Test annotation.
    
    - Adding Annotations to Description caused a binary compatibility problem with clients compiled on previous JUnit versions.  This has been fixed.

[33mcommit bd7bff7c4ca18e1d0eab5260e585d3914e5fa53d[m
Author: cmschmidt <cmschmidt>
Date:   Thu May 31 14:49:09 2007 +0000

    SF Bug: [ 1723657 ] Typo in cookbook: wrong package for JUnitCore

[33mcommit 87245d66c7a17b27478da3bf7030e1b2dc86da55[m
Author: dsaff <dsaff>
Date:   Tue May 8 14:45:18 2007 +0000

    Added script for uploading docs

[33mcommit 31f3f7c98f3a2a0fd134c3c9c823ea7c187f5d5e[m
Author: dsaff <dsaff>
Date:   Tue May 8 13:51:57 2007 +0000

    Updated the section heading

[33mcommit e8a2d8e83f724cf646e2769d2617aae53bda5ed5[m
Author: dsaff <dsaff>
Date:   Thu Apr 26 20:21:21 2007 +0000

    Merge build script with 4.3.1

[33mcommit dabf9f919413ef7f86c95140502792bcaa2b842a[m
Author: dsaff <dsaff>
Date:   Thu Apr 26 19:56:30 2007 +0000

    [Junit-trackers] [ junit-Bugs-1684562 ] assertEquals throws NPE while comparing null elements
    Descriptions now have Annotations

[33mcommit 3b75d00dafe4851195ddcd2f8810a18a55e43514[m
Author: dsaff <dsaff>
Date:   Thu Mar 22 17:47:52 2007 +0000

    @Ignore javadoc
    
    Fix TestClass method visibility
    
    Update build.xml to produce snapshots

[33mcommit 521fdb5aae536bd5055f6d0e4f09c5a7bdb5799f[m
Author: dsaff <dsaff>
Date:   Tue Mar 20 14:43:49 2007 +0000

    Runner rearchitecting to begin 4.4 development

[33mcommit db89759c22060a89f6750e2e92ce93072eace561[m
Author: dsaff <dsaff>
Date:   Tue Mar 20 14:12:23 2007 +0000

    Fix upload ant task, and cleaned up ant tests

[33mcommit 24eacde6262fbb3ce096fe59e8df93907b7622ae[m
Author: dsaff <dsaff>
Date:   Sat Mar 10 07:10:32 2007 +0000

    Created a separate build directory for new build scripts, including FTP upload

[33mcommit 8ce9b2ff45fbae2c7af1a3d535b2553c8e2b78f9[m
Author: dsaff <dsaff>
Date:   Wed Mar 7 19:50:50 2007 +0000

    Updated David's website

[33mcommit 121f283a3af706d089cd7409d9bb74dea54ac3c7[m
Author: dsaff <dsaff>
Date:   Wed Mar 7 19:47:59 2007 +0000

    Moving version number up to 4.3

[33mcommit 8329046bbb6cda855e6abe5f2007b86889770a3d[m
Author: kbeck <kbeck>
Date:   Sun Mar 4 20:58:28 2007 +0000

    Cleaned up an obsolete comment

[33mcommit 5751178d6c4485afb11f4b14b9804dc954faa5ee[m
Author: kbeck <kbeck>
Date:   Fri Mar 2 16:19:25 2007 +0000

    Moved duplicated code to RunNotifier.testAborted()

[33mcommit 67e270ef6be1e50b2e86f39d27750340c8482198[m
Author: dsaff <dsaff>
Date:   Tue Feb 27 17:51:30 2007 +0000

    Added javadoczip target to build.xml, and some better separation in build.xml while I'm at it.

[33mcommit 187f007d0ffd3fde3374ad54056af34eb10f905a[m
Author: dsaff <dsaff>
Date:   Tue Feb 27 16:19:30 2007 +0000

    Refactored AntUnit tests into fast and slow tests

[33mcommit e609d1de4edea2e09d0fc62f65a690131632b824[m
Author: dsaff <dsaff>
Date:   Tue Feb 27 16:17:07 2007 +0000

    Removed untrue TODO

[33mcommit edf02bd3727d8706e7854c151abcb7bb314842a7[m
Author: dsaff <dsaff>
Date:   Wed Feb 21 20:26:29 2007 +0000

    Fixing exception handling and documentation

[33mcommit 3d170535ebe4f6a5f921d9376c0318a70f1ee679[m
Author: dsaff <dsaff>
Date:   Wed Feb 21 18:25:21 2007 +0000

    With ant-1.7, this directory contains files for testing build.xml, which is useful for forward migration

[33mcommit 52b67dfe70a717223859a20d389302303e22c681[m
Author: dsaff <dsaff>
Date:   Wed Feb 21 18:24:10 2007 +0000

    Test handling of private suite() methods

[33mcommit a9482d75217d0ae1ad8220515ed22a9245a822fc[m
Author: dsaff <dsaff>
Date:   Wed Feb 21 17:12:37 2007 +0000

    Better error message when a custom runner has a wrongly-signatured constructor

[33mcommit 7f08797ece011ff765e98635323d59811363df5b[m
Author: dsaff <dsaff>
Date:   Wed Feb 21 15:19:39 2007 +0000

    Improving test coverage on OldTestClassRunner and AllTestsRunner

[33mcommit 141a144b3d4aca9a1f39f92c1d697a249e991317[m
Author: dsaff <dsaff>
Date:   Wed Feb 21 14:46:51 2007 +0000

    Rename validateAllMethods to validateMethodsForDefaultRunner, which is clearer

[33mcommit 1357ec0cc6f439e3e4a9d818138b36b9347f0a3d[m
Author: dsaff <dsaff>
Date:   Wed Feb 21 14:44:00 2007 +0000

    Removed EmptyDescription, which was unneeded, and the only reason why Description had a protected constructor

[33mcommit 071887a1353d6e34de306e93ef0a9818cf75fdea[m
Author: kbeck <kbeck>
Date:   Thu Feb 8 22:45:20 2007 +0000

    Fixed various defects.

[33mcommit de7ac4a1c3c7c9e59befe41d120daaa7827b7b24[m
Author: kbeck <kbeck>
Date:   Thu Feb 8 03:29:22 2007 +0000

    Added class names to error message when two values fail the equality test but produce the same toString().

[33mcommit aa7047aacc6dee8bc7f07da92ffa4a661737ca63[m
Author: dsaff <dsaff>
Date:   Fri Jan 26 14:04:13 2007 +0000

    Eclipse thinks commas at the end of array initialization expressions are OK.  Javac disagrees.  Moved in favor of javac

[33mcommit 3d7fee93ddc21a6e849c36d5ae58b37b3d189665[m
Author: dsaff <dsaff>
Date:   Wed Jan 24 16:32:59 2007 +0000

    Can @Ignore classes
    assertArrayEquals added

[33mcommit 88f0fe3ced24506ddf9791f7a088163f4e7b1f20[m
Author: dsaff <dsaff>
Date:   Wed Dec 27 22:27:22 2006 +0000

    Another potential enhancement.  RunMethodWith allows individual test methods to be run with different runners.

[33mcommit 890b7b977e42360aa8975c8535fc66bfd8d8cb3e[m
Author: dsaff <dsaff>
Date:   Wed Dec 27 17:45:54 2006 +0000

    Added ability to "mix in" test elements from another class

[33mcommit 6a83bc0f1e5f9839a36910c3a21108bc38367afb[m
Author: dsaff <dsaff>
Date:   Wed Dec 13 02:10:50 2006 +0000

    JUnitCore can run a class with a suite() method.

[33mcommit 10b674dbba2a8ceadb65dfc8e8033072f41fc2aa[m
Author: kbeck <kbeck>
Date:   Wed Dec 6 01:22:48 2006 +0000

    Fixed problem with RepeatedTest error message
    Organized all imports
    Wrote but didn't integrate test for backwards compatibility of suite()

[33mcommit 1097f2c22f97cb4b4818b79b83fa92f14fc3ace5[m
Author: dsaff <dsaff>
Date:   Thu Nov 30 20:00:21 2006 +0000

    Ignoring the timeout test, so that gump can run.  Need to fix this later.

[33mcommit bc24f5bd6d9239a3987424e47b0babc7f8e528a8[m
Author: dsaff <dsaff>
Date:   Thu Nov 30 15:07:16 2006 +0000

    Need to create bin dir in build.xml for users not on Eclipse.

[33mcommit af00f9e05ab1c9e6eb7aec69841a61163ba75f02[m
Author: cmschmidt <cmschmidt>
Date:   Wed Nov 22 06:29:43 2006 +0000

    changed to ASCII

[33mcommit 2286815454cfdf9480f954adb31439b26d25710f[m
Author: dsaff <dsaff>
Date:   Tue Nov 21 19:52:30 2006 +0000

    Fixed two bugs:
    
    RunWtih(Suite) should not require a default constructor
    Test(timeout) was taking twice as long as specified

[33mcommit 40cc52cf5f5dc1dd1ee513410536bdc11422307d[m
Author: dsaff <dsaff>
Date:   Tue Nov 21 18:53:33 2006 +0000

    Created a separate src folder for sources, and adjusted Eclipse classpath and build file accordingly

[33mcommit 64f4559a7b6099ff4f71281aab4029473ca9f469[m
Author: cmschmidt <cmschmidt>
Date:   Mon Nov 20 14:03:15 2006 +0000

    *** keyword substitution change ***

[33mcommit 7d017e6b9bff902dc6e421f3c2114501c784905b[m
Author: cmschmidt <cmschmidt>
Date:   Fri Nov 17 08:25:23 2006 +0000

    *** keyword substitution change ***

[33mcommit 0cdf29715af64edd05229c400f214417fecdef89[m
Author: dsaff <dsaff>
Date:   Thu Nov 16 19:17:41 2006 +0000

    - Fixed raw types because Eclipse 3.3 told us to.
    - No longer dynamically check arrays that are statically typed as objects.
    - Update documentation to 4.2

[33mcommit 5139a1be36da4ed64a860de82e7d74f2e5405037[m
Author: kbeck <kbeck>
Date:   Thu Nov 2 22:56:55 2006 +0000

    Fixed defect with cyclical Suites.

[33mcommit e08329cae4a1198e124c7615e92f44a7319a2cb8[m
Author: kbeck <kbeck>
Date:   Wed Oct 4 23:27:13 2006 +0000

    Fixed tests for assertSame and assertNotSame.

[33mcommit 0495321897d3aeffb0a5e63660b2b2d842d6e5df[m
Author: kbeck <kbeck>
Date:   Wed Oct 4 23:17:11 2006 +0000

    Fixed Windows dependency in JUnitCoreTest.

[33mcommit 398bf2652efda067329f9fdedd13cd8e466c3be4[m
Author: kbeck <kbeck>
Date:   Sat Sep 30 00:35:00 2006 +0000

    Comparing arrays declared as Object now uses array comparison. There was also a strange change to the .classpath file that I reverted.
      -- Kent

[33mcommit 048055d0625e2b6ca28b04ce4745c80c939b1a5c[m
Author: cmschmidt <cmschmidt>
Date:   Fri Aug 25 15:11:57 2006 +0000

    Javadoc improvements:
    - code examples are surrounded by a <pre>-tags
    - Annotations in code examples use &#064; instead of the at-sign @
    - some more @link links
    - param comments start with lower case letters
    - clarification for the assertXY() method javadocs for null-params

[33mcommit b4e915892bef6d4885cbde7db91476a0a9138c4f[m
Author: cmschmidt <cmschmidt>
Date:   Fri Aug 25 14:43:02 2006 +0000

    Javadoc improvements:
    - code examples are surrounded by a <pre>-tags
    - Annotations in code examples use &#064; instead of the at-sign @
    - some more @link links
    - param comments start with lower case letters

[33mcommit 8d1e468016af6316c94c14821f48774995f115e1[m
Author: cmschmidt <cmschmidt>
Date:   Fri Aug 25 14:37:09 2006 +0000

    *** empty log message ***

[33mcommit 66efcf66d29323e964bbac33b4572d14dc29b60b[m
Author: cmschmidt <cmschmidt>
Date:   Fri Aug 25 14:01:36 2006 +0000

    Javadoc improvements:
    - code examples are surrounded by a <pre>-tags
    - Annotations in code examples use &#064; instead of the at-sign @
    - some more @link links
    - param comments start with lower case letters

[33mcommit c73e37759ed5119900f1ddf3f50dac5bb3ae19be[m
Author: kbeck <kbeck>
Date:   Thu Aug 3 22:03:01 2006 +0000

    Fixed various defects.

[33mcommit b0c0b79ae5e0dcfc1670cf950d31a14f1c9c630c[m
Author: kbeck <kbeck>
Date:   Fri Jul 21 03:15:34 2006 +0000

    Fixed problems with assertEquals(null, String, String) and return code when classes aren't found.

[33mcommit 5cfc92d9ee355a316619563c6cb6e2834d130b01[m
Author: kbeck <kbeck>
Date:   Thu Jun 29 23:06:45 2006 +0000

    Deleted excluded.properties
    
    Made it possible to run org.junit.tests from Eclipse. The results are still strange because Eclipse finds all the inner classes that are supposed to fail. This required creating an EmptyDescription.

[33mcommit be2fbfe3e2fb20a1ab11e9759f000fe6c143e544[m
Author: dsaff <dsaff>
Date:   Thu Jun 29 12:43:22 2006 +0000

    Someone doesn't like commas at the end of annotation lists

[33mcommit 53b526ebaa46a5027cf1bc5a820b47badc83a3ed[m
Author: dsaff <dsaff>
Date:   Wed Jun 28 20:55:36 2006 +0000

    Methods on inaccessible superclasses of test classes are caught during validation

[33mcommit 2d1e224c4e596521345d0af05b8f0997c18ecd50[m
Author: kbeck <kbeck>
Date:   Sat Jun 24 02:52:11 2006 +0000

    Fixed problem with null message to fail()

[33mcommit ee76b28e432a94c33160b3edc7cb60b6394ac0cc[m
Author: kbeck <kbeck>
Date:   Thu Jun 1 22:27:29 2006 +0000

    Fixed multi-dimensional array comparison error message. kb & ms

[33mcommit e060609ca85c723422684450b46dade931b0948a[m
Author: kbeck <kbeck>
Date:   Tue May 30 20:39:16 2006 +0000

    Fixed small problem with Cookbook

[33mcommit a04c2a15112b426fcb86f8111b66d69c6d8e5a2f[m
Author: dsaff <dsaff>
Date:   Thu Apr 27 22:11:51 2006 +0000

    An annotated method is no longer hidden by an overloading method.

[33mcommit 1a3b19c3609c0a1be7624ddce2ac69a1de79f779[m
Author: dsaff <dsaff>
Date:   Thu Apr 27 22:08:57 2006 +0000

    4.1 release notes

[33mcommit 0d365192522ffc18179e041def33b7e8bd870666[m
Author: dsaff <dsaff>
Date:   Thu Mar 23 02:20:55 2006 +0000

    Updated date in README

[33mcommit 9ed4ce203f53d75f2ade7760b9e7ee4494df8436[m
Author: dsaff <dsaff>
Date:   Fri Mar 17 02:41:10 2006 +0000

    Xlint:unchecked added to compilation

[33mcommit 57f06901cde6ec806d4f4381670466ab5fbac300[m
Author: dsaff <dsaff>
Date:   Thu Mar 16 22:11:52 2006 +0000

    Updated README about Enclosed

[33mcommit a7d3b25c9224f0d9f8998d01ed9b28cbf3860105[m
Author: dsaff <dsaff>
Date:   Thu Mar 16 22:09:12 2006 +0000

    Enclosed is generally useful, and belongs in org.junit.runners

[33mcommit 42ed30ec5aee7888b5e2c19c836cee152b250948[m
Author: dsaff <dsaff>
Date:   Wed Mar 15 18:20:05 2006 +0000

    README up to date for 4.1

[33mcommit 279885653a3d94922c034e65f9e26017015fea5a[m
Author: kbeck <kbeck>
Date:   Tue Mar 14 23:47:17 2006 +0000

    Improved documentation home page slightly.

[33mcommit c5a4117b03f13da0f86e88116fd44979dede766a[m
Author: kbeck <kbeck>
Date:   Tue Mar 14 19:45:40 2006 +0000

    Checked in package-infos from Matthias Schmidt

[33mcommit 65d6b62dd60c434447544c5419ef4eeecb4c645d[m
Author: dsaff <dsaff>
Date:   Fri Mar 10 00:52:15 2006 +0000

    Patched javadoc, thanks to Matthias Schmidt
    RunWith is @Inherited
    Added acknowledgements
    to-do is up to date

[33mcommit 23ab51791a15063027d70ec2894927f14ac9868c[m
Author: dsaff <dsaff>
Date:   Wed Mar 8 21:22:53 2006 +0000

    Correct version handling, with template

[33mcommit 961711076c24c073e4d1ab9eb3e8e5bad87dfdd1[m
Author: dsaff <dsaff>
Date:   Mon Feb 27 19:01:37 2006 +0000

    Removing class file from repository

[33mcommit aad05f2df9dfb731364b400dc938e93e0c809c16[m
Author: kbeck <kbeck>
Date:   Fri Feb 24 01:49:51 2006 +0000

    Project cleanup

[33mcommit d42e2fbc0acd8cb731d265e0b6581eff924536da[m
Author: clarkware <clarkware>
Date:   Mon Feb 20 18:49:32 2006 +0000

    Not using the generics syntax gives a compiler warning.

[33mcommit 40fbc5dc1ca9be0229f512d20c330c38a097ff32[m
Author: clarkware <clarkware>
Date:   Mon Feb 20 18:11:08 2006 +0000

    Updated test fixture section per Jeff Nielsen.

[33mcommit 5b9858497a7ab030933e62a446ce901673c612df[m
Author: kbeck <kbeck>
Date:   Sun Feb 19 20:04:01 2006 +0000

    Corrected javadoc to refer to early versions as 3.8.x

[33mcommit d30d725d2ee4c6da018283a39b44e9096ea8a243[m
Author: kbeck <kbeck>
Date:   Fri Feb 17 21:38:10 2006 +0000

    Fixed TextRunner time printing defect. Began using @link in javadoc

[33mcommit 168fe0844e104a224a5899b02dfd3e0fb07a32e3[m
Author: kbeck <kbeck>
Date:   Thu Feb 16 08:29:33 2006 +0000

    Final changes for release

[33mcommit 478f7f9217cf5da219a7ba298e3a87f405378194[m
Author: dsaff <dsaff>
Date:   Wed Feb 15 22:55:26 2006 +0000

    Merged with branch, Kent will make final changes and launch.

[33mcommit a0f0ee1b3f72d9361eb09b3a25156c69a748aa47[m[33m ([m[1;33mtag: r3.8.2[m[33m)[m
Author: clarkware <clarkware>
Date:   Tue Dec 28 17:19:01 2004 +0000

    Now XHTML compliant

[33mcommit 5d91ecd547859b70559fb76393a341d54acf5a04[m
Author: clarkware <clarkware>
Date:   Tue Dec 28 04:00:15 2004 +0000

    Styled for easier maintenance.

[33mcommit 0954736a4d4436436e0c12d5700100ac6b8aa1da[m
Author: egamma <egamma>
Date:   Wed Nov 17 22:47:23 2004 +0000

    run awtui and swingui with -noload

[33mcommit 3e589db711664ba2b3cbf599d3e1b395ed5d89ec[m
Author: egamma <egamma>
Date:   Wed Nov 17 22:46:47 2004 +0000

    disabled single method run test

[33mcommit fb9f199f0ff53dded91ebb483aab7483a6e7e12a[m
Author: egamma <egamma>
Date:   Wed Nov 17 22:46:22 2004 +0000

    fixed generated argument names

[33mcommit a0ce8855c7dab8846531d9743ecdc0e449736b1e[m
Author: egamma <egamma>
Date:   Wed Nov 17 22:08:16 2004 +0000

    changed to use JRE class path container

[33mcommit 9744e4e58f7c6d327f7b83c73c074151e095d3d1[m
Author: egamma <egamma>
Date:   Wed Nov 17 22:07:28 2004 +0000

    updated for 3.8.2

[33mcommit 0c47f4ce9d355bf48734394707eb96f3d68faecf[m
Author: egamma <egamma>
Date:   Wed Nov 17 22:07:06 2004 +0000

    added NullResultPrinter to suppress the output

[33mcommit ca34af5cdd23e98a2d3899a87427e036c55964da[m
Author: egamma <egamma>
Date:   Wed Nov 17 22:06:08 2004 +0000

    fixed javadoc formatting

[33mcommit 22c88b4af17fa8965df4dc75ac500197e33f82cc[m
Author: egamma <egamma>
Date:   Sat Nov 13 00:33:19 2004 +0000

    fixed typo

[33mcommit 7dc6ac514b7ad0a13d1a765c85ac82d78ab6dea8[m
Author: egamma <egamma>
Date:   Sat Nov 13 00:33:00 2004 +0000

    update script to not include settings and style sheet in the src.jar

[33mcommit 38f9586a3f645d9ccc1bce6fc80ac7093a01f795[m
Author: clarkware <clarkware>
Date:   Thu Oct 28 15:39:10 2004 +0000

    *** empty log message ***

[33mcommit 4dbf7b50f62a1504af2ffa959383405467ea763b[m
Author: kbeck <kbeck>
Date:   Sun Oct 24 07:45:54 2004 +0000

    [ 654507 ] Printing version number

[33mcommit a0fcd02fd011ac868de148484d3ae506867e6b91[m
Author: egamma <egamma>
Date:   Sun Oct 24 07:37:06 2004 +0000

    removed 1.5 warnings related to varargs

[33mcommit ba28bf0f0384ba8b2fc377ef612545f411a56ec4[m
Author: kbeck <kbeck>
Date:   Sun Oct 24 06:41:48 2004 +0000

    [ 609972 ] "..." in ComparisonFailure

[33mcommit ece77fa477a6d322bb5b37c7e2367f4c4dfbf9f3[m
Author: kbeck <kbeck>
Date:   Sat Oct 23 22:07:48 2004 +0000

    [ 774304 ] Fix for JUnit 3.8.1 does not compile with JDK 1.1

[33mcommit 22faf2f277960760eb373563891dcd129ece8cb6[m
Author: kbeck <kbeck>
Date:   Sat Oct 23 22:05:36 2004 +0000

    added support to add an array of test classes

[33mcommit 432e7e4e96d400e16f6fd64e01d70e6fad90bc8f[m
Author: kbeck <kbeck>
Date:   Sat Oct 23 06:47:22 2004 +0000

    [ 908467 ] Run one test method for junit

[33mcommit fd347129415e030051b3a9ba06db4819876b6ed3[m
Author: kbeck <kbeck>
Date:   Sat Oct 23 05:28:40 2004 +0000

    [ 996352 ] Remove silly code

[33mcommit 20cdb2e788ba21c9de949610d597f6cc0c86899c[m
Author: kbeck <kbeck>
Date:   Sat Oct 23 01:06:41 2004 +0000

    [ 609819 ] NaN's in assertEquals

[33mcommit 3b3ddfb534daa710926143ca820723a4ee6c7d3d[m
Author: kbeck <kbeck>
Date:   Sat Oct 23 00:34:44 2004 +0000

    [ 620039 ] BaseTestRunner.setPreference static

[33mcommit f26e25b88affec8717d8edee8df35fe771d44033[m
Author: kbeck <kbeck>
Date:   Sat Oct 23 00:18:34 2004 +0000

    [ 658044 ] failNotEquals() should be protected
    
    We made all the varieties of fail*() public.

[33mcommit 68c5ef13b49282e2497d1381ce98ef213660ef2f[m
Author: kbeck <kbeck>
Date:   Fri Oct 22 22:06:35 2004 +0000

    [ 777097 ] RFE: make private methods protected
    
    Fixed by making TestSuite.warning() public.

[33mcommit 2cd770c3511bd9ae15320ea4cd81f2ae284cc659[m
Author: kbeck <kbeck>
Date:   Fri Oct 22 21:17:29 2004 +0000

    If test.jar doesn't exist, ignore the test, don't fail. This test only makes sense when run from Ant.

[33mcommit 3214326e44841a7bdd9139c343f4f0834d4b3c70[m
Author: kbeck <kbeck>
Date:   Mon Oct 11 19:22:08 2004 +0000

    My previous fix didn't work correctly.
    This version should report exceptions thrown while running tests.
    If an exception is thrown during tearDown() also, the exception
    thrown while running the test will be reported.

[33mcommit 1d1c507cec3e0fc9b9371b2501124de5eff756c8[m
Author: clarkware <clarkware>
Date:   Thu Sep 23 21:19:56 2004 +0000

    *** empty log message ***

[33mcommit 2d4de578646b902be1e0d0f291ab7ea7d9176067[m
Author: clarkware <clarkware>
Date:   Fri Sep 17 23:02:47 2004 +0000

    *** empty log message ***

[33mcommit 255f47231f5e49373d4b331e3a946e0005f1e0f4[m
Author: egamma <egamma>
Date:   Sat Sep 11 13:49:07 2004 +0000

    removed some warnings

[33mcommit ffd5f087e9b0ffaf146c91323adcf0ffdf469b0f[m
Author: kbeck <kbeck>
Date:   Fri Sep 10 18:27:23 2004 +0000

    Make sure an exception thrown during tearDown() doesn't mask an
    exception thrown during running the test. I don't much like the TestCase.runBare()
    code but I can't see how to simplify it. It was so much simpler before. Sniff...

[33mcommit 3b5085dec3f1fd578c5109114bd02370bea48fda[m
Author: kbeck <kbeck>
Date:   Thu Sep 9 21:53:54 2004 +0000

    Fixed two warnings

[33mcommit 108dc8c751471e4737233a4fe8eff810a23977d9[m
Author: egamma <egamma>
Date:   Fri Sep 3 16:27:28 2004 +0000

    incorporate find bugs findings

[33mcommit 45fd0de94ec90d56f0c76b896b8eb809e6858d7c[m
Author: egamma <egamma>
Date:   Wed Sep 1 21:37:07 2004 +0000

    removed the umlauts in the comments

[33mcommit 4e318125bb801e9aaa8ab48929348072a55f6747[m
Author: clarkware <clarkware>
Date:   Tue Jun 1 14:10:16 2004 +0000

    *** empty log message ***

[33mcommit c3c1b5edd8053bbce99d954d4abc2361ead06fd5[m
Author: emeade <emeade>
Date:   Wed Feb 11 04:12:58 2004 +0000

    Fixes bug reported on Support Request 615265
    swingui progress bar color on Mac OS X

[33mcommit d2dce1b179fc6481e4ee4534738924fa59088c13[m
Author: emeade <emeade>
Date:   Thu Dec 25 01:51:34 2003 +0000

    Add org.apache.common.logging.* to excluded.properties. closes tracker 677417

[33mcommit 0f0c479d1a6b1a8ebaddaf544c9ed1754bdc9954[m
Author: emeade <emeade>
Date:   Sun Dec 21 05:47:46 2003 +0000

    fix to follow coding convention

[33mcommit 5a274eab9d8434c70adfc57695d3bbfeceddfa91[m
Author: emeade <emeade>
Date:   Sat Dec 20 20:22:24 2003 +0000

    fix doc

[33mcommit b832960d33a9aa0dda51d7e5b41ae5de2ab4e334[m
Author: emeade <emeade>
Date:   Sat Dec 20 18:30:46 2003 +0000

    assert to assertTrue

[33mcommit 6c18a8d98aaa5f5751493b8ac00431f6f4fb75e2[m
Author: emeade <emeade>
Date:   Wed Dec 10 17:12:01 2003 +0000

    Fix cut-n-paste error for assertNotSame javadocs

[33mcommit 9dd2616c05d9e353e1be1bc96a2287fdd965f2b5[m
Author: clarkware <clarkware>
Date:   Sun May 25 21:03:28 2003 +0000

    Fixed broken link to "How To Ask Questions The Smart Way".

[33mcommit f0c169f7af027b6b6a3e264fa98d6055f13398a9[m
Author: clarkware <clarkware>
Date:   Tue Apr 22 16:25:29 2003 +0000

    Added "How do I write a test for an abstract class?"

[33mcommit 2523364e09fe40d54ddcdbc81c40e7548bf935c5[m
Author: clarkware <clarkware>
Date:   Thu Mar 20 18:55:54 2003 +0000

    Added "How do I organize all test classes in a TestSuite automatically and not use or manage a TestSuite explicitly?"

[33mcommit 61dfcc67fee2df96355f205eda9b9fe6af3c3f71[m
Author: clarkware <clarkware>
Date:   Fri Feb 28 22:13:37 2003 +0000

    Added "How do I get one test suite to invoke another?"

[33mcommit 083acd2f432542db486a4f3aa1df368c3dac3bf3[m
Author: clarkware <clarkware>
Date:   Tue Jan 28 22:54:39 2003 +0000

    Added "Is there a basic template I can use to create a test?"

[33mcommit 7b86b4065077ecf711cae16f3e779e1fbc2c727d[m
Author: clarkware <clarkware>
Date:   Thu Dec 19 03:07:27 2002 +0000

    Added Eric Armstrong's submissions to the "Running Tests" section.
    
    Ain't that classpath just a bundle of joy?

[33mcommit a692440f7c4a5d96757d80b5e1380c6967391f0c[m
Author: clarkware <clarkware>
Date:   Wed Nov 13 14:36:55 2002 +0000

    Added "How do I pass command-line arguments to a test execution?"

[33mcommit ac8987f34381faf8a4bb8d55b50c6fc61751bfbc[m
Author: egamma <egamma>
Date:   Mon Sep 2 22:22:44 2002 +0000

    removed some unused methods

[33mcommit 39ed4a7c60e0162a514a163ba4033f4e6872ff7f[m
Author: kbeck <kbeck>
Date:   Sun Sep 1 15:29:53 2002 +0000

    Oops. Assertion tests can't use the standard format for exception tests because the exception to be thrown is AssertionFailedError and the exception that signals failure is also AssertionFailedError.

[33mcommit 6e9188321f116b8c21f7efa46e7ed20957ae128c[m
Author: kbeck <kbeck>
Date:   Sun Sep 1 15:29:53 2002 +0000

    Oops. Assertion tests can't use the standard format for exception tests because the exception to be thrown is AssertionFailedError and the exception that signals failure is also AssertionFailedError.

[33mcommit f41f48d8f0a71620b878617e5fffb4b48c872978[m
Author: kbeck <kbeck>
Date:   Sun Sep 1 15:18:57 2002 +0000

    Reorganized the AssertTest, which had grown unwieldy.

[33mcommit d3b3a19c78435ef6b0d1c8832bcdb1a8d5ed6a4e[m
Author: egamma <egamma>
Date:   Sat Aug 31 22:29:52 2002 +0000

    fix for 602948 Swing UI: NoSuchMethodError on JDK 1.3

[33mcommit 395e144b73b2cad89fdab8f7cc9ce12b24f9ec3b[m
Author: egamma <egamma>
Date:   Sat Aug 31 22:28:57 2002 +0000

    removed unused parameters/fields as detected by PMD

[33mcommit 819de4cce0eac9adeb2b1797a1716addbde9a99a[m
Author: egamma <egamma>
Date:   Sat Aug 31 22:26:01 2002 +0000

    fixed incorrect testComparisonErrorMessage test

[33mcommit 5d0898b619950ecadbb2365d055ec20706352049[m
Author: kbeck <kbeck>
Date:   Sat Aug 31 16:48:32 2002 +0000

    Factored out commonality between ComparisonFailure and Assert. There still looks to be more to do in Assert itself.

[33mcommit a24fe64ac4c88a0bc449df76c627405faa100b6b[m
Author: egamma <egamma>
Date:   Sat Aug 31 16:44:09 2002 +0000

    backed out calling setContextClassLoader on the test thread

[33mcommit 8a30e5a31972c7d43c17189b6b901baeee027561[m
Author: emeade <emeade>
Date:   Sat Aug 31 12:47:58 2002 +0000

    Pointed Javadoc urls which are not include in the javadocs to the javadocs
    on JUnit.org.

[33mcommit e7707e88ef3b20655d91513c6ed90c5e3db62cc8[m
Author: egamma <egamma>
Date:   Sat Aug 31 10:59:44 2002 +0000

    improved names of test methods

[33mcommit 8c1784e4b026417ed381ac5f0a7e2dda9084d7b0[m
Author: egamma <egamma>
Date:   Fri Aug 30 20:21:45 2002 +0000

    fixing 601326

[33mcommit c62a58a526b01761c0b905961b87d1a762fc1df9[m
Author: egamma <egamma>
Date:   Sat Aug 24 00:22:07 2002 +0000

    rolled back to @version@

[33mcommit 9c83dfacb901788211a479dd275f00f6cbc8f00f[m
Author: kbeck <kbeck>
Date:   Fri Aug 23 23:04:40 2002 +0000

    Put back abstract version number

[33mcommit ebe724e4b925fca5c9aeb6f7e282a5f0ae132232[m
Author: egamma <egamma>
Date:   Fri Aug 23 18:43:51 2002 +0000

    3.8 clean-up

[33mcommit 039f6e8164fbe51fbbbf4b75ae025850c8cc158f[m
Author: egamma <egamma>
Date:   Fri Aug 23 05:05:56 2002 +0000

    removed unused imports, variables

[33mcommit 4fd2425a563f009ff91d4cf40eedfe2eceacfaa1[m
Author: clarkware <clarkware>
Date:   Mon Aug 19 21:36:05 2002 +0000

    Added "Why does the "excluded.properties" trick not work when running
    JUnit's GUI from inside my favorite IDE?"
    
    Chalk another one up for that onery classpath.

[33mcommit 7fef9cd84681be68648ec1c07a4063662d1f086f[m
Author: clarkware <clarkware>
Date:   Thu Jul 25 01:22:54 2002 +0000

    Added "Why do I get a NoClassDefFoundError when trying to test JUnit or run the samples?"

[33mcommit e0882d4a4eddd90f56511410440c4c41679856c6[m
Author: clarkware <clarkware>
Date:   Thu Jun 27 19:20:52 2002 +0000

    Added "Do I need to write a TestCase class for every class I need to test?"

[33mcommit 815f7e7966f2d09382273fe34cf40452c94eb47b[m
Author: kbeck <kbeck>
Date:   Wed Jun 26 22:33:35 2002 +0000

    Fixed small comments

[33mcommit a19a2d6c0c454c83d368a561252bf7f4b202f8ea[m
Author: egamma <egamma>
Date:   Tue Jun 25 08:08:18 2002 +0000

    moved the the comparison failure tests to the AssertTests

[33mcommit 4e8768dd8ffe28efea98454338f79ee40d8d3ebe[m
Author: egamma <egamma>
Date:   Tue Jun 25 07:18:18 2002 +0000

    overloaded assertEquals for Strings so that string prefix/suffix compression is only done when comparing Strings

[33mcommit 0f8075aba2fc1bba1b0c145e28bb99b5da31928f[m
Author: egamma <egamma>
Date:   Tue Jun 25 07:05:58 2002 +0000

    simplified string prefix/suffix computation

[33mcommit 15a124877d38d668808ae250821aa3d4327f7758[m
Author: kbeck <kbeck>
Date:   Mon Jun 24 19:36:26 2002 +0000

    The problem is better solved by only using ComparisonFailure
    when comparing Strings. Once we have more experience of
    actual usage of ComparisonFailure, we can consider expanding
    it to comparisons of objects.

[33mcommit a76e7c3915e821ed92e143f52e9a040123c986d3[m
Author: vbossica <vbossica>
Date:   Mon Jun 24 19:22:34 2002 +0000

    FailNoEquals: passing of null parameters

[33mcommit 7ab8d5e4fc2a796e0e4f4fd337fa5d15d07b0993[m
Author: kbeck <kbeck>
Date:   Mon Jun 24 19:13:20 2002 +0000

    Fixed timing problem in TextFeedbackTest.testError()

[33mcommit 858fe281c8412ea60f24b6862b0bd5f75058624a[m
Author: egamma <egamma>
Date:   Sat Jun 22 00:36:49 2002 +0000

    [ 556019 ] enables FailureRunView hor scrollbar

[33mcommit 2a57cc62edbc06b83c68d81dea87bbe43c46e20f[m
Author: egamma <egamma>
Date:   Sat Jun 22 00:28:03 2002 +0000

    added support for reporting only the deltas for failed assert equals

[33mcommit c15ba99f8f498b20a10df6a92f04d22182c2c964[m
Author: clarkware <clarkware>
Date:   Thu Jun 20 16:32:26 2002 +0000

    Added "What's the difference between a failure and an error?"

[33mcommit eeb14df62833b3901ad293f689ed8deb9e2c5e78[m
Author: clarkware <clarkware>
Date:   Tue Jun 18 18:04:47 2002 +0000

    Added removal of junit.jar from classpath when uninstalling.
    
    Minor corrections.

[33mcommit 68287e8b636eb95d5470785f0e8c56d3a9abc5fa[m
Author: clarkware <clarkware>
Date:   Fri Jun 14 13:55:13 2002 +0000

    First version with new format and additional entries

[33mcommit dd541a7c7b8feaaf966e55e6c91685ea071fb3c7[m
Author: kbeck <kbeck>
Date:   Fri Apr 26 23:59:03 2002 +0000

    Method renaming for easier digestion.

[33mcommit f7e1007ff23c57400a6b81361def3da5906cfb77[m
Author: kbeck <kbeck>
Date:   Fri Apr 26 23:54:30 2002 +0000

    Money for public consumption.

[33mcommit 805855019d9ce016c997b3ea209e3e6baeb4639d[m
Author: kbeck <kbeck>
Date:   Fri Apr 12 22:49:46 2002 +0000

    Added textui.TestRunner(ResultPrinter)

[33mcommit 3944908ba2c55a76382f51f46d0693803a8dd3f4[m
Author: kbeck <kbeck>
Date:   Fri Apr 12 21:36:14 2002 +0000

    Cleaned up ResultPrinter

[33mcommit 395b46b73966551369e58ae65ee75783df132fa9[m
Author: kbeck <kbeck>
Date:   Fri Apr 12 18:39:30 2002 +0000

    Further along the road to simplifying textui.TestRunner

[33mcommit 4f94cdbb44242eef4dadbd8820a43883deb41386[m
Author: kbeck <kbeck>
Date:   Wed Apr 10 11:40:09 2002 +0000

    Why didn't this get added automatically, oh Eclipse gods?

[33mcommit d26e4d7876b5a4fa2100596d7e1cffe6ffdb21e3[m
Author: kbeck <kbeck>
Date:   Wed Apr 10 11:29:11 2002 +0000

    The refactoring begins.

[33mcommit 9a629cbfbc732e6b3feb382bd10e872f84ddc510[m
Author: kbeck <kbeck>
Date:   Tue Apr 9 19:09:17 2002 +0000

    Enough tests now to begin the refactoring

[33mcommit 9a866f6c679298e64194fbfa5ef82262a792824d[m
Author: kbeck <kbeck>
Date:   Tue Apr 9 18:28:02 2002 +0000

    Began writing tests for the textui.TestRunner in preparation for refactoring

[33mcommit d8a643fbaf74011eeb64695e5ec11b448960dbd5[m
Author: kbeck <kbeck>
Date:   Mon Apr 8 18:54:10 2002 +0000

    Deleted deprecated methods and classes, this time really

[33mcommit 6ce5e73d6d5507b9436a8d7dc6f23ce297368550[m
Author: kbeck <kbeck>
Date:   Mon Apr 8 18:40:59 2002 +0000

    Deleted deprecated methods and classes

[33mcommit f0f77ce58b8596850756123056b3da96a2bb6d70[m
Author: egamma <egamma>
Date:   Sun Apr 7 17:38:23 2002 +0000

    *** empty log message ***

[33mcommit 705668725299bbfcdebe5d338ed43b6ef795c623[m
Author: egamma <egamma>
Date:   Sun Apr 7 17:32:59 2002 +0000

    *** empty log message ***

[33mcommit 869f9ecfe2275b756125ca3795e64ab7f30a5a28[m
Author: egamma <egamma>
Date:   Tue Apr 2 05:35:57 2002 +0000

    removed JDK 1.4 dependency

[33mcommit 8c46dd2f3212fa331528fc92019d4f22abe2ffc1[m
Author: egamma <egamma>
Date:   Mon Apr 1 22:57:41 2002 +0000

    fixed a layout problem in the counter panel - changed the layout to a GridBagLayout

[33mcommit 7d42d5ad6f2c80405d235a1dcdeb96cf6f9c4bca[m
Author: emeade <emeade>
Date:   Sun Mar 31 22:51:49 2002 +0000

    Remove extra import.

[33mcommit 94c8b3980368f13c3e2338f84dba0acd38381102[m
Author: egamma <egamma>
Date:   Sun Mar 31 21:18:42 2002 +0000

    fixed 537502

[33mcommit 4cc2e3df5e2b49ca40518a3203fb7c7305859111[m
Author: kbeck <kbeck>
Date:   Sun Mar 31 18:09:28 2002 +0000

    Added important geographical commentary

[33mcommit 58c50f297ca8e97e76fd3851d9eef13bd0cf73e2[m
Author: egamma <egamma>
Date:   Sat Mar 30 22:48:44 2002 +0000

    rollback to correct version

[33mcommit 86b71cb1b9784a9b87c86b4f3f12632ae6773d1f[m
Author: egamma <egamma>
Date:   Sat Mar 30 22:37:40 2002 +0000

    finished support for no-arg constructor.
    tweaks to the Swing UI

[33mcommit b6a023c447628100c104708666eddd0b2eaa41d3[m
Author: emeade <emeade>
Date:   Sat Mar 30 20:04:48 2002 +0000

    coding standard

[33mcommit 0807a8cd01b6d63d54f9a3580540fa35b7fb292e[m
Author: kbeck <kbeck>
Date:   Fri Mar 29 16:10:13 2002 +0000

    Kent & Erich patch swallowing in Merlin

[33mcommit 69a8dad63d43eb1071c5823f345f290edd5a3050[m
Author: kbeck <kbeck>
Date:   Thu Mar 28 20:06:09 2002 +0000

    Deleted unnecessary .vcm_meta file.

[33mcommit efe178a2ae8557e0ee88e61a8815e50938c5cdbc[m
Author: emeade <emeade>
Date:   Thu Feb 14 21:02:38 2002 +0000

    Close bug #517421 changed example in javadoc to use assertTrue rather than
    deprecated assert.  Thanks Knut Wannheden.

[33mcommit 2e961cfee124b48fddd0d043ff8f086ae804a1f8[m
Author: emeade <emeade>
Date:   Thu Feb 14 20:58:36 2002 +0000

    Added JUnit.org stylesheet and modified build to use it.

[33mcommit afd3f23f2b0ba0a215febf59da3add777291a3ac[m
Author: emeade <emeade>
Date:   Thu Feb 14 19:45:00 2002 +0000

    How do I test things that have to run in a container (Servlets, EJBs)?

[33mcommit e461be5a58f9cb70f8dd654c3af1e5bb59b14bd6[m
Author: emeade <emeade>
Date:   Wed Feb 6 23:43:07 2002 +0000

    Added build.compiler property and properties file to allow the compiler
    to be set to jikes so CruiseControl works.

[33mcommit 6d5e6b5d5e0a2a2560ed5d99f057f766de6b542f[m
Author: emeade <emeade>
Date:   Wed Feb 6 21:12:01 2002 +0000

    Close bug #496521, thanks Scott Stirling.

[33mcommit 4770bc0dfaa769aad5799e36e2faa125401307b0[m
Author: emeade <emeade>
Date:   Wed Feb 6 20:42:19 2002 +0000

    Close bug #496519, thanks to Scott Stirling.  Added a clean target, fixed
    the hardcoded values in the zip target by making the target dependent on
    the init target.

[33mcommit b75b419058b5005edf71802c44f7e33675081aec[m
Author: emeade <emeade>
Date:   Wed Feb 6 17:59:52 2002 +0000

    Added a main to SimpleTest, thanks Lynn Allan

[33mcommit 5b07ad195f88c32c732038d49851adaa557d0487[m
Author: emeade <emeade>
Date:   Tue Feb 5 21:44:49 2002 +0000

    Fixed typo pointed out by Mike Cepek.

[33mcommit 8de968f5d538f780d6e9de438f3f299778529fc3[m
Author: emeade <emeade>
Date:   Tue Feb 5 21:28:05 2002 +0000

    Close bug #496517

[33mcommit e12333b195915fa7dd5ed32fec8b7e9adcbc95ed[m
Author: emeade <emeade>
Date:   Tue Feb 5 20:56:30 2002 +0000

    Fixed more typos, thanks Sir Toby!

[33mcommit 0000f6851ce1dcad1894006aa68a918e9c4e72c1[m
Author: emeade <emeade>
Date:   Tue Feb 5 20:01:09 2002 +0000

    Fixed typo

[33mcommit 92746afaaec65eeb1096a54326864111ab090ae4[m
Author: emeade <emeade>
Date:   Tue Feb 5 19:56:32 2002 +0000

    Answered How do I test private and protected methods.

[33mcommit 5e8bc3c92fa438bd05bba37b510a1b233c71a0bb[m
Author: emeade <emeade>
Date:   Wed Jan 16 21:40:03 2002 +0000

    Fixing broken image

[33mcommit a856c49ff91f644557e68c2291e8600c38c35a78[m
Author: emeade <emeade>
Date:   Wed Jan 16 21:39:18 2002 +0000

    Fixing broken image

[33mcommit 8183931916854d862b7e0e60fc58103af55c16ac[m
Author: emeade <emeade>
Date:   Wed Jan 16 21:35:05 2002 +0000

    Updated cookbook to reflect changes in JUnit.

[33mcommit a09388f3bfad9dcf2bb53e9f86a6b38f3ff536d5[m
Author: emeade <emeade>
Date:   Mon Jan 7 17:33:16 2002 +0000

    Changed assert to assertTrue.
    Added creating a constructor which accepts a String.

[33mcommit 591fcae09c6470a03ade7d608773f8f633409bc2[m
Author: emeade <emeade>
Date:   Mon Dec 24 01:19:19 2001 +0000

    Added more Javadoc to Assert for messages and when they are displayed.
    Put versiontag back into Version.

[33mcommit a1fef439624fe411d0bea8651324e28b134e8b4a[m
Author: kbeck <kbeck>
Date:   Mon Nov 12 00:50:04 2001 +0000

    I left tests broken, duh... Also, beginning to make TestFailure a narrower interface.

[33mcommit 9af2e559040ea3bc3db5c5d39b2c4a27098d5a76[m
Author: kbeck <kbeck>
Date:   Sat Nov 10 14:39:34 2001 +0000

    Still trying to release the new test packages

[33mcommit cd3f5f4c6a28dd1d31482c4c42de85a11ecae31a[m
Author: emeade <emeade>
Date:   Sat Nov 3 14:55:08 2001 +0000

    Back out getDisplayName.

[33mcommit f381b14b797ee0b9116221ec317b09acdf4e3ff3[m
Author: emeade <emeade>
Date:   Fri Nov 2 01:37:53 2001 +0000

    Make rerunTest identical in awtui.TestRunner and swingui.TestRunner.

[33mcommit 16a63015ab1aa619424ab74147f5f14d23669b0b[m
Author: emeade <emeade>
Date:   Wed Oct 31 19:54:34 2001 +0000

    Added net.jini.* to list of excluded classes.

[33mcommit 60ff3abb679d121d046525722b5080d2a775bca4[m
Author: emeade <emeade>
Date:   Tue Oct 30 21:04:26 2001 +0000

    Changed the usage of the word log so as not to imply a log file.

[33mcommit 73df2e474b164740d3dd7ed4fe0f8b0cfebebad0[m
Author: emeade <emeade>
Date:   Mon Oct 29 19:54:31 2001 +0000

    Fix for bug#469815.  Documentation bug.

[33mcommit 4999b51527fa32f2c17d3488ddc4095b19fa732a[m
Author: emeade <emeade>
Date:   Mon Oct 29 19:47:45 2001 +0000

    Fix for bug #471102, replaced GridBagConstrants.HORIZONTAL to NONE.

[33mcommit 4a28bf95b3c84e93aa7fbd7c3c0b4df91557a582[m
Author: emeade <emeade>
Date:   Sat Oct 27 22:14:19 2001 +0000

    Answered: Why do I get an error with the GUI TestRunners but not the textui.TestRunner?

[33mcommit bac1a14e0da7a96a6ef2ce41e425f3ded1207d7d[m
Author: emeade <emeade>
Date:   Thu Oct 25 02:49:12 2001 +0000

    Added assert FAQ.

[33mcommit d01c8286f3e876157877f2cbdb9d0afd8b07c579[m
Author: emeade <emeade>
Date:   Wed Oct 24 04:21:17 2001 +0000

    Backed out getDisplayName

[33mcommit 8010c8e15665894c10360ba19e594c75c811a3ff[m
Author: emeade <emeade>
Date:   Wed Oct 24 04:20:47 2001 +0000

    Added Why do I get a ClassCastException while calling EJB's from junit?

[33mcommit 654f32b5c304b5769564da8d3ceb2b3d268a6122[m
Author: emeade <emeade>
Date:   Tue Oct 23 23:45:30 2001 +0000

    Updated to use assertTrue.  Thanks to Dave Yost.

[33mcommit 1ebb01554a9ec2b5b2c83e7331efb80c7fda3222[m
Author: kbeck <kbeck>
Date:   Mon Oct 22 21:12:01 2001 +0000

    Experimental getDisplayName

[33mcommit 0be4c31f80dc38ddf8decbc8d6d13bd23d3ae8b1[m
Author: kbeck <kbeck>
Date:   Sun Oct 21 18:44:51 2001 +0000

    Enhanced missing test.jar error message

[33mcommit 2bcc656e58b1736090e26215267117170a99f4e8[m
Author: kbeck <kbeck>
Date:   Sun Oct 21 16:18:54 2001 +0000

    Added assertNotSame, thanks to Vladimir Bossicard

[33mcommit 8817825612894d11856312a777281b6c7cf81672[m
Author: kbeck <kbeck>
Date:   Sun Oct 21 02:30:18 2001 +0000

    Preparing for TestRunListener. Pushed TestListener implementation up to BaseTestRunner.

[33mcommit 29416b4ee89314119fb0f2d8011d63ac36531388[m
Author: kbeck <kbeck>
Date:   Sat Oct 20 00:47:47 2001 +0000

    Changed to static initialization for fPreferences in BaseTestRunner and excluded common problem causing packages.

[33mcommit 350d4a4466e9ff618e4a890a424e4a3d6bca324e[m
Author: kbeck <kbeck>
Date:   Fri Oct 19 23:48:02 2001 +0000

    Enhanced TextRunnerTest to catch missing return values.

[33mcommit 80bf23846bfe96f84e7e44436709781262cc1e14[m
Author: kbeck <kbeck>
Date:   Fri Oct 19 21:48:32 2001 +0000

    Added assertFalse.

[33mcommit 0bb3dfe2939cc214ee5e77556a48d4aea9c6396a[m
Author: kbeck <kbeck>
Date:   Tue Oct 2 19:38:22 2001 +0000

    Cleaning up MoneyBag construction

[33mcommit ce0bb8f59ea7de1ac3bb4f678f7ddf84fe9388ed[m
Author: egamma <egamma>
Date:   Mon Jul 9 22:51:53 2001 +0000

    added .classpath for eclipse

[33mcommit 3216b428b87523b6b9247bd9d84c36c2ded3a3fa[m
Author: egamma <egamma>
Date:   Mon Jul 9 22:39:54 2001 +0000

    fixed corrupt image

[33mcommit 4b4c3992e4547b4d00ea490f03398f2d0e5c8f7e[m
Author: egamma <egamma>
Date:   Mon Jul 9 22:16:13 2001 +0000

    added .vcm_meta file for eclipse

[33mcommit 2fd22847241b16be7d79a1f9de02957168aa13b9[m
Author: egamma <egamma>
Date:   Sun Jul 8 19:42:20 2001 +0000

    removed test.jar

[33mcommit 8076b782f8c9ac1df6569bbfa479db2da9e6cbcf[m
Author: egamma <egamma>
Date:   Mon May 21 20:09:24 2001 +0000

    fixed bogus release

[33mcommit 538187aac8c4858e9e366c4e4ee4e50cf40331c6[m
Author: egamma <egamma>
Date:   Mon May 21 19:50:15 2001 +0000

    changes for 3.7

[33mcommit 04f4f3197084ad9ad7c050ce1a40d6f4421662f4[m
Author: egamma <egamma>
Date:   Sun Apr 8 00:18:42 2001 +0000

    Update documentation.
    Added a SplitPane to the JUnit TestRunner.

[33mcommit bfc94ee739d62127c7477300b26127bd560765a1[m
Author: egamma <egamma>
Date:   Sun Apr 1 21:22:15 2001 +0000

    Add a checkbox to UI test runner so that user can switch
    between the standard and loading testcase class loader.
    [ #229753 ] assertEquals on NaN and Infinity does not work correctly
    [ #229287 ] Class Name too long "SimpleClassPathTestCollector"
    [ #229609 ] Stack Filtering missing in textui.TesRunner
    [ #229753 ] assertEquals on NaN and Infinity does not work correctly.
    [ #229870 ] Clicking on ... after tests failed gives NPE
    [ #229974 ] Incorrect icon shown for first element in Swing GUI
    [ #230581 ] swingui.TestTreeModel: results of decorated testcases...
    [ #230971 ] Make junit.extensions.TestDecorator.getTest() public
    [ #231569 ] DocBug: JUnit Test Infected: Programmers Love Writing Tests
    [ #232645 ] BaseTestRunner.getTest loses exception information
    [ #233094 ] TestSuite masks exceptions
    [ #410967 ] No icon provided for first test
    [ #230745 ] ClassPathTestCollector sometimes lists classes in duplicate

[33mcommit 1e752dcb0a967bcb47fae4b12fb8765e79571e69[m
Author: egamma <egamma>
Date:   Thu Jan 18 00:22:49 2001 +0000

    fixed wrong comment

[33mcommit b77b7224aecbda0c87304f44d2a28a3672e08f1f[m
Author: egamma <egamma>
Date:   Thu Jan 18 00:01:08 2001 +0000

    updgrade build.xml to ant2.0

[33mcommit 4cf0c7d9db0f7b29f65d9dab047fef9805dae671[m
Author: egamma <egamma>
Date:   Wed Jan 17 00:06:23 2001 +0000

    added missing invokeLaters in the swing test runner.
    changed the default test collector to the simple one.

[33mcommit fbb9b839e7c602f6ce30d3582452eda397b31518[m
Author: egamma <egamma>
Date:   Wed Jan 17 00:02:18 2001 +0000

    Added missing invokeLater calls for the Swing TestRunner
    Changed the default test collector to the simple test collector.

[33mcommit a8ec4efa178afdbc7844e94d08ab38b811c7409a[m
Author: egamma <egamma>
Date:   Wed Jan 10 23:23:52 2001 +0000

    fixes for JDK 1.1.7 compatibility

[33mcommit 4b1869ebb8002e5d0b82ab55460f6126043c9ec4[m
Author: egamma <egamma>
Date:   Tue Jan 9 23:39:50 2001 +0000

    JUnit 3.5 candidate

[33mcommit f268f458843fc84e83c244a5c271cc71386eb1cf[m
Author: egamma <egamma>
Date:   Mon Dec 11 22:20:03 2000 +0000

    *** empty log message ***

[33mcommit bc3741becf26f02b5af98dc0b3b151bbd2a2fc83[m
Author: egamma <egamma>
Date:   Mon Dec 11 22:17:12 2000 +0000

    fixed resources

[33mcommit de48375b1b601c32daf718c70c62f7f4b80b58aa[m
Author: egamma <egamma>
Date:   Sat Dec 9 23:29:51 2000 +0000

    handle missing icons in junit swing test runner more gracefully

[33mcommit f36edb5d03b3338fd078208a56d8beaa459a214d[m
Author: egamma <egamma>
Date:   Sat Dec 9 22:34:15 2000 +0000

    remove the old license file

[33mcommit aac9e722a36626e98794748c894cf3db3b24f4eb[m
Author: egamma <egamma>
Date:   Sun Dec 3 15:39:24 2000 +0000

    removed JDK 1.2 dependency in BaseTestRunner

[33mcommit b6a0693454ac8ded32b3a1ea7c859c5a840169dc[m
Author: egamma <egamma>
Date:   Sun Dec 3 14:36:14 2000 +0000

    Initial revision
