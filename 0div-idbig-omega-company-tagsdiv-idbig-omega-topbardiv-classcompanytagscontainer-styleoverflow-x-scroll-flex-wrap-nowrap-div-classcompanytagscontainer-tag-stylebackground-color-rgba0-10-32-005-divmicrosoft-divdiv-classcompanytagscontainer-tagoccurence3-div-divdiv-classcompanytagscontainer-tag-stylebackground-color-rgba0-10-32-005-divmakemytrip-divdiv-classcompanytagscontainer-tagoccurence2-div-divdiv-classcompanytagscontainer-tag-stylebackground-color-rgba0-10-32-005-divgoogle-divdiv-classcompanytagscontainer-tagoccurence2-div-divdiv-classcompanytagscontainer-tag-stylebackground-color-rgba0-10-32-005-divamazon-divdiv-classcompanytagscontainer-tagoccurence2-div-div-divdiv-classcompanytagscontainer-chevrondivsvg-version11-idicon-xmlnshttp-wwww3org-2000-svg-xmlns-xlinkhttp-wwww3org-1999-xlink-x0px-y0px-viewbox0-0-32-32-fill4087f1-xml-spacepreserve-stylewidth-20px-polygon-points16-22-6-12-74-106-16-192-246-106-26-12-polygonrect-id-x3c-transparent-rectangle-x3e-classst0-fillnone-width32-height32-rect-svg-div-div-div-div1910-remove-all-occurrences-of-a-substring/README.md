<h2><a href="https://leetcode.com/problems/remove-all-occurrences-of-a-substring/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Microsoft</div><div class="companyTagsContainer--tagOccurence">3</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>MakeMyTrip</div><div class="companyTagsContainer--tagOccurence">2</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Google</div><div class="companyTagsContainer--tagOccurence">2</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Amazon</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1910. Remove All Occurrences of a Substring</a></h2><h3>Medium</h3><hr><div><p>Given two strings <code>s</code> and <code>part</code>, perform the following operation on <code>s</code> until <strong>all</strong> occurrences of the substring <code>part</code> are removed:</p>

<ul>
	<li>Find the <strong>leftmost</strong> occurrence of the substring <code>part</code> and <strong>remove</strong> it from <code>s</code>.</li>
</ul>

<p>Return <code>s</code><em> after removing all occurrences of </em><code>part</code>.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters in a string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "daabcbaabcbc", part = "abc"
<strong>Output:</strong> "dab"
<strong>Explanation</strong>: The following operations are done:
- s = "da<strong><u>abc</u></strong>baabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "daba<strong><u>abc</u></strong>bc", remove "abc" starting at index 4, so s = "dababc".
- s = "dab<strong><u>abc</u></strong>", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "axxxxyyyyb", part = "xy"
<strong>Output:</strong> "ab"
<strong>Explanation</strong>: The following operations are done:
- s = "axxx<strong><u>xy</u></strong>yyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axx<strong><u>xy</u></strong>yyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "ax<strong><u>xy</u></strong>yb", remove "xy" starting at index 2 so s = "axyb".
- s = "a<strong><u>xy</u></strong>b", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>1 &lt;= part.length &lt;= 1000</code></li>
	<li><code>s</code>​​​​​​ and <code>part</code> consists of lowercase English letters.</li>
</ul>
</div>